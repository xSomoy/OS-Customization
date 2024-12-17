[MenuBG1]
 Hidden=1
 Group=Menu
 Meter=Image
 ImageName=menu1
 ImagePath=#@#Images\
 ImageTint=#Color3#
 w=310
 x=2
 y=2
 LeftMouseUpAction=[!SetWallpaper "#@#Wallpapers\light.jpg"][!WriteKeyValue Variables Color3 221,178,51 "#@#Variables.inc"][!WriteKeyValue Variables Color2 44,44,44 "#@#Variables.inc"][!RefreshGroup "Honey"]

[MenuBG2]
 Hidden=1
 Group=Menu
 Meter=Image
 ImageName=menu2
 ImagePath=#@#Images\
 ImageTint=#Color3#
 w=310
 x=2
 y=67
 LeftMouseUpAction=[!SetWallpaper "#@#Wallpapers\dark.jpg"][!WriteKeyValue Variables Color3 44,44,44 "#@#Variables.inc"][!WriteKeyValue Variables Color2 221,178,51 "#@#Variables.inc"][!RefreshGroup "Honey"]

[MenuBG3]
 Hidden=1
 Group=Menu
 Meter=Image
 ImageName=menu3
 ImagePath=#@#Images\
 ImageTint=#Color3#
 w=310
 x=2
 y=132
 LeftMouseUpAction=[!SetWallpaper "#@#Wallpapers\cyber.jpg"][!WriteKeyValue Variables Color3 6,18,23 "#@#Variables.inc"][!WriteKeyValue Variables Color2 100,219,241 "#@#Variables.inc"][!RefreshGroup "Honey"]

[MenuOutline]
 Hidden=1
 Group=Menu
 Meter=Image
 ImageName=menu
 ImagePath=#@#Images\
 ImageTint=#Color2#
 h=200
 x=0

[Item1]
 Hidden=1
 Group=Menu
 Meter=String
 FontFace=#Typeface#
 FontColor=#Color2#
 FontSize=19
 StringStyle=Bold
 AntiAlias=1
 StringAlign=Left
 Text=LIGHT
 w=110
 x=72
 y=17

[Item2]
 Hidden=1
 Group=Menu
 Meter=String
 FontFace=#Typeface#
 FontColor=#Color2#
 FontSize=19
 StringStyle=Bold
 AntiAlias=1
 StringAlign=left
 Text=DARK
 w=110
 x=72
 y=84

[Item3]
 Hidden=1
 Group=Menu
 Meter=String
 FontFace=#Typeface#
 FontColor=#Color2#
 FontSize=19
 StringStyle=Bold
 AntiAlias=1
 StringAlign=Left
 Text=CYBER
 w=110
 x=69
 y=150