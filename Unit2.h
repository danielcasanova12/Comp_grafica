//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "uJanela.h"
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TImage *Image1;
	TLabel *LabelVp;
	TLabel *LabelMundo;
	TListBox *lbPontos;
	TListBox *lbPoligonos;
	TLabel *Label1;
	TLabel *Label2;
	TPageControl *PageControl1;
	TTabSheet *TabSheet1;
	TButton *Button2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TEdit *edXMax;
	TEdit *edXMin;
	TEdit *edYMax;
	TEdit *edYMin;
	TTabSheet *TabSheet2;
	TRadioGroup *rgTipoReta;
	TButton *Button1;
	TButton *Button3;
	TTabSheet *TabSheet3;
	TEdit *TransldX;
	TEdit *TransldY;
	TLabel *Label7;
	TLabel *Label8;
	TButton *Button4;
	TEdit *EscX;
	TEdit *EscY;
	TLabel *Label9;
	TLabel *Label10;
	TButton *Button5;
	TEdit *TetaRot;
	TLabel *Label11;
	TButton *Button6;
	TButton *Button7;
	TButton *Button8;
	TButton *Button9;
	TTabSheet *TabSheet4;
	TButton *Button10;
	TLabel *lbClippingActive;
	TTabSheet *TabSheet5;
	TButton *Button11;
	TButton *Button12;
	TButton *Button13;
	TMemo *Memo1;
	void __fastcall Image1MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Image1MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall rgTipoRetaClick(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall lbPoligonosClick(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall Button7Click(TObject *Sender);
	void __fastcall Button8Click(TObject *Sender);
	void __fastcall Button9Click(TObject *Sender);
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall Button10Click(TObject *Sender);
	void __fastcall Button11Click(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
