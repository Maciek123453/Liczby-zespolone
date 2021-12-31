//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
   #include <cstdlib>
#include "Unit1.h"
#include <math.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button1Click(TObject *Sender)
{
        if((Edit1->Text!="")&&(Edit2->Text!="")&&(Edit3->Text!="")&&(Edit4->Text!=""))
        {
             if((Edit2->Text[Edit2->Text.Length()]=='i')&&(Edit4->Text[Edit4->Text.Length()]=='i'))
             {
                float suma=Edit1->Text.ToDouble()+Edit3->Text.ToDouble();
                 float suma2=atoi(Edit2->Text.SubString(0,Edit2->Text.Length()-1).c_str())+atoi(Edit4->Text.SubString(0,Edit4->Text.Length()-1).c_str());
                  ShowMessage(AnsiString(suma)+AnsiString("+")+AnsiString(suma2)+AnsiString("i"));
             }
        }
        else
        {
            ShowMessage("Uzupelnij wszystkie pola");
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
    if((Edit5->Text!="")&&(Edit6->Text!="")&&(Edit7->Text!="")&&(Edit8->Text!=""))
        {
             if((Edit6->Text[Edit6->Text.Length()]=='i')&&(Edit8->Text[Edit8->Text.Length()]=='i'))
             {
                float suma=Edit5->Text.ToDouble()+Edit7->Text.ToDouble();
                 float suma2=atoi(Edit6->Text.SubString(0,Edit6->Text.Length()-1).c_str())-atoi(Edit8->Text.SubString(0,Edit8->Text.Length()-1).c_str());
                  ShowMessage(AnsiString(suma)+AnsiString("-")+AnsiString(suma2)+AnsiString("i"));
             }
        }
        else
        {
            ShowMessage("Uzupelnij wszystkie pola");
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
      if((Edit9->Text!="")&&(Edit10->Text!="")&&(Edit11->Text!="")&&(Edit12->Text!=""))
        {
             if((Edit10->Text[Edit10->Text.Length()]=='i')&&(Edit12->Text[Edit12->Text.Length()]=='i'))
             {
                float suma=Edit9->Text.ToDouble()*Edit11->Text.ToDouble();
                float suma2=atoi(Edit9->Text.SubString(0,Edit9->Text.Length()).c_str())*atoi(Edit12->Text.SubString(0,Edit12->Text.Length()-1).c_str());
                float suma3=atoi(Edit11->Text.SubString(0,Edit11->Text.Length()).c_str())*atoi(Edit10->Text.SubString(0,Edit10->Text.Length()).c_str());
                float suma5=suma2+suma3;
                float suma4=atoi(Edit10->Text.SubString(0,Edit10->Text.Length()-1).c_str())*atoi(Edit12->Text.SubString(0,Edit12->Text.Length()-1).c_str());
                ShowMessage(AnsiString(suma)+"+"+AnsiString(suma5)+AnsiString("i")+"+"+AnsiString(suma4)+AnsiString("i^2"));
             }
        }
        else
        {
            ShowMessage("Uzupelnij wszystkie pola");
        }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button4Click(TObject *Sender)
{
if((Edit13->Text=="")&&(Edit14->Text==""))
{
   ShowMessage("Uzupelnij pola");
}
  if((Edit13->Text=="")&&(Edit14->Text!=""))
{
   ShowMessage("Uzupelnij pola");
}
  if((Edit13->Text!="")&&(Edit14->Text==""))
{
   ShowMessage("Uzupelnij pola");
}
  if((Edit13->Text!="")&&(Edit14->Text!=""))
{
float a=Edit13->Text.ToDouble();
float b=Edit14->Text.ToDouble();
   ShowMessage(b/sqrt(pow(a,2)+pow(b,2)));
}



}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
   if((Edit13->Text=="")&&(Edit14->Text==""))
   {
         ShowMessage("Uzupelnij pola");
   }
    if((Edit13->Text!="")&&(Edit14->Text!=""))
    {
    float a=Edit13->Text.ToDouble();
    float b=Edit14->Text.ToDouble();
        ShowMessage(a/sqrt(pow(a,2)+pow(b,2)));
    }



}
//---------------------------------------------------------------------------

