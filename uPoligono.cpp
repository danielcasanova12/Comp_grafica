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
		if(i==0){
			canvas->MoveTo(xvp,yvp);
		}else
		 canvas->LineTo(xvp,yvp);
	}
}





