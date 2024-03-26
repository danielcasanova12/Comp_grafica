﻿//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"

#include "uPonto.h"
#include "uJanela.h"
#include "uPoligono.h"
#include "uDisplayfile.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
DisplayFile display;
Poligono Pol;
TForm2 *Form2;
Ponto(aux);
Janela mundo(-250,-250,250,250);
Janela vp(0,0,500,500);
int polIndex = -1;

bool inicia = false;
int contId = 0;
double xVp2Mundo(int xVp, Janela mundo, Janela vp) {
	return ((xVp - vp.xMin)/(vp.xMax - vp.xMin)) *
	(mundo.xMax - mundo.xMin) + mundo.xMin;
}
double yVp2Mundo(int yVp, Janela mundo, Janela vp) {
	return (1 - (yVp - vp.yMin)/(vp.yMax - vp.yMin)) *
	(mundo.yMax - mundo.yMin) + mundo.yMin;
}


//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
	aux.x = 10;
	aux.y = 5;
    //Pintatudo  de vermelho
	Form2->Image1->Canvas->Brush->Color = clRed;
	Form2->Image1->Canvas->FillRect(Rect(0,0,500,500));

	aux.x = xVp2Mundo(250,mundo,vp);
	aux.y = yVp2Mundo(0,mundo,vp);
	Pol.tipo = 'E';
	Pol.id = contId;

	Pol.pontos.push_back(aux);
	Pol.pontos.push_back(Ponto(0,mundo.yMin));

	display.poligono.push_back(Pol);
	Pol.pontos.clear();

	Pol.tipo = 'E';
	Pol.id = contId++;
	Pol.pontos.push_back(Ponto(mundo.xMin,0));
	Pol.pontos.push_back(Ponto(mundo.xMax,0));

	display.poligono.push_back(Pol);
	Pol.pontos.clear();

	display.desenha(Form2->Image1->Canvas,mundo,vp);
    display.mostra(Form2->lbPoligonos);

	// // Adicionando um círculo
	// Form2->Image1->Canvas->Pen->Color = clBlue;
	// Form2->Image1->Canvas->Pen->Width = 2;
	// Form2->Image1->Canvas->Ellipse(100,100,200,200);

	// // Adicionando um retângulo
	// Form2->Image1->Canvas->Pen->Color = clGreen;
	// Form2->Image1->Canvas->Pen->Width = 2;
	// Form2->Image1->Canvas->Rectangle(300,300,400,400);




}
//---------------------------------------------------------------------------


void __fastcall TForm2::Image1MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
	double xW,yW;

	lbvp->Caption = "(" + IntToStr(X) + "," + IntToStr(Y) + ")";

	xW= xVp2Mundo(X,mundo,vp);
	yW= yVp2Mundo(Y,mundo,vp);

	lbmundo->Caption = "(" + FloatToStr(xW) + "; " + FloatToStr(yW) + ")";
//	Form2->Image1->Canvas->Pen->Color = clBlue;
//	Form2->Image1->Canvas->Pen->Width = 2;
//	Form2->Image1->Canvas->Ellipse(X-2,Y+2,X+2,Y-2);


}
//---------------------------------------------------------------------------


void __fastcall TForm2::Button1Click(TObject *Sender)
{

		 inicia = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Image1Click(TObject *Sender)
{

//	ShowMessage("sdasd");

}
//---------------------------------------------------------------------------

void __fastcall TForm2::lbPoligonosClick(TObject *Sender)
{

	 int index = lbPoligonos-> ItemIndex;
	  display.poligono[index].mostraPontos(lbPontos);

}
//---------------------------------------------------------------------------

void __fastcall TForm2::Image1MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{

	double xW,yW;

   if( inicia)
   {
	   if(Button == mbLeft)
	   {
			xW = xVp2Mundo(X,mundo,vp);
			yW = yVp2Mundo(Y,mundo,vp);
			Pol.pontos.push_back(Ponto(xW,yW));
            Pol.desenhar(Image1->Canvas,mundo,vp);

	   }else
			if(Button == mbRight)
			{
				Pol.id = contId++;
				Pol.tipo = 'N';
				display.poligono.push_back(Pol);
				Pol.pontos.clear();
				inicia = false;
				display.desenha(Form2->Image1->Canvas,mundo,vp);
                display.mostra(Form2->lbPoligonos);

			}

   }



}

//---------------------------------------------------------------------------





void __fastcall TForm2::Button2Click(TObject *Sender)
{
//  ShowMessage(edXmin -> Text);

//  ShowMessage(edYmin -> Text);
//  ShowMessage(edYmax -> Text);
//  mundo.xMin = StrToFloat(edXmin -> Text);
//  mundo.xMax = StrToFloat(edXmax -> Text);
//  mundo.yMin = StrToFloat(edYmin -> Text);
//  mundo.yMin = StrToFloat(edYmax -> Text);
//  display.poligono[0].pontos[0].y = mundo.yMax;
//  display.poligono[0].pontos[1].y = mundo.yMin;
//  display.poligono[0].pontos[0].x = mundo.xMax;
//  display.poligono[0].pontos[1].x = mundo.xMin;

//  display.desenha(Form2->Image1->Canvas,mundo,vp);
  atualizaMundo(mundo);
}
//---------------------------------------------------------------------------

void TForm2::atualizaMundo(Janela mundo)
{
// ShowMessage(edXmax -> Text);
  edYmin -> Text = mundo.yMin;
  edYmax -> Text = mundo.yMax;
  edXmin -> Text = mundo.xMin;
  edXmax -> Text = mundo.xMax;

 display.poligono[0].pontos[0].y = mundo.yMax;
  display.poligono[0].pontos[1].y = mundo.yMin;
  display.poligono[1].pontos[0].x = mundo.xMax;
  display.poligono[1].pontos[1].x = mundo.xMin;
  
	display.desenha(Form2->Image1->Canvas,mundo,vp);
	Pol.desenhar(Image1->Canvas,mundo,vp);
	
}

void __fastcall TForm2::Button3Click(TObject *Sender)
{
	mundo.yMin += 10;
	mundo.yMax += 10;
	atualizaMundo(mundo);



}
//---------------------------------------------------------------------------


void __fastcall TForm2::Button5Click(TObject *Sender)
{
		mundo.xMin += 10;
	mundo.xMax += 10;
	atualizaMundo(mundo);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button4Click(TObject *Sender)
{
			mundo.xMin -= 10;
	mundo.xMax -= 10;
	atualizaMundo(mundo);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button6Click(TObject *Sender)
{
				mundo.yMin -= 10;
	mundo.yMax -= 10;
	atualizaMundo(mundo);
}
//---------------------------------------------------------------------------


void __fastcall TForm2::Button7Click(TObject *Sender)
{
    mundo.xMin += 10;
    mundo.xMax -= 10;
    mundo.yMin += 10;
    mundo.yMax -= 10;
	atualizaMundo(mundo);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button8Click(TObject *Sender)
{
	mundo.xMin -= 10;
	mundo.xMax += 10;
	mundo.yMin -= 10;
    mundo.yMax += 10;
	atualizaMundo(mundo);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button9Click(TObject *Sender)
{
  inicia = false;
}
//---------------------------------------------------------------------------

