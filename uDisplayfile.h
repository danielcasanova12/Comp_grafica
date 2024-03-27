//---------------------------------------------------------------------------

#ifndef uDisplayfileH
#define uDisplayfileH
#include "uPoligono.h"
#include <vector>
#include "uJanela.h"
//---------------------------------------------------------------------------


class DisplayFile{
	public:
		std::vector<Poligono> poligonos;

		void mostra(TListBox* lb);
		void desenha(TCanvas* canvas, Janela mundo, Janela vp, int tipoReta);
		void escalonar(TCanvas* canvas, Janela mundo, Janela vp, int tipoReta, int contId, double ex, double ey);
		void rotacionar(TCanvas* canvas, Janela mundo, Janela vp, int tipoReta,int contId,double teta);
		void clipping(TMemo* memo,TCanvas* canvas, Janela mundo, Janela vp,Janela jClipping, int tipoReta);
		void casteujou(TMemo *memo,TCanvas* canvas, Janela mundo, Janela vp,int tipoReta, int contId);

	private:
		Ponto calcularPontoCentral(const std::vector<Ponto>& vertices);
    	Ponto calcularPontoIntermediario(Ponto& p1, Ponto& p2);
		std::vector<std::vector<double>> multiplicarMatrizes(std::vector<std::vector<double>> A,std::vector<std::vector<double>> B);
};
//---------------------------------------------------------------------------
#endif
