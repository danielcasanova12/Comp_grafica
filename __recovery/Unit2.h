//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TImage *Image1;
	TLabel *lbvp;
	TLabel *Label2;
	TLabel *lbmundo;
	TButton *Button1;
	TListBox *lbPoligonos;
	TListBox *lbPontos;
	TLabel *Label1;
	TLabel *Label3;
	TEdit *edYmin;
	TEdit *edYmax;
	TEdit *edXmin;
	TEdit *edXmax;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TButton *Button2;
	void __fastcall Image1MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Image1Click(TObject *Sender);
	void __fastcall lbPoligonosClick(TObject *Sender);
	void __fastcall Image1MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall Button2Click(TObject *Sender);


private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
