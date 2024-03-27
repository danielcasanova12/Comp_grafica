//---------------------------------------------------------------------------

#pragma hdrstop

#include "uJanela.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
Janela::Janela(double nxMin, double nyMin, double nxMax, double nyMax){
	xMin = nxMin;
	yMin = nyMin;
	xMax = nxMax;
	yMax = nyMax;
}

Janela::Janela(){
	xMin = yMin = xMax = yMax = 0;
}