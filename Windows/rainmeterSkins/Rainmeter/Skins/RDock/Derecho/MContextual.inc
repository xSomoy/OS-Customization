[TextoM]
	X=5r
	Y=2r
	FontColor=0,0,0
	FontSize=10
	AntiAlias=1
	FontFace=Arial
	Group=C
	Hidden=#HMC#

[FMContextual]
	Meter=Shape
	X=(#WORKAREAX#+#WORKAREAWIDTH#-#Tamaño#-#Separacion#-240)
	Y=((#WORKAREAY#+(#WORKAREAHEIGHT#-#Barra#)/2)+#m#*(#Tamaño#+20)-50)
	Shape=Rectangle 0,0,210,140,10 | Extend MyModifiers1
	MyModifiers1=Fill Color 255,255,255,255 | StrokeWidth 0
	DynamicVariables=1
	Group=C
	Hidden=#HMC#
	MouseLeaveAction=[!SetVariable HMC "1"][!UpdateMeterGroup "C"][!Redraw]

[MCIcono1]
	Meter=Image
	ImageName=#@#MCIcono1.png
	X=35r
	Y=5r
	H=20
	TransformationMatrix=1;0;0;1;-[MCIcono1:W];0
	DynamicVariables=1
	Group=C
	Hidden=#HMC#

[F1]
	Meter=Shape
	X=5r
	Y=r
	Shape=Rectangle 0,0,165,20,5 | Extend MyModifiers1
	MyModifiers1=Fill Color #C#,#C#,#C# | StrokeWidth 0
	MouseOverAction=[!SetVariable "C" "180"][!UpdateMeter "#CURRENTSECTION#"][!Redraw]
	MouseLeaveAction=[!SetVariable "C" "255"][!UpdateMeter "#CURRENTSECTION#"][!Redraw]
	DynamicVariables=1
	Group=C
	Hidden=#HMC#
	LeftMouseDownAction=[!ActivateConfig "RDock" "Derecho.ini"][!SetVariable HMC "1"][!UpdateMeterGroup "C"][!Redraw]

[Opc1]
	Meter=String
	MeterStyle=TextoM
	text=Preferencias del dock
	DynamicVariables=1

[MCIcono2]
	Meter=Image
	ImageName=#@#MCIcono2.png
	X=-10r
	Y=7R
	H=20
	TransformationMatrix=1;0;0;1;-[MCIcono2:W];0
	DynamicVariables=1
	Group=C
	Hidden=#HMC#

[F2]
	Meter=Shape
	X=5r
	Y=r
	Shape=Rectangle 0,0,165,20,5 | Extend MyModifiers1
	MyModifiers1=Fill Color #C#,#C#,#C# | StrokeWidth 0
	MouseOverAction=[!SetVariable "C" "180"][!UpdateMeter "#CURRENTSECTION#"][!Redraw]
	MouseLeaveAction=[!SetVariable "C" "255"][!UpdateMeter "#CURRENTSECTION#"][!Redraw]
	DynamicVariables=1
	Group=C
	Hidden=#HMC#
	LeftMouseDownAction=[!WriteKeyValue Variables "Acceso" "#m#" "#CURRENTPATH#Variables.inc"][!WriteKeyValue Variables "Icono" "#I#m##" "#CURRENTPATH#Variables.inc"][!WriteKeyValue Variables "Ruta" "#R#m##" "#CURRENTPATH#Variables.inc"][!WriteKeyValue Variables "Nombre" "#NO#m##" "#CURRENTPATH#Variables.inc"][!ActivateConfig "RDock\Derecho\Configuracion" "Configuracion.ini"][!SetVariable HMC "1"][!UpdateMeterGroup "C"][!Redraw]

[Opc2]
	Meter=String
	MeterStyle=TextoM
	text=Preferencias del acceso
	DynamicVariables=1

[MCIcono3]
	Meter=Image
	ImageName=#@#Agregar2.png
	X=-10r
	Y=12R
	H=14
	TransformationMatrix=1;0;0;1;-[MCIcono3:W];0
	DynamicVariables=1
	Group=C
	Hidden=#HMC#

[VarNuevas]
	Measure=Script
	ScriptFile=#@#Lua\Accesos.lua
	Disabled=1

[Accesos]
	Measure=Script
	ScriptFile=#@#Lua\Meter.lua
	Disabled=1

[F3]
	Meter=Shape
	X=5r
	Y=-2r
	Shape=Rectangle 0,0,165,20,5 | Extend MyModifiers1
	MyModifiers1=Fill Color #C#,#C#,#C# | StrokeWidth 0
	MouseOverAction=[!SetVariable "C" "180"][!UpdateMeter "#CURRENTSECTION#"][!Redraw]
	MouseLeaveAction=[!SetVariable "C" "255"][!UpdateMeter "#CURRENTSECTION#"][!Redraw]
	DynamicVariables=1
	Group=C
	Hidden=#HMC#
	LeftMouseDownAction=[!CommandMeasure VarNuevas "Agregar('Iconos.inc',#m#,'I')"][!CommandMeasure VarNuevas "Agregar('Rutas.inc',#m#,'R')"][!CommandMeasure VarNuevas "Agregar('Nombres.inc',#m#,'NO')"][!CommandMeasure Accesos "Agregar('Accesos.txt','Accesos.inc',#N#,'NO')"][!CommandMeasure Accesos "Agregar('Ocultos.txt','Ocultos.inc',#N#,'NO')"][!WriteKeyValue Variables N "(#N#+1)" "Variables.inc"][!WriteKeyValue Variables N "(#N#+1)" "#ROOTCONFIGPATH#Derecho.ini"][!WriteKeyValue Variables Barra "((#Tamaño#+20)*(#N#+1)+20)" Variables.inc][!Delay 500][!Refresh]

[Opc3]
	Meter=String
	MeterStyle=TextoM
	text=Agregar elemento
	DynamicVariables=1

[MCIcono4]
	Meter=Image
	ImageName=#@#Agregar2.png
	X=-10r
	Y=12R
	H=14
	TransformationMatrix=1;0;0;1;-[MCIcono3:W];0
	DynamicVariables=1
	Group=C
	Hidden=#HMC#

[F4]
	Meter=Shape
	X=5r
	Y=-2r
	Shape=Rectangle 0,0,165,20,5 | Extend MyModifiers1
	MyModifiers1=Fill Color #C#,#C#,#C# | StrokeWidth 0
	MouseOverAction=[!SetVariable "C" "180"][!UpdateMeter "#CURRENTSECTION#"][!Redraw]
	MouseLeaveAction=[!SetVariable "C" "255"][!UpdateMeter "#CURRENTSECTION#"][!Redraw]
	DynamicVariables=1
	Group=C
	Hidden=#HMC#
	LeftMouseDownAction=[!CommandMeasure VarNuevas "Agregar('Iconos.inc',(#N#+1),'I')"][!CommandMeasure VarNuevas "Agregar('Rutas.inc',(#N#+1),'R')"][!CommandMeasure VarNuevas "Agregar('Nombres.inc',(#N#+1),'NO')"][!CommandMeasure Accesos "Agregar('Accesos.txt','Accesos.inc',#N#,'NO')"][!CommandMeasure Accesos "Agregar('Ocultos.txt','Ocultos.inc',(#N#),'NO')"][!WriteKeyValue Variables N "(#N#+1)" "Variables.inc"][!WriteKeyValue Variables N "(#N#+1)" "#ROOTCONFIGPATH#Inferior.ini"][!WriteKeyValue Variables Barra "((#Tamaño#+20)*(#N#+1)+20)" Variables.inc][!Delay 500][!Refresh]

[Opc4]
	Meter=String
	MeterStyle=TextoM
	text=Agregar elemento al final
	DynamicVariables=1

[MCIcono5]
	Meter=Image
	ImageName=#@#Quitar.png
	X=-10r
	Y=12R
	H=14
	TransformationMatrix=1;0;0;1;-[MCIcono3:W];0
	DynamicVariables=1
	Group=C
	Hidden=#HMC#

[F5]
	Meter=Shape
	X=5r
	Y=-2r
	Shape=Rectangle 0,0,165,20,5 | Extend MyModifiers1
	MyModifiers1=Fill Color #C#,#C#,#C# | StrokeWidth 0
	MouseOverAction=[!SetVariable "C" "180"][!UpdateMeter "#CURRENTSECTION#"][!Redraw]
	MouseLeaveAction=[!SetVariable "C" "255"][!UpdateMeter "#CURRENTSECTION#"][!Redraw]
	DynamicVariables=1
	Group=C
	Hidden=#HMC#
	LeftMouseDownAction=[!CommandMeasure VarNuevas "Eliminar('Iconos.inc',#m#,'I')"][!CommandMeasure VarNuevas "Eliminar('Rutas.inc',#m#,'R')"][!CommandMeasure VarNuevas "Eliminar('Nombres.inc',#m#,'NO')"][!CommandMeasure Accesos "Eliminar('Accesos.txt','Accesos.inc',#N#,'NO')"][!CommandMeasure Accesos "Eliminar('Ocultos.txt','Ocultos.inc',#N#,'NO')"][!WriteKeyValue Variables N "(#N#-1)" "Variables.inc"][!WriteKeyValue Variables N "(#N#-1)" "#ROOTCONFIGPATH#Derecho.ini"][!WriteKeyValue Variables Barra "((#Tamaño#+20)*(#N#-1)+20)" Variables.inc][!Delay 500][!Refresh]

[Opc5]
	Meter=String
	MeterStyle=TextoM
	text=Quitar elemento
	DynamicVariables=1