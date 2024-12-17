[Variables]
Font1=Roboto
Font2=PopUps
Size1=24
Size2=16
Weight1=300
Weight2=500
;  Text colors [Bracketed] ones are from Chameleon plugin meters below. Set from 'Color Settings' dialog in context menu.
TextColor1=[LT1]
TextColor2=[LT2]
EffectColor=[BG1]
;  Inner background clockface first gradient color.
BackColor1=[BG2]
;  Outer background clockface color - Mosly transparent due to the ,100 alpha setting
BackColor2=[LT2],100
;  Inner background clockface second gradient color
BackColor3=[Aver]
;  Stroke Color for Outer background clockface
StrokeColor=[LT2]
;  Hover color for settings dialog
HoverColor=255,248,9

[ChameleonDesktop]
Measure=Plugin
Plugin=Chameleon
Type=Desktop

;  below are the Meters used to change colors with wallpaper.
;  To see a pallete showing all of the colors available, open ColorScheme.ini or
;  choose 'Color Settings' from right click menu of any skin.

[BG1]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Format=Dec
Color=Background1

[BG2]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Format=Dec
Color=Background2

[FG1]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Format=Dec
Color=Background2

[FG2]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Format=Dec
Color=Background2

[LT1]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Format=Dec
Color=Light1

[LT2]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Format=Dec
Color=Light2

[LT3]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Format=Dec
Color=Light3

[LT4]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Format=Dec
Color=Light4

[DK1]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Format=Dec
Color=Dark1

[DK2]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Format=Dec
Color=Dark2

[DK3]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Format=Dec
Color=Dark3

[DK4]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Format=Dec
Color=Dark4

[Aver]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Format=Dec
Color=Average
