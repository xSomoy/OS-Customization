

[Title]
Meter=string 
x=(#SCREENAREAWIDTH#/2)
y=(#WORKAREAHEIGHT#/2-160)
w=r
Text=HONEY 
FontFace=#TypeFace#
FontSize=20
FontColor=255,255,255
AntiAlias=1
StringAlign=CenterCenter


[Theme]
 Meter=string 
 x=(#SCREENAREAWIDTH#/2)
 y=(#WORKAREAHEIGHT#/2-90)
 Text=Theme
 MeterStyle=StyleNormal
 MouseOverAction=[!SetOption "Theme" "MeterStyle" "StyleHover"][!Update]
 MouseLeaveAction=[!SetOption "Theme" "MeterStyle" "StyleNormal"][!Update]
 LeftMouseUpAction=[!WriteKeyValue "Variables" "page" "themes"][!Refresh]
 [ThemeName]
 Meter=string 
 x=(#SCREENAREAWIDTH#/2)
 y=(#WORKAREAHEIGHT#/2-70)
 Text=#ThemeName#
 MeterStyle=StyleInactive
 MouseOverAction=[!SetOption "Theme" "MeterStyle" "StyleHover"][!Update]
 MouseLeaveAction=[!SetOption "Theme" "MeterStyle" "StyleNormal"][!Update]


[Player]
 Meter=string 
 x=(#SCREENAREAWIDTH#/2)
 y=(#WORKAREAHEIGHT#/2-25)
 Text=Player
 MeterStyle=StyleNormal
 MouseOverAction=[!SetOption "Player" "MeterStyle" "StyleHover"][!Update]
 MouseLeaveAction=[!SetOption "Player" "MeterStyle" "StyleNormal"][!Update]
 LeftMouseUpAction=[!CommandMeasure InputPlayer "ExecuteBatch 1-2"]
 MouseActionCursorName=Text
 [PlayerName]
 Meter=string 
 x=(#SCREENAREAWIDTH#/2)
 y=(#WORKAREAHEIGHT#/2-5)
 Text=#Player#
 MeterStyle=StyleInactive
 MouseOverAction=[!SetOption "Player" "MeterStyle" "StyleHover"][!Update]
 MouseLeaveAction=[!SetOption "Player" "MeterStyle" "StyleNormal"][!Update]
 LeftMouseUpAction=[!CommandMeasure InputPlayer "ExecuteBatch 1-2"]
 MouseActionCursorName=Text

 [InputPlayer]
 Measure=Plugin
 Plugin=InputText
 x=(#SCREENAREAWIDTH#/2-79)
 y=(#WORKAREAHEIGHT#/2-15)
 w=160
 h=20
 FontSize=11
 FontFace=#TypeFace#
 FontColor=bcbcbc
 SolidColor=2d2d2d
 StringAlign=Center
 AntiAlias=1
 DefaultValue=#Player#
 Command1=[!WriteKeyValue "Variables" "Player" "$UserInput$" "#@#variables.inc"][!Update]
 Command2=[!Refresh]






[ClickAnimation]
 Meter=string 
 x=(#SCREENAREAWIDTH#/2)
 y=(#WORKAREAHEIGHT#/2+40)
 Text=Click animation
 MeterStyle=StyleNormal


 [aON]
 Meter=String
 x=(#SCREENAREAWIDTH#/2-20)
 y=(#WORKAREAHEIGHT#/2+60)
 Text=ON 
 FontFace=#TypeFace#
 FontSize=11
 FontColor=255,255,255,100
 AntiAlias=1
 StringAlign=CenterCenter
 LeftMouseUpAction=[!WriteKeyValue "Variables" "A" "click" "#@#anim.inc"][!WriteKeyValue "aON" "FontColor" "255,255,255" #@#settings/main.inc][!WriteKeyValue "aOFF" "FontColor" "255,255,255,100" #@#settings/main.inc][!Refresh][!RefreshGroup "Icons"]
 MouseOverAction=[!SetOption "ClickAnimation" "MeterStyle" "StyleHover"][!Update]
 MouseLeaveAction=[!SetOption "ClickAnimation" "MeterStyle" "StyleNormal"][!Update]

 [aOFF]
 Meter=String
 x=35r
 y=r
 Text=OFF 
 FontFace=#TypeFace#
 FontSize=11
 FontColor=255,255,255
 AntiAlias=1
 StringAlign=CenterCenter
 LeftMouseUpAction=[!WriteKeyValue "Variables" "A" "-click" "#@#anim.inc"][!WriteKeyValue "aOFF" "FontColor" "255,255,255" #@#settings/main.inc][!WriteKeyValue "aON" "FontColor" "255,255,255,100" #@#settings/main.inc][!Refresh][!RefreshGroup "Icons"]
 MouseOverAction=[!SetOption "ClickAnimation" "MeterStyle" "StyleHover"][!Update]
 MouseLeaveAction=[!SetOption "ClickAnimation" "MeterStyle" "StyleNormal"][!Update]


[Background]
 Meter=string 
 x=(#SCREENAREAWIDTH#/2)
 y=(#WORKAREAHEIGHT#/2+105)
 Text=Background
 MeterStyle=StyleNormal

 [bON]
 Meter=String
 x=(#SCREENAREAWIDTH#/2-20)
 y=(#WORKAREAHEIGHT#/2+125)
 Text=ON 
 FontFace=#TypeFace#
 FontSize=11
 FontColor=255,255,255
 AntiAlias=1
 StringAlign=CenterCenter
 LeftMouseUpAction=[!ActivateConfig "honey\grid" "grid+bg.ini"][!WriteKeyValue "bON" "FontColor" "255,255,255" #@#settings/main.inc][!WriteKeyValue "bOFF" "FontColor" "255,255,255,100" #@#settings/main.inc][!Refresh]
 MouseOverAction=[!SetOption "Background" "MeterStyle" "StyleHover"][!Update]
 MouseLeaveAction=[!SetOption "Background" "MeterStyle" "StyleNormal"][!Update]

 [bOFF]
 Meter=String
 x=(#SCREENAREAWIDTH#/2+15)
 y=(#WORKAREAHEIGHT#/2+125)
 Text=OFF 
 FontFace=#TypeFace#
 FontSize=11
 FontColor=255,255,255,100
 AntiAlias=1
 StringAlign=CenterCenter
 LeftMouseUpAction=[!ActivateConfig "honey\grid" "grid.ini"][!WriteKeyValue "bOFF" "FontColor" "255,255,255" #@#settings/main.inc][!WriteKeyValue "bON" "FontColor" "255,255,255,100" #@#settings/main.inc][!Refresh]
 MouseOverAction=[!SetOption "Background" "MeterStyle" "StyleHover"][!Update]
 MouseLeaveAction=[!SetOption "Background" "MeterStyle" "StyleNormal"][!Update]
