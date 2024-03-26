//---------------------------------------------------------------------------

#pragma hdrstop

#include "uJanela.h"
#include "uDisplayfile.h"
#include "uPonto.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

void Poligono::desenhar(TCanvas *canvas, Janela mundo,Janela vp){
int xvp, yvp;
	for(int i = 0; i < pontos.size();i++)
	{
		xvp = pontos[i].xW2Vp(mundo, vp);
		yvp = pontos[i].yW2Vp(mundo, vp);
		if(i==0){
			canvas->MoveTo(xvp,yvp);
		}else
			canvas->LineTo(xvp,yvp);
	}
}

void Poligono::mostra(TListBox *listbox)
{
    listbox->Items->Add(IntToStr(id) + " - " + tipo + " - " + IntToStr((int) pontos.size()) + " Pontos");
}
void Poligono::mostraPontos(TListBox *listbox)
{

	listbox->Items->Clear();
	 for (int i = 0; i < 10; i++) {
		 listbox->Items->Add(pontos[i].mostraPonto());
	 }
}


