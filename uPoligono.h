//---------------------------------------------------------------------------

#ifndef uPoligonoH
#define uPoligonoH
#include "uPonto.h"
#include <vector>
  #include <Vcl.Forms.hpp>

//-----------------------------------------------------------------------
class Poligono{
	public:
		int id;
	  	char tipo;
		std::vector <Ponto> pontos;

	void mostra(TListBox* lb);
	void desenha(TCanvas* canvas, Janela mundo, Janela vp,int tipoReta);
	AnsiString toString();
	void translacao(double dx, double dy);


	void desenhaCircunferencia(TCanvas* canvas, int xc,int yc,int r);

	private:
		void DDA(TCanvas* canvas,Ponto pontoinicial, Ponto pontofinal,Janela mundo,Janela vp);
		void Bresenham(TCanvas* canvas,Ponto pontoinicial, Ponto pontofinal,Janela mundo,Janela vp);
		int abs (int n);
};


//---------------------------------------------------------------------------
#endif
