[Texto]
 FontColor=0,0,0
 AntiAlias=1
 ClipString=1

[BarraTitulo]
	Meter=Image
	X=#WORKAREAX#
	Y=#WORKAREAY#
	W=#Ancho#
	H=50
	SolidColor=240,240,240

[TituloM]
	Meter=String
	X=(#WORKAREAX#+#Ancho#/2)
	Y=(#WORKAREAY#+5)
	MeterStyle=Texto
	StringAlign=Center
	Text=RDOCK

[Resaltar]
	Meter=Image
	X=(#WORKAREAX#+#Xresaltar#)
	Y=(#WORKAREAY#+25)
	W=80
	H=25
	SolidColor=200,200,200
	DynamicVariables=1

[Superior]
	Meter=String
	X=(#WORKAREAX#+40)
	Y=(#WORKAREAY#+30)
	W=80
	H=25
	MeterStyle=Texto
	StringAlign=Center
	Text=Superior
	LeftMouseDownAction=[!ActivateConfig "RDock" "Superior.ini"]

[Inferior]
	Meter=String
	X=R
	Y=r
	W=80
	H=25
	MeterStyle=Texto
	StringAlign=Center
	Text=Inferior
	LeftMouseDownAction=[!ActivateConfig "RDock" "Inferior.ini"]

[Izquierdo]
	Meter=String
	X=R
	Y=r
	W=80
	H=25
	MeterStyle=Texto
	StringAlign=Center
	Text=Izquierdo
	LeftMouseDownAction=[!ActivateConfig "RDock" "Izquierdo.ini"]

[Derecho]
	Meter=String
	X=R
	Y=r
	W=80
	H=25
	MeterStyle=Texto
	StringAlign=Center
	Text=Derecho
	LeftMouseDownAction=[!ActivateConfig "RDock" "Derecho.ini"]


[Fondo]
	Meter=Image
	X=#WORKAREAX#
	Y=-5R
	W=550
	H=380
	SolidColor=200,200,200

[Dock]
	Meter=String
	X=20r
	Y=10r
	MeterStyle=Texto
	Text=Dock

[Linea1]
	Meter=Shape
	X=-20r
	Y=5R
	Shape=Rectangle 0,0,260,1, | Extend MyModifiers1
	MyModifiers1=Fill Color 255,255,255,255 | StrokeWidth 0

[Icono]
	Meter=String
	X=(#WORKAREAX#+20)
	Y=(#WORKAREAY#+230)
	MeterStyle=Texto
	Text=Icono

[Linea2]
	Meter=Shape
	X=-20r
	Y=5R
	Shape=Rectangle 0,0,260,1 | Extend MyModifiers1
	MyModifiers1=Fill Color 255,255,255,255 | StrokeWidth 0

[Barra]
	Meter=String
	X=(#WORKAREAX#+310)
	Y=(#WORKAREAY#+60)
	MeterStyle=Texto
	Text=Barra

[Linea6]
	Meter=Shape
	X=-20r
	Y=5R
	Shape=Rectangle 0,0,260,1 | Extend MyModifiers1
	MyModifiers1=Fill Color 255,255,255,255 | StrokeWidth 0