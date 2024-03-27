//---------------------------------------------------------------------------

#pragma hdrstop

#include "uDisplayfile.h"
#include "uJanela.h"
#include "uPoligono.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)

const int INSIDE = 0; // 0000
const int LEFT = 1; // 0001
const int RIGHT = 2; // 0010
const int BOTTOM = 4; // 0100
const int TOP = 8; //1000

int calcularCodigoRegiao(double x, double y, Janela jClipping)
{
	int codigo = INSIDE;

	if (x < jClipping.xMin)
        codigo |= LEFT;
	else if (x > jClipping.xMax)
        codigo |= RIGHT;

	if (y < jClipping.yMin)
		codigo |= BOTTOM;
    else if (y > jClipping.yMax)
		codigo |= TOP;

	return codigo;
}

Poligono sutherlandHodgmanClipping(Poligono poligono, Janela jClipping) {
	Poligono resultado;

	for (int i = 0; i < poligono.pontos.size()-1; i++) {
		int proximo = (i + 1) % poligono.pontos.size();
		Ponto p1 = poligono.pontos[i];
		Ponto p2 = poligono.pontos[proximo];

        // Verifica se o ponto p1 est� dentro da janela de recorte
		bool dentro_p1 = (jClipping.xMin <= p1.x && p1.x <= jClipping.xMax && jClipping.yMin <= p1.y && p1.y <= jClipping.yMax);

		// Verifica se o ponto p2 est� dentro da janela de recorte
		bool dentro_p2 = (jClipping.xMin <= p2.x && p2.x <= jClipping.xMax && jClipping.yMin <= p2.y && p2.y <= jClipping.yMax);

        if (dentro_p1 && dentro_p2) {
            // Caso 1: Ambos os pontos est�o dentro da janela de recorte
			resultado.pontos.push_back(p2);
		} else if (dentro_p1 && !dentro_p2) {
            // Caso 2: P1 est� dentro, P2 est� fora
			Ponto intersecao;
			intersecao.x = jClipping.xMin;
			intersecao.y = p1.y + (p2.y - p1.y) * (jClipping.xMin - p1.x) / (p2.x - p1.x);
			resultado.pontos.push_back(intersecao);
        } else if (!dentro_p1 && dentro_p2) {
            // Caso 3: P1 est� fora, P2 est� dentro
			Ponto intersecao;
			intersecao.x = jClipping.xMax;
			intersecao.y = p1.y + (p2.y - p1.y) * (jClipping.xMax - p1.x) / (p2.x - p1.x);
			resultado.pontos.push_back(intersecao);
			resultado.pontos.push_back(p2);
        }

        // Caso 4: Ambos os pontos est�o fora da janela de recorte (n�o adicionamos nada)

    }

    return resultado;
}

void cohenSutherland(double &x1, double &y1, double &x2, double &y2,
	Janela jClipping, TMemo* memo)
{
	int codigo1 = calcularCodigoRegiao(x1, y1, jClipping);
	int codigo2 = calcularCodigoRegiao(x2, y2, jClipping);

	while (true) {
		if (!(codigo1 | codigo2)) { // Ambos pontos est�o dentro da janela
			//memo->Lines->Add("ambos dentro");
			break;
		} else if (codigo1 & codigo2)
		{ // Ambos pontos est�o fora da janela em uma mesma regi�o
			//memo->Lines->Add("ambos fora");
			break;
		} else {
			int codigoFora = (codigo1 != INSIDE) ? codigo1 : codigo2;

			double x, y;

			// Encontrar a interse��o com a borda da janela
			if (codigoFora & TOP) {
				x = x1 + (x2 - x1) * (jClipping.yMax - y1) / (y2 - y1);
				y = jClipping.yMax;
			} else if (codigoFora & BOTTOM) {
				x = x1 + (x2 - x1) * (jClipping.yMin - y1) / (y2 - y1);
				y = jClipping.yMin;
			} else if (codigoFora & RIGHT) {
				y = y1 + (y2 - y1) * (jClipping.xMax - x1) / (x2 - x1);
				x = jClipping.xMax;
			} else if (codigoFora & LEFT) {
				y = y1 + (y2 - y1) * (jClipping.xMin - x1) / (x2 - x1);
				x = jClipping.xMin;
			}

			if (codigoFora == codigo1) {
				x1 = x;
				y1 = y;
				codigo1 = calcularCodigoRegiao(x1, y1, jClipping);
				memo->Lines->Add("atribuicao x1,y1");
			} else {
				x2 = x;
				y2 = y;
				codigo2 = calcularCodigoRegiao(x2, y2, jClipping);
                memo->Lines->Add("atribuicao x2,y2");
			}
		}
	}
	memo->Lines->Add("clipping finalizado");
}

void DisplayFile::clipping(TMemo* memo, TCanvas* canvas, Janela mundo,
	Janela vp, Janela jClipping, int tipoReta)
{
    int size = poligonos.size();
	for (int i = 3; i < size; i++) {
//		for (int j = 0; j < poligonos[i].pontos.size() - 1; j++) {
//			//double x1 = poligonos[i].pontos[j].x;
//			//double y1 = poligonos[i].pontos[j].y;
//			//double x2 = poligonos[i].pontos[j + 1].x;
//			//double y2 = poligonos[i].pontos[j + 1].y;
//			//cohenSutherland(poligonos[i].pontos[j].x, poligonos[i].pontos[j].y, poligonos[i].pontos[j + 1].x, poligonos[i].pontos[j + 1].y, jClipping, memo);
//		}
		Poligono aux = sutherlandHodgmanClipping(poligonos[i],jClipping);
		aux.tipo = 'R';

		poligonos.push_back(aux);
	}
	desenha(canvas, mundo, vp, tipoReta);
}

std::vector<std::vector<double> > DisplayFile::multiplicarMatrizes(
	std::vector<std::vector<double> > A, std::vector<std::vector<double> > B)
{
	double linhasA = A.size();
	double colunasA = A[0].size();
    double colunasB = B[0].size();

    // Inicialize a matriz resultante com zeros
    std::vector<std::vector<double> > C(
        linhasA, std::vector<double>(colunasB, 0));

    // Realize a multiplica��o de matrizes
    for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasB; j++) {
            for (int k = 0; k < colunasA; k++) {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }

    return C;
}

Ponto DisplayFile::calcularPontoCentral(const std::vector<Ponto> &vertices)
{
    Ponto centro = { 0.0, 0.0 };
    int numVertices = vertices.size();

    for (const Ponto &p : vertices) {
        centro.x += p.x;
        centro.y += p.y;
    }

    centro.x /= numVertices;
    centro.y /= numVertices;

    return centro;
}

void DisplayFile::mostra(TListBox* lb)
{
    lb->Items->Clear();
    for (int x = 0; x < poligonos.size(); x++) {
        lb->Items->Add(poligonos[x].toString());
    }
}

void DisplayFile::desenha(
    TCanvas* canvas, Janela mundo, Janela vp, int tipoReta)
{
    canvas->Brush->Color = clSilver;
    canvas->FillRect(Rect(0, 0, 500, 500));

    for (int x = 0; x < poligonos.size(); x++) {
        poligonos[x].desenha(canvas, mundo, vp, tipoReta);
    }
}

void DisplayFile::transladar(TMemo* memo, TCanvas* canvas, Janela mundo,
    Janela vp, int tipoReta, int contId, int tx, int ty)
{

	for (int i = 0; i < poligonos[contId].pontos.size(); i++) {
		poligonos[contId].pontos[i].x += tx;
        poligonos[contId].pontos[i].y += ty;
	}
    desenha(canvas, mundo, vp, tipoReta);
}

void DisplayFile::escalonar(TCanvas* canvas, Janela mundo, Janela vp,
    int tipoReta, int contId, double ex, double ey)
{
    for (int i = 0; i < poligonos[contId].pontos.size(); i++) {
        poligonos[contId].pontos[i].x *= ex;
        poligonos[contId].pontos[i].y *= ey;
    }
    desenha(canvas, mundo, vp, tipoReta);
}

