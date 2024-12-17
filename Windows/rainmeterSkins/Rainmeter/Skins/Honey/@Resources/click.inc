[Variables]
Step=1
Reset=1
IconUpdate=20
aX=280
aY=285

[MeasureAnimation]
Measure=CALC
Formula=(( MeasureAnimation + #Step# )*#Reset#)
Paused=1
IfCondition=(MeasureAnimation=0)
IfTrueAction=[!PauseMeasure MeasureAnimation][!SetVariable Step "1"][!SetVariable Reset 1]
IfCondition2=(MeasureAnimation=15)
IfTrueAction2=[!SetVariable Reset 0]
DynamicVariables=1


[MeterAnimation]
Meter=BITMAP
MeasureName=MeasureAnimation
BitmapImage=#@#Images\click.png
BitmapFrames=15
BitmapExtend=1
 x=0
 y=0
 ImageTint=#Color2#