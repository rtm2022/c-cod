//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Image2Click(TObject *Sender)
{
Image2->Visible=false;
Image1->Visible=true;
Form3->Color=clRed;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::FormCreate(TObject *Sender)
{
Image1->Visible=false;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Image1Click(TObject *Sender)
{
Image1->Visible=false;
Image2->Visible=true;
Form3->Color=clGreen;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Image2MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
Image2->Visible=false;
Image1->Visible=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Image2MouseLeave(TObject *Sender)
{

Image2->Visible=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Image1MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
Image1->Visible=false;
Image2->Visible=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Image1MouseLeave(TObject *Sender)
{
Image2->Visible=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Label1MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
((TLabel*)(Sender))->Font->Size=28;
((TLabel*)(Sender))->Font->Color=clRed;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Label1MouseLeave(TObject *Sender)
{
((TLabel*)(Sender))->Font->Size=20;
((TLabel*)(Sender))->Font->Color=clBlack;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Label1Click(TObject *Sender)
{
Form3->Color=clYellow;
}
//---------------------------------------------------------------------------
