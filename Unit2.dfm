object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Form2'
  ClientHeight = 973
  ClientWidth = 982
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object lbvp: TLabel
    Left = 16
    Top = 520
    Width = 23
    Height = 15
    Caption = 'lbvp'
  end
  object Label2: TLabel
    Left = 456
    Top = 520
    Width = 3
    Height = 15
    Caption = ','
  end
  object lbmundo: TLabel
    Left = 443
    Top = 508
    Width = 49
    Height = 15
    Caption = 'lbmundo'
  end
  object Label1: TLabel
    Left = 602
    Top = 24
    Width = 57
    Height = 15
    Caption = 'Pologonos'
  end
  object Label3: TLabel
    Left = 740
    Top = 24
    Width = 37
    Height = 15
    Caption = 'Pontos'
  end
  object Label4: TLabel
    Left = 656
    Top = 395
    Width = 27
    Height = 15
    Caption = 'xMin'
  end
  object Label5: TLabel
    Left = 656
    Top = 452
    Width = 29
    Height = 15
    Caption = 'xMax'
  end
  object Label6: TLabel
    Left = 800
    Top = 395
    Width = 27
    Height = 15
    Caption = 'yMin'
  end
  object Label7: TLabel
    Left = 800
    Top = 445
    Width = 29
    Height = 15
    Caption = 'xMax'
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 502
    Height = 502
    TabOrder = 0
    object Image1: TImage
      Left = 1
      Top = 1
      Width = 500
      Height = 500
      Align = alClient
      OnClick = Image1Click
      OnMouseDown = Image1MouseDown
      OnMouseMove = Image1MouseMove
      ExplicitLeft = 78
      ExplicitTop = 2
    end
  end
  object Button1: TButton
    Left = 520
    Top = 538
    Width = 75
    Height = 25
    Caption = 'Inicializa'
    TabOrder = 1
    OnClick = Button1Click
  end
  object lbPoligonos: TListBox
    Left = 584
    Top = 56
    Width = 121
    Height = 97
    ItemHeight = 15
    TabOrder = 2
    OnClick = lbPoligonosClick
  end
  object lbPontos: TListBox
    Left = 720
    Top = 56
    Width = 137
    Height = 97
    ItemHeight = 15
    TabOrder = 3
  end
  object edYmin: TEdit
    Left = 800
    Top = 416
    Width = 121
    Height = 23
    TabOrder = 4
    Text = '-250'
  end
  object edYmax: TEdit
    Left = 800
    Top = 466
    Width = 121
    Height = 23
    TabOrder = 5
    Text = '250'
  end
  object edXmin: TEdit
    Left = 656
    Top = 416
    Width = 121
    Height = 23
    TabOrder = 6
    Text = '-250'
  end
  object edXmax: TEdit
    Left = 656
    Top = 469
    Width = 121
    Height = 23
    TabOrder = 7
    Text = '250'
  end
  object Button2: TButton
    Left = 720
    Top = 516
    Width = 107
    Height = 25
    Caption = 'atualizamundo'
    TabOrder = 8
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 128
    Top = 592
    Width = 75
    Height = 25
    Caption = '^'
    TabOrder = 9
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 32
    Top = 656
    Width = 75
    Height = 25
    Caption = '<'
    TabOrder = 10
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 232
    Top = 656
    Width = 75
    Height = 25
    Caption = '>'
    TabOrder = 11
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 128
    Top = 704
    Width = 75
    Height = 25
    Caption = 'v'
    TabOrder = 12
    OnClick = Button6Click
  end
  object Button7: TButton
    Left = 424
    Top = 648
    Width = 75
    Height = 25
    Caption = '+'
    TabOrder = 13
    OnClick = Button7Click
  end
  object Button8: TButton
    Left = 544
    Top = 648
    Width = 75
    Height = 25
    Caption = '-'
    TabOrder = 14
    OnClick = Button8Click
  end
end
