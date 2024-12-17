[Variables]
n=28
TypeFace=Play
C1=30,30,30
C2=50,50,50
C3=40,40,40
C4=170,170,170





[Title]
Meter=string 
x=(#SCREENAREAWIDTH#/2)
y=(#WORKAREAHEIGHT#/2-160)
w=r
Text=CUSTOM 
FontFace=#TypeFace#
FontSize=20
FontColor=255,255,255
AntiAlias=1
StringAlign=CenterCenter





[PreviewBG]
Meter=Shape
Shape=Rectangle (#SCREENAREAWIDTH#/2-(5*#n#/2)),(#WORKAREAHEIGHT#/2-(5*#n#/2)),(5*#n#),(5*#n#) | Fill LinearGradient Gradient1 | StrokeWidth 5 | Stroke Color 62,62,62
Gradient1=270 | #C1# ; 0.2 | #C2# ; 1.4

[PreviewIconFill]
Meter=Image 
ImageName=#@#images\hexbg.png 
h=73
x=((#SCREENAREAWIDTH#/2)-42)
y=((#WORKAREAHEIGHT#/2)-37)
ImageTint=#C3#
LeftMouseUpAction=[!WriteKeyValue "Variables" "Color2" "#C4#" "#@#themes\custom.inc"] [!WriteKeyValue "Variables" "Color3" "#C3#" "#@#themes\custom.inc"] [!WriteKeyValue "Variables" "Color4" "#C1#" "#@#themes\custom.inc"]  [!WriteKeyValue "Variables" "Color5" "#C2#" "#@#themes\custom.inc"]   [!WriteKeyValue "Variables" "ThemeName" "Custom" "#@#variables.inc"][!Refresh *]

[PreviewIconStroke]
Meter=Image 
ImageName=#@#images\hex.png 
h=73
x=((#SCREENAREAWIDTH#/2)-42)
y=((#WORKAREAHEIGHT#/2)-37)
ImageTint=#C4#

[APPLY]
Meter=String
w=r
x=42r
y=37r
Text=APPLY
FontFace=#TypeFace#
FontSize=12
StringStyle=Bold
FontColor=#C4#
AntiAlias=1
StringAlign=CenterCenter






[Color1]
Meter=Shape
Shape=Rectangle ((#SCREENAREAWIDTH#/2)-145),((#WORKAREAHEIGHT#/2)-70),65,65 | Fill Color #C1# | Extend Style1
MeterStyle=CStyle
LeftMouseUpAction=[!WriteKeyValue "Variables" "WriteColor" "C1" "#SKINSPATH#Honey\x color picker x\color picker.ini"]        [!ActivateConfig "Honey\x color picker x"]
[Color2]
Meter=Shape
Shape=Rectangle ((#SCREENAREAWIDTH#/2)-145),((#WORKAREAHEIGHT#/2)+5),65,65 | Fill Color #C2# | Extend Style1
MeterStyle=CStyle
LeftMouseUpAction=[!WriteKeyValue "Variables" "WriteColor" "C2" "#SKINSPATH#Honey\x color picker x\color picker.ini"]        [!ActivateConfig "Honey\x color picker x"]
[Color3]
Meter=Shape
Shape=Rectangle ((#SCREENAREAWIDTH#/2)+80),((#WORKAREAHEIGHT#/2)-70),65,65 | Fill Color #C3# | Extend Style1
MeterStyle=CStyle
LeftMouseUpAction=[!WriteKeyValue "Variables" "WriteColor" "C3" "#SKINSPATH#Honey\x color picker x\color picker.ini"]        [!ActivateConfig "Honey\x color picker x"]
[Color4]
Meter=Shape
Shape=Rectangle ((#SCREENAREAWIDTH#/2)+80),((#WORKAREAHEIGHT#/2)+5),65,65 | Fill Color #C4# | Extend Style1
MeterStyle=CStyle
LeftMouseUpAction=[!WriteKeyValue "Variables" "WriteColor" "C4" "#SKINSPATH#Honey\x color picker x\color picker.ini"]        [!ActivateConfig "Honey\x color picker x"]

[CStyle]
Style1=StrokeWidth 5 | Stroke Color 62,62,62








[ResetIcon]
Meter=Image 
ImageName=#@#settings/reset.png 
h=15
x=(#SCREENAREAWIDTH#/2-40)
y=(#WORKAREAHEIGHT#/2+90)
ImageTint=255,255,255,140

[ResetTxt]
Meter=String
x=48r
y=8r
Text=Reset
FontFace=#TypeFace#
FontSize=11
FontColor=255,255,255,150
AntiAlias=1
StringAlign=CenterCenter
LeftMouseUpAction=[!WriteKeyValue "Variables" "C1" "30,30,30" #@#settings/custom.inc][!WriteKeyValue "Variables" "C2" "50,50,50" #@#settings/custom.inc][!WriteKeyValue "Variables" "C3" "40,40,40" #@#settings/custom.inc][!WriteKeyValue "Variables" "C4" "170,170,170" #@#settings/custom.inc][!Refresh]






[BACK]
 Meter=String
 Text=BACK
 MeterStyle=StyleNormal
 w=200
 x=(#SCREENAREAWIDTH#/2)
 y=(#WORKAREAHEIGHT#/2+150)
 MouseOverAction=[!SetOption "Back" "MeterStyle" "StyleHover"][!Update]
 MouseLeaveAction=[!SetOption "Back" "MeterStyle" "StyleNormal"][!Update]
 LeftMouseUpAction=[!WriteKeyValue "Variables" "page" "themes"][!Refresh]
