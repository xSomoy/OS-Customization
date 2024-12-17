[Variables]
U=[!UpdateMeasureGroup A][!UpdateMeterGroup A][!UpdateMeterGroup B][!Redraw]
V=[!UpdateMeasureGroup B][!UpdateMeterGroup B][!UpdateMeasureGroup A][!UpdateMeterGroup A][!Redraw]

[CZ]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Repeat uno, 10, 15
uno=[!CommandMeasure Zoom "Crecer(#m#, #N#, #Tamaño#, #Zoom#)"]#U#
ActionList2=Repeat dos, 10, 15
dos=[!CommandMeasure Zoom "Salir(#N#, #Tamaño#)"]#U#
DynamicVariables=1
Group=A

[DX]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Repeat tres, 30, 60
tres=[!CommandMeasure Desplazador "BajarSup(#Yf#)"]#V#
ActionList2=Repeat cuatro, 30, 60
cuatro=[!CommandMeasure Desplazador "SubirSup(#Yi#, #Yf#)"]#V#
DynamicVariables=1
Group=B