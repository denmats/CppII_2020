//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "CSPIN"
#pragma resource "*.dfm"

int start,finish;


TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
            Memo1->Lines->Clear();
            start = Edit1->Text.ToIntDef(10);
            finish = Edit2->Text.ToIntDef(100);

            if(start>finish)
            {
               int temp = start;
               start = finish;
               finish = temp;
            }


        int i,j,counter = 0;
    for(i=start;i<=finish;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(i==j)
        {
            Memo1->Lines->Add(i);
            counter++;
        }
    }

    Label1->Visible=true;
    Label2->Caption=counter;
    Label2->Visible=true;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
        Memo1->Lines->Clear();
       Label2->Visible=false;
       Label1->Visible=false;
       Edit1->Clear();
       Edit2->Clear();
}
//---------------------------------------------------------------------------

