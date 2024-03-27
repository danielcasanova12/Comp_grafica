//---------------------------------------------------------------------------

#pragma hdrstop

#include "uJanela.h"
#include "uDisplayfile.h"
#include "uPonto.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)


void Poligono::mostra(TListBox* lb){
	lb->Items->Clear();
	for(int x=0; x<pontos.size(); x++){
		lb->Items->Add(pontos[x].mostra());
	}
}

int Poligono::abs (int n)
{
	return ( (n>0) ? n : ( n * (-1)));
}

void Poligono::Bresenham(TCanvas* canvas, Ponto pontoinicial, Ponto pontofinal,Janela mundo,Janela vp){

	int x1 = pontoinicial.xW2Vp(mundo, vp);
	int y1 = pontoinicial.yW2Vp(mundo, vp);

	int x2 = pontofinal.xW2Vp(mundo, vp);
	int y2 = pontofinal.yW2Vp(mundo, vp);

	int dx = abs(x2 - x1);
	int dy = abs(y2 - y1);
	int sx = (x1 < x2) ? 1 : -1;
	int sy = (y1 < y2) ? 1 : -1;

	int erro = dx - dy;

	while (x1 != x2 || y1 != y2) {
		canvas->Pixels[x1][y1] = clBlue;
		int erro2 = 2 * erro;

		if (erro2 > -dy) {
			erro -= dy;
			x1 += sx;
		}

		if (erro2 < dx) {
			erro += dx;
			y1 += sy;
		}
	}

	canvas->Pixels[x2][y2] = clBlue;
}


void Poligono::DDA(TCanvas* canvas, Ponto pontoinicial, Ponto pontofinal,Janela mundo,Janela vp){
	int dx = pontofinal.xW2Vp(mundo, vp) - pontoinicial.xW2Vp(mundo, vp);
	int dy = pontofinal.yW2Vp(mundo, vp) - pontoinicial.yW2Vp(mundo, vp);

	int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

	float Xinc = dx / (float) steps;
	float Yinc = dy / (float) steps;

	float X = pontoinicial.xW2Vp(mundo, vp);
	float Y = pontoinicial.yW2Vp(mundo, vp);

	for (int i = 0; i <= steps; i++)
	{
		canvas->Pixels[X][Y] = clRed;
		X += Xinc;
		Y += Yinc;

	}

}

void Poligono::desenhaCircunferencia(TCanvas* canvas, int xc,int yc,int r){
	int x,y,p;
	x = 0;
	y = r;
	canvas->Pixels[xc + x][yc + y] = clBlack;
	canvas->Pixels[xc - x][yc + y] = clBlack;
	canvas->Pixels[xc + x][yc - y] = clBlack;
	canvas->Pixels[xc - x][yc - y] = clBlack;
	canvas->Pixels[xc + y][yc + x] = clBlack;
	canvas->Pixels[xc - y][yc + x] = clBlack;
	canvas->Pixels[xc + y][yc - x] = clBlack;
	canvas->Pixels[xc - y][yc - x] = clBlack;

	p = 1 -r;
	while(x<y){
	 if(p<0){
		x++;
	 }else{
		 x++;
		 y--;
	 }

	 if(p<0){
		p+= 2*x+1;
	 }else{
		 p+= 2*(x-y)+1;
	 }
	canvas->Pixels[xc + x][yc + y] = clBlack;
	canvas->Pixels[xc - x][yc + y] = clBlack;
	canvas->Pixels[xc + x][yc - y] = clBlack;
	canvas->Pixels[xc - x][yc - y] = clBlack;
	canvas->Pixels[xc + y][yc + x] = clBlack;
	canvas->Pixels[xc - y][yc + x] = clBlack;
	canvas->Pixels[xc + y][yc - x] = clBlack;
	canvas->Pixels[xc - y][yc - x] = clBlack;
	}
}

void Poligono::desenha(TCanvas* canvas, Janela mundo, Janela vp, int tipoReta){
	int xvp, yvp,xc,yc;
	if (tipo == 'C') {
		canvas->Pixels[xvp][yvp] = clBlack;
		for(int i =0;i < pontos.size();i++){
			xvp = pontos[i].xW2Vp(mundo, vp);
			yvp = pontos[i].yW2Vp(mundo, vp);
			if(i==0){
				xc = xvp;
				yc = yvp;
			}else{
				int r = sqrt(pow(xvp - xc, 2) + pow(yvp - yc, 2));
				desenhaCircunferencia(canvas, xc, yc, r);
			}
		}

	}
	else if (tipo == 'R' || tipo == 'E') {
		if (tipoReta == 0) {
			//Move to
			canvas->Pen->Color = clBlack;
			for(int i=0; i < pontos.size(); i++){
				xvp = pontos[i].xW2Vp(mundo, vp);
				yvp = pontos[i].yW2Vp(mundo, vp);
				if (i==0)
					canvas->MoveTo(xvp, yvp);
				else
					canvas->LineTo(xvp, yvp);
			}
		}
		else if (tipoReta == 1) {
			//DDA
			canvas->Pen->Color = clRed;
			for(int i=0; i < pontos.size()-1; i++){
				DDA(canvas,pontos[i], pontos[i+1],mundo,vp);
			}
		}
		else {
			canvas->Pen->Color = clBlue;
			// bresenham
			for (int i=0; i < pontos.size()-1; i++) {
				Bresenham(canvas,pontos[i], pontos[i+1],mundo,vp);
			}

		}
	}

}

AnsiString Poligono::toString(){
  return IntToStr(id) + " - " + tipo + " - " +
		 IntToStr((int)pontos.size()) + " pontos";
}
