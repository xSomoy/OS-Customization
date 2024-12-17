[Title]
Meter=string 
x=(#SCREENAREAWIDTH#/2)
y=(#WORKAREAHEIGHT#/2-160)
w=r
Text=THEMES 
FontFace=#TypeFace#
FontSize=20
FontColor=255,255,255
AntiAlias=1
StringAlign=CenterCenter



[Hex]
 Meter=Image 
 ImageName=#@#settings/hex.png
 h=217
 x=(#SCREENAREAWIDTH#/2-126)
 y=(#WORKAREAHEIGHT#/2-107)
 ImageAlpha=40



[LightButton]
 Meter=Button
 ButtonImage=#@#settings/light.png
 x=(#SCREENAREAWIDTH#/2-40)
 y=(#WORKAREAHEIGHT#/2-107)
 ButtonCommand=[!WriteKeyValue "Variables" "ThemeName" "Light" "#@#variables.inc"][!Refresh *]

[DarkButton]
 Meter=Button
 ButtonImage=#@#settings/dark.png
 x=(#SCREENAREAWIDTH#/2-103)
 y=(#WORKAREAHEIGHT#/2-72)
 ButtonCommand=[!WriteKeyValue "Variables" "ThemeName" "Dark" "#@#variables.inc"][!Refresh *]

[LavaButton]
 Meter=Button
 ButtonImage=#@#settings/lava.png
 x=(#SCREENAREAWIDTH#/2+23)
 y=(#WORKAREAHEIGHT#/2-72)
 ButtonCommand=[!WriteKeyValue "Variables" "ThemeName" "Lava" "#@#variables.inc"][!Refresh *]

[CyberButton]
 Meter=Button
 ButtonImage=#@#settings/cyber.png
 x=(#SCREENAREAWIDTH#/2-103)
 y=(#WORKAREAHEIGHT#/2+2)
 ButtonCommand=[!WriteKeyValue "Variables" "ThemeName" "Cyber" "#@#variables.inc"][!Refresh *]

[AlienButton]
 Meter=Button
 ButtonImage=#@#settings/alien.png
 x=(#SCREENAREAWIDTH#/2+23)
 y=(#WORKAREAHEIGHT#/2+2)
 ButtonCommand=[!WriteKeyValue "Variables" "ThemeName" "Alien" "#@#variables.inc"][!Refresh *]

[AquaButton]
 Meter=Button
 ButtonImage=#@#settings/aqua.png
 x=(#SCREENAREAWIDTH#/2-40)
 y=(#WORKAREAHEIGHT#/2+40)
 ButtonCommand=[!WriteKeyValue "Variables" "ThemeName" "Aqua" "#@#variables.inc"][!Refresh *]

[CustomButton]
 Meter=Button
 ButtonImage=#@#settings/custom.png
 x=(#SCREENAREAWIDTH#/2-40)
 y=(#WORKAREAHEIGHT#/2-35)
 ButtonCommand=[!WriteKeyValue "Variables" "page" "custom"][!Refresh]





[BACK]
 Meter=String
 Text=BACK
 MeterStyle=StyleNormal
 w=200
 x=(#SCREENAREAWIDTH#/2)
 y=(#WORKAREAHEIGHT#/2+150)
 MouseOverAction=[!SetOption "Back" "MeterStyle" "StyleHover"][!Update]
 MouseLeaveAction=[!SetOption "Back" "MeterStyle" "StyleNormal"][!Update]
 LeftMouseUpAction=[!WriteKeyValue "Variables" "page" "main"][!Refresh]
