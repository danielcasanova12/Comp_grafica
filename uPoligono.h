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
	std::vector<Ponto> pontos;
			void desenhar(TCanvas* canvas, Janela mundo, Janela vp, int tipoReta);
			void mostra(TListBox *listbox);
			void mostraPontos(TListBox *listbox);


	private:
		void DDA(TCanvas* canvas,Ponto pontoinicial, Ponto pontofinal,Janela mundo,Janela vp);
        void Bresenham(TCanvas* canvas,Ponto pontoinicial, Ponto pontofinal,Janela mundo,Janela vp);
		int abs (int n);
};






#endif
