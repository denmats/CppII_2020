//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

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

  int TForm1::ZoomX(float x)
{
     int ret;
     ret = xx1 + (int)((x-x1)*(xx2-xx1)/(x2-x1));
     return ret;
}

int TForm1::ZoomY(float y)
{
     int ret;
     ret = yy2 + (int)((y-y1)*(yy1-yy2)/(y2-y1));
     return ret;
}

float TForm1::func(float x)
{
     float ret;
     ret = a*cos(x)*cos(x); // function for which a graph is created
     return ret;
}


//---------------------------------------------------------------------------
     void __fastcall TForm1::Button1Click(TObject *Sender)
{
     a=Edit1->Text.ToIntDef(1);
     n = 30;
     x1 = 5;
     x2 = -5;
     y1 = 2;
     y2 = -2;

     TCanvas * canv; // additional variable
     int tx, ty;
     int i;
     float x, y, h;

     canv = Image1->Canvas;

     // 1. Setting the boundaries of screen coordinates
     xx1 = 0;
     yy1 = 0;
     xx2 = Image1->Width;
     yy2 = Image1->Height;

     // 2. Drawing of graph
     canv->Pen->Color = clBlue;
     canv->Brush->Color = clWhite;
     canv->Rectangle(0, 0, Image1->Width, Image1->Height);


     // 2.1. Drawing of coordinate axes
     canv->Pen->Color = clBlack;

     // 2.2. Take the point of origin X of the screen.
     tx = ZoomX(0);
     ty = ZoomY(y1);
     canv->MoveTo(tx,ty);

     // draw a line of coordinates of the X axis
     tx = ZoomX(0);
     ty = ZoomY(y2);
     canv->LineTo(tx,ty);

     // 2.3. Take the point of origin X of the screen.
     canv->Pen->Color = clBlack;
     tx = ZoomX(x1);
     ty = ZoomY(0);
     canv->MoveTo(tx,ty);

     // Draw the Y axis.
     tx = ZoomX(x2);
     ty = ZoomY(0);
     canv->LineTo(tx,ty);

     // 3. Drawing of the graph.
     canv->Pen->Color = clRed; // color
     canv->Pen->Width = 2; // line thickness

     // coordinates of the first point
     x = x1;
     y = func(x);
     h = (x2-x1)/n;
     tx = ZoomX(x);
     ty = ZoomY(y);
     canv->MoveTo(tx,ty);

     // The cycle of enumerating of points and drawing the connecting lines
     for (i = 0; i < n; i++)
     {
         x = x + h;
         y = func(x);
         tx = ZoomX(x);
         ty = ZoomY(y);
         canv->LineTo(tx,ty);
     }

}
//---------------------------------------------------------------------------
