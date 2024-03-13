//---------------------------------------------------------------------------

#ifndef uPontoH
#define uPontoH
#include "uJanela.h"

class Ponto{
public:
double x ;
double y;
Ponto();
Ponto(double nx,double ny);

int xW2Vp(Janela mundo,Janela vp);

int yW2Vp(Janela mundo,Janela vp);

AnsiString mostraPonto();

};



#endif
