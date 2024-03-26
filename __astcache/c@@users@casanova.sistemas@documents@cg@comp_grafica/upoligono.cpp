//---------------------------------------------------------------------------

#pragma hdrstop

#include "uJanela.h"
#include "uDisplayfile.h"
#include "uPonto.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

// void Poligono::desenhar(TCanvas *canvas, Janela mundo,Janela vp, int tipoReta){
// int xvp, yvp;
//	for(int i = 0; i < pontos.size();i++)
//	{
//		xvp = pontos[i].xW2Vp(mundo, vp);
//		yvp = pontos[i].yW2Vp(mundo, vp);
//		if(i==0){
//			canvas->MoveTo(xvp,yvp);
//		}else
//			canvas->LineTo(xvp,yvp);
//	}


//void Poligono::desenhar(TCanvas* canvas, Janela mundo, Janela vp, int tipoReta){
//	int xvp, yvp,xc,yc;
//	if (tipo == 'C') {
//		canvas->Pixels[xvp][yvp] = clBlack;
//		for(int i =0;i < pontos.size();i++){
//			xvp = pontos[i].xW2Vp(mundo, vp);
//			yvp = pontos[i].yW2Vp(mundo, vp);
//			if(i==0){
//				xc = xvp;
//				yc = yvp;
//			}else{
////				int r = sqrt(pow(xvp - xc, 2) + pow(yvp - yc, 2));
////				desenhaCircunferencia(canvas, xc, yc, r);
//			}
//		}
//
//	}
//	else if (tipo == 'R' || tipo == 'E') {
//		if (tipoReta == 0) {
//			//Move to
//			canvas->Pen->Color = clBlack;
//			for(int i=0; i < pontos.size(); i++){
//				xvp = pontos[i].xW2Vp(mundo, vp);
//				yvp = pontos[i].yW2Vp(mundo, vp);
//				if (i==0)
//					canvas->MoveTo(xvp, yvp);
//				else
//					canvas->LineTo(xvp, yvp);
//			}
//		}
//		else if (tipoReta == 1) {
//			//DDA
//			canvas->Pen->Color = clRed;
//			for(int i=0; i < pontos.size()-1; i++){
//				DDA(canvas,pontos[i], pontos[i+1],mundo,vp);
//			}
//		}
//		else {
//			canvas->Pen->Color = clBlue;
//			// bresenham
//			for (int i=0; i < pontos.size()-1; i++) {
//				Bresenham(canvas,pontos[i], pontos[i+1],mundo,vp);
//			}
//
//		}
//	}
//
//}



void Poligono::mostra(TListBox *listbox)
{
	listbox->Items->Add(IntToStr(id) + " - " + tipo + " - " + IntToStr((int) pontos.size()) + " Pontos");
}
void Poligono::mostraPontos(TListBox *listbox)
{

	listbox->Items->Clear();
	 for (int i = 0; i < pontos.size(); i++) {
		 listbox->Items->Add(pontos[i].mostraPonto());
	 }
}


void Poligono::DDA(TCanvas* canvas, Ponto pontoinicial, Ponto pontofinal,Janela mundo,Janela vp){
	int dx = pontofinal.xW2Vp(mundo, vp) - pontoinicial.xW2Vp(mundo, vp);
	int dy = pontofinal.yW2Vp(mundo, vp) - pontoinicial.yW2Vp(mundo, vp);

	int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

	float Xinc = dx / (float) steps;
	float Yinc = dy / (float) steps;

	float X = pontoinicial.xW2Vp(mundo, vp);
	float Y = pontoinicial.yW2Vp(mundo, vp);

	for (int i = 0; i <= steps; i++)
	{
		canvas->Pixels[X][Y] = clRed;
		X += Xinc;
		Y += Yinc;

	}

}
void Poligono::Bresenham(TCanvas* canvas, Ponto pontoinicial, Ponto pontofinal,Janela mundo,Janela vp){

	int x1 = pontoinicial.xW2Vp(mundo, vp);
	int y1 = pontoinicial.yW2Vp(mundo, vp);

	int x2 = pontofinal.xW2Vp(mundo, vp);
	int y2 = pontofinal.yW2Vp(mundo, vp);

	int dx = abs(x2 - x1);
	int dy = abs(y2 - y1);
	int sx = (x1 < x2) ? 1 : -1;
	int sy = (y1 < y2) ? 1 : -1;

	int erro = dx - dy;

	while (x1 != x2 || y1 != y2) {
		canvas->Pixels[x1][y1] = clBlue;
		int erro2 = 2 * erro;

		if (erro2 > -dy) {
			erro -= dy;
			x1 += sx;
		}

		if (erro2 < dx) {
			erro += dx;
			y1 += sy;
		}
	}

	canvas->Pixels[x2][y2] = clBlue;
}





void Poligono::desenhar(TCanvas *canvas, Janela mundo,Janela vp, int tipoReta){
 int xvp, yvp;
            if (tipoReta == 0) {
			canvas->Pen->Color = clBlack;
			for(int i=0; i < pontos.size(); i++){
				xvp = pontos[i].xW2Vp(mundo, vp);
				yvp = pontos[i].yW2Vp(mundo, vp);
				if (i==0)
					canvas->MoveTo(xvp, yvp);
				else
					canvas->LineTo(xvp, yvp);
			}
		}
		else if (tipoReta == 1) {
			//DDA
			canvas->Pen->Color = clRed;
			for(int i=0; i < pontos.size()-1; i++){
//				DDA(canvas,pontos[i], pontos[i+1],mundo,vp);
			}
		}
		else {
			canvas->Pen->Color = clBlue;
			// bresenham
			for (int i=0; i < pontos.size()-1; i++) {
//				Bresenham(canvas,pontos[i], pontos[i+1],mundo,vp);
			}

		}

 }
