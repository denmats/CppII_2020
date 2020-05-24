//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TEdit *Edit1;
        TButton *Button1;
        TImage *Image1;
        void __fastcall Button1Click(TObject *Sender);
private:	// User declarations

     int xx1, xx2, yy1, yy2;
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);

        float x1,x2,y1,y2,a;
        int n;
        int ZoomX(float x);
        int ZoomY(float y);
        float func(float x);
        void __fastcall TForm1::FormActivate(TObject *Sender);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