void DisplayFile::rotacionar(TCanvas* canvas, Janela mundo, Janela vp,
    int tipoReta, int contId, double teta)
{
    std::vector<std::vector<double> > MRotacao = { { cos(teta), sin(teta), 0 },
        { -sin(teta), cos(teta), 0 }, { 0, 0, 1 } };
    double centroX = 0.0, centroY = 0.0;
    for (int i = 0; i < poligonos[contId].pontos.size(); i++) {
        centroX += poligonos[contId].pontos[i].x;
        centroY += poligonos[contId].pontos[i].y;
    }
    centroX /= poligonos[contId].pontos.size();
    centroY /= poligonos[contId].pontos.size();

    for (int i = 0; i < poligonos[contId].pontos.size(); i++) {
        double x = poligonos[contId].pontos[i].x - centroX;
        double y = poligonos[contId].pontos[i].y - centroY;

        double novoX = MRotacao[0][0] * x + MRotacao[0][1] * y;
        double novoY = MRotacao[1][0] * x + MRotacao[1][1] * y;

        poligonos[contId].pontos[i].x = novoX + centroX;
        poligonos[contId].pontos[i].y = novoY + centroY;
    }

    //	for(int i=0;i<poligonos[contId].pontos.size();i++){
    //		std::vector<std::vector<double>> Mcentro = {{1,0,0},{0,1,0},{-poligonos[contId].pontos[i].x,-poligonos[contId].pontos[i].y, 1}};
    //		std::vector<std::vector<double>> Mdescentro = {{1,0,0},{0,1,0},{poligonos[contId].pontos[i].x,poligonos[contId].pontos[i].y, 1}};
    //		std::vector<std::vector<double>> Mpoligono = {{poligonos[contId].pontos[i].x,poligonos[contId].pontos[i].y, 1}};
    //		std::vector<std::vector<double>> central = multiplicarMatrizes(Mpoligono,Mcentro);
    //		std::vector<std::vector<double>> rotacao = multiplicarMatrizes(central,MRotacao);
    //		std::vector<std::vector<double>> resultado = multiplicarMatrizes(rotacao,Mdescentro);
    //		poligonos[contId].pontos[i].x = central[0][0];
    //		poligonos[contId].pontos[i].y = central[0][1];
    //	}

    desenha(canvas, mundo, vp, tipoReta);
}

void calcularPontoMedio(
    const Ponto &p1, const Ponto &p2, Ponto &result, double t)
{
    result.x = (1 - t) * p1.x + t * p2.x;
    result.y = (1 - t) * p1.y + t * p2.y;
}

double distancia(const Ponto &p1, const Ponto &p2)
{
    return std::sqrt(
        (p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}

void castRec(const Ponto &p0, const Ponto &p1, const Ponto &p2,
    Poligono* novoPoligono, double limiar)
{
    Ponto p1_mid;
    calcularPontoMedio(p0, p1, p1_mid, 0.5);

    Ponto p2_mid;
    calcularPontoMedio(p1, p2, p2_mid, 0.5);

    Ponto p1_mid2;
    calcularPontoMedio(p1_mid, p2_mid, p1_mid2, 0.5);

    double dist = distancia(p1_mid2, p2_mid);

    if (dist < limiar) {
        novoPoligono->pontos.push_back(p2_mid);
    } else {
        castRec(p0, p1_mid, p1_mid2, novoPoligono, limiar);
        castRec(p1_mid2, p2_mid, p2, novoPoligono, limiar);
    }
}

void DisplayFile::casteujou(TMemo* memo, TCanvas* canvas, Janela mundo,
    Janela vp, int tipoReta, int contId)
{
    Poligono aux;
    aux.tipo = 'R';
    aux.id = contId + 1;
    std::vector<Ponto> pontos = poligonos[contId].pontos;
    castRec(pontos[0], pontos[1], pontos[2], &aux, 0.1);
    poligonos.push_back(aux);
    desenha(canvas, mundo, vp, tipoReta);
}

