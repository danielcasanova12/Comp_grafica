//---------------------------------------------------------------------------

#pragma hdrstop

#include "uDisplayfile.h"
#include "uJanela.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)

void DisplayFile::desenhar(TCanvas *canvas, Janela mundo,Janela vp){
	canvas->Pen->Color = clBlack;
	canvas->Pen->Width = 3;
	canvas->MoveTo(250,0);
	canvas->LineTo(250,500);
}
