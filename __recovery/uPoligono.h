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
			void desenhar(TCanvas *canvas, Janela mundo,Janela vp);
			void mostra(TListBox *listbox);
            void mostraPontos(TListBox *listbox);
};






#endif
