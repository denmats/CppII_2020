object Form1: TForm1
  Left = 428
  Top = 249
  BorderStyle = bsDialog
  Caption = 'Graph of the function y = a*cosx*cosx'
  ClientHeight = 406
  ClientWidth = 657
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 88
    Top = 16
    Width = 46
    Height = 19
    Caption = 'Enter a:'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentFont = False
  end
  object Image1: TImage
    Left = 40
    Top = 72
    Width = 585
    Height = 265
  end
  object Edit1: TEdit
    Left = 144
    Top = 16
    Width = 121
    Height = 21
    TabOrder = 0
  end
  object Button1: TButton
    Left = 216
    Top = 360
    Width = 185
    Height = 25
    Cursor = crHandPoint
    Caption = 'Show the graph...'
    Font.Charset = ANSI_CHARSET
    Font.Color = clBlue
    Font.Height = -16
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    OnClick = Button1Click
  end
end
