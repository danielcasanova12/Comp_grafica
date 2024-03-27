object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 826
  ClientWidth = 1312
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  Scaled = False
  TextHeight = 15
  object LabelVp: TLabel
    Left = 51
    Top = 556
    Width = 22
    Height = 15
    Caption = 'VP()'
  end
  object LabelMundo: TLabel
    Left = 190
    Top = 556
    Width = 47
    Height = 15
    Caption = 'Mundo()'
  end
  object Label1: TLabel
    Left = 26
    Top = 557
    Width = 17
    Height = 15
    Margins.Left = 5
    Margins.Top = 5
    Margins.Right = 5
    Margins.Bottom = 5
    Caption = 'VP:'
  end
  object Label2: TLabel
    Left = 140
    Top = 557
    Width = 42
    Height = 15
    Margins.Left = 5
    Margins.Top = 5
    Margins.Right = 5
    Margins.Bottom = 5
    Caption = 'Mundo:'
  end
  object Panel1: TPanel
    Left = 25
    Top = 48
    Width = 502
    Height = 502
    TabOrder = 0
    object Image1: TImage
      Left = 1
      Top = 1
      Width = 500
      Height = 500
      Align = alClient
      OnMouseDown = Image1MouseDown
      OnMouseMove = Image1MouseMove
      ExplicitLeft = 2
      ExplicitTop = 17
    end
  end
  object lbPontos: TListBox
    Left = 535
    Top = 49
    Width = 182
    Height = 146
    Margins.Left = 5
    Margins.Top = 5
    Margins.Right = 5
    Margins.Bottom = 5
    ItemHeight = 15
    TabOrder = 1
  end
  object lbPoligonos: TListBox
    Left = 727
    Top = 48
    Width = 182
    Height = 146
    Margins.Left = 5
    Margins.Top = 5
    Margins.Right = 5
    Margins.Bottom = 5
    ItemHeight = 15
    TabOrder = 2
    OnClick = lbPoligonosClick
  end
  object PageControl1: TPageControl
    Left = 535
    Top = 204
    Width = 490
    Height = 325
    Margins.Left = 5
    Margins.Top = 5
    Margins.Right = 5
    Margins.Bottom = 5
    ActivePage = TabSheet3
    TabOrder = 3
    object TabSheet1: TTabSheet
      Margins.Left = 5
      Margins.Top = 5
      Margins.Right = 5
      Margins.Bottom = 5
      Caption = 'Mundo'
      object Label3: TLabel
        Left = 28
        Top = 133
        Width = 30
        Height = 15
        Margins.Left = 5
        Margins.Top = 5
        Margins.Right = 5
        Margins.Bottom = 5
        Caption = 'xMin:'
      end
      object Label4: TLabel
        Left = 151
        Top = 133
        Width = 32
        Height = 15
        Margins.Left = 5
        Margins.Top = 5
        Margins.Right = 5
        Margins.Bottom = 5
        Caption = 'xMax:'
      end
      object Label5: TLabel
        Left = 28
        Top = 37
        Width = 30
        Height = 15
        Margins.Left = 5
        Margins.Top = 5
        Margins.Right = 5
        Margins.Bottom = 5
        Caption = 'yMin:'
      end
      object Label6: TLabel
        Left = 150
        Top = 37
        Width = 32
        Height = 15
        Margins.Left = 5
        Margins.Top = 5
        Margins.Right = 5
        Margins.Bottom = 5
        Caption = 'yMax:'
      end
      object Button2: TButton
        Left = 273
        Top = 94
        Width = 113
        Height = 38
        Margins.Left = 5
        Margins.Top = 5
        Margins.Right = 5
        Margins.Bottom = 5
        Caption = 'Atualiza mundo'
        TabOrder = 0
        OnClick = Button2Click
      end
      object edXMax: TEdit
        Left = 150
        Top = 149
        Width = 85
        Height = 23
        Margins.Left = 5
        Margins.Top = 5
        Margins.Right = 5
        Margins.Bottom = 5
        TabOrder = 1
      end
      object edXMin: TEdit
        Left = 28
        Top = 149
        Width = 85
        Height = 23
        Margins.Left = 5
        Margins.Top = 5
        Margins.Right = 5
        Margins.Bottom = 5
        ImeName = 'US'
        TabOrder = 2
      end
      object edYMax: TEdit
        Left = 150
        Top = 53
        Width = 85
        Height = 23
        Margins.Left = 5
        Margins.Top = 5
        Margins.Right = 5
        Margins.Bottom = 5
        ImeName = 'US'
        TabOrder = 3
      end
      object edYMin: TEdit
        Left = 28
        Top = 53
        Width = 85
        Height = 23
        Margins.Left = 5
        Margins.Top = 5
        Margins.Right = 5
        Margins.Bottom = 5
        TabOrder = 4
      end
    end
    object TabSheet2: TTabSheet
      Margins.Left = 5
      Margins.Top = 5
      Margins.Right = 5
      Margins.Bottom = 5
      Caption = 'Desenha'
      ImageIndex = 1
      object rgTipoReta: TRadioGroup
        Left = 5
        Top = 0
        Width = 278
        Height = 200
        Margins.Left = 5
        Margins.Top = 5
        Margins.Right = 5
        Margins.Bottom = 5
        Caption = 'rgTipoReta'
        ItemIndex = 0
        Items.Strings = (
          'MoveTo - lineTo'
          'DDA'
          'Bresenham')
        TabOrder = 0
        OnClick = rgTipoRetaClick
      end
      object Button1: TButton
        Left = 293
        Top = 5
        Width = 113
        Height = 38
        Margins.Left = 5
        Margins.Top = 5
        Margins.Right = 5
        Margins.Bottom = 5
        Caption = 'Inicia Poligono'
        TabOrder = 1
        OnClick = Button1Click
      end
      object Button3: TButton
        Left = 293
        Top = 53
        Width = 113
        Height = 38
        Margins.Left = 5
        Margins.Top = 5
        Margins.Right = 5
        Margins.Bottom = 5
        Caption = 'Circunferencia'
        TabOrder = 2
        OnClick = Button3Click
      end
    end
    object TabSheet3: TTabSheet
      Margins.Left = 5
      Margins.Top = 5
      Margins.Right = 5
      Margins.Bottom = 5
      Caption = 'Transforma'#231#245'es'
      ImageIndex = 2
      object Label7: TLabel
        Left = 28
        Top = 32
        Width = 11
        Height = 15
        Margins.Left = 5
        Margins.Top = 5
        Margins.Right = 5
        Margins.Bottom = 5
        Caption = 'Tx'
      end
      object Label8: TLabel
        Left = 128
        Top = 32
        Width = 11
        Height = 15
        Margins.Left = 5
        Margins.Top = 5
        Margins.Right = 5
        Margins.Bottom = 5
        Caption = 'Ty'
      end
      object Label9: TLabel
        Left = 32
        Top = 92
        Width = 12
        Height = 15
        Margins.Left = 5
        Margins.Top = 5
        Margins.Right = 5
        Margins.Bottom = 5
        Caption = 'Ex'
      end
      object Label10: TLabel
        Left = 132
        Top = 96
        Width = 12
        Height = 15
        Margins.Left = 5
        Margins.Top = 5
        Margins.Right = 5
        Margins.Bottom = 5
        Caption = 'Ey'
      end
      object Label11: TLabel
        Left = 32
        Top = 153
        Width = 21
        Height = 15
        Margins.Left = 5
        Margins.Top = 5
        Margins.Right = 5
        Margins.Bottom = 5
        Caption = 'Teta'
      end
      object TransldX: TEdit
        Left = 32
        Top = 48
        Width = 73
        Height = 23
        Margins.Left = 5
        Margins.Top = 5
        Margins.Right = 5
        Margins.Bottom = 5
        TabOrder = 0
      end
      object TransldY: TEdit
        Left = 128
        Top = 48
        Width = 73
        Height = 23
        Margins.Left = 5
        Margins.Top = 5
        Margins.Right = 5
        Margins.Bottom = 5
        CanUndoSelText = True
        TabOrder = 1
      end
      object Button4: TButton
        Left = 219
        Top = 32
        Width = 113
        Height = 38
        Margins.Left = 5
        Margins.Top = 5
        Margins.Right = 5
        Margins.Bottom = 5
        Caption = 'Transladar'
        TabOrder = 2
        OnClick = Button4Click
      end
      object EscX: TEdit
        Left = 32
        Top = 112
        Width = 73
        Height = 23
        Margins.Left = 5
        Margins.Top = 5
        Margins.Right = 5
        Margins.Bottom = 5
        TabOrder = 3
      end
      object EscY: TEdit
        Left = 128
        Top = 112
        Width = 73
        Height = 23
        Margins.Left = 5
        Margins.Top = 5
        Margins.Right = 5
        Margins.Bottom = 5
        TabOrder = 4
      end
      object Button5: TButton
        Left = 219
        Top = 100
        Width = 113
        Height = 38
        Margins.Left = 5
        Margins.Top = 5
        Margins.Right = 5
        Margins.Bottom = 5
        Caption = 'Escalonar'
        TabOrder = 5
        OnClick = Button5Click
      end
      object TetaRot: TEdit
        Left = 32
        Top = 168
        Width = 73
        Height = 23
        TabOrder = 6
      end
      object Button6: TButton
        Left = 124
        Top = 154
        Width = 105
        Height = 38
        Caption = 'Rotacionar'
        TabOrder = 7
        OnClick = Button6Click
      end
      object Button7: TButton
        Left = 152
        Top = 232
        Width = 91
        Height = 41
        Caption = 'Refletir Y'
        TabOrder = 8
        OnClick = Button7Click
      end
      object Button8: TButton
        Left = 33
        Top = 232
        Width = 90
        Height = 41
        Caption = 'Refletir X'
        TabOrder = 9
        OnClick = Button8Click
      end
      object Button9: TButton
        Left = 273
        Top = 232
        Width = 88
        Height = 41
        Caption = 'Refletir Origem'
        TabOrder = 10
        OnClick = Button9Click
      end
    end
    object TabSheet4: TTabSheet
      Margins.Left = 5
      Margins.Top = 5
      Margins.Right = 5
      Margins.Bottom = 5
      Caption = 'Clipping'
      ImageIndex = 3
      object lbClippingActive: TLabel
        Left = 163
        Top = 42
        Width = 26
        Height = 15
        Margins.Left = 5
        Margins.Top = 5
        Margins.Right = 5
        Margins.Bottom = 5
        Caption = 'False'
      end
      object Button10: TButton
        Left = 40
        Top = 32
        Width = 113
        Height = 38
        Margins.Left = 5
        Margins.Top = 5
        Margins.Right = 5
        Margins.Bottom = 5
        Caption = 'Clipping'
        TabOrder = 0
        OnClick = Button10Click
      end
    end
    object TabSheet5: TTabSheet
      Margins.Left = 5
      Margins.Top = 5
      Margins.Right = 5
      Margins.Bottom = 5
      Caption = 'Curvas'
      ImageIndex = 4
      object Button11: TButton
        Left = 20
        Top = 128
        Width = 113
        Height = 38
        Margins.Left = 5
        Margins.Top = 5
        Margins.Right = 5
        Margins.Bottom = 5
        Caption = 'Casteljau'
        TabOrder = 0
        OnClick = Button11Click
      end
      object Button12: TButton
        Left = 184
        Top = 128
        Width = 113
        Height = 38
        Margins.Left = 5
        Margins.Top = 5
        Margins.Right = 5
        Margins.Bottom = 5
        Caption = 'Hermitie'
        TabOrder = 1
      end
      object Button13: TButton
        Left = 348
        Top = 128
        Width = 113
        Height = 38
        Margins.Left = 5
        Margins.Top = 5
        Margins.Right = 5
        Margins.Bottom = 5
        Caption = 'B'#233'zier'
        TabOrder = 2
      end
    end
  end
  object Memo1: TMemo
    Left = 919
    Top = 48
    Width = 278
    Height = 134
    Margins.Left = 5
    Margins.Top = 5
    Margins.Right = 5
    Margins.Bottom = 5
    Lines.Strings = (
      'jdhdjshjdhs'
      'dsdsds'
      'dsdsds')
    TabOrder = 4
  end
end
