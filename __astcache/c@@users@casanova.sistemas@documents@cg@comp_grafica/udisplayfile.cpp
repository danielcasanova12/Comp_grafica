//---------------------------------------------------------------------------

#pragma hdrstop

#include "uDisplayfile.h"
#include "uJanela.h"
#include "uPoligono.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)


void DisplayFile::desenha(TCanvas *canvas, Janela mundo, Janela vp)
{
	canvas->Brush->Color = clSilver;
	canvas->FillRect(Rect(0,0,500,500));

	canvas->Pen->Color = clBlack;
	canvas->Pen->Width = 3.0;

	for (int i = 0; i < poligono.size(); i++) {
			poligono[i].desenhar(canvas, mundo, vp);
	}

}

void DisplayFile::mostra(TListBox *listbox)
{
	listbox->Clear();
	for (int i = 0; i < poligono.size(); i++) {
		poligono[i].mostra(listbox);
	}
}
