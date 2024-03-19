//---------------------------------------------------------------------------

#ifndef uDisplayfileH
#define uDisplayfileH
#include "uPoligono.h"
#include <vector>
#include "uJanela.h"
//---------------------------------------------------------------------------


class DisplayFile{
	public:
		std::vector <Poligono> poligono;

		void desenhar(TCanvas *canvas, Janela mundo,Janela vp);

               void mostra(TListBox *listbox);


};
#endif
