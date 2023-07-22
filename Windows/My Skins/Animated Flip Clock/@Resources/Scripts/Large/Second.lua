PROPERTIES ={}

function Initialize()
	aniFlagSec1 = 0
	flag_Sec1 = 99
	flag_Cntr_1 = 0
	
	aniFlagSec2 = 0
	flag_Sec2 = 99
	flag_Cntr_2 = 0
	
	MS_Sec1 = SKIN:GetMeasure('Measure_Sec_1')
	MS_Sec2 = SKIN:GetMeasure('Measure_Sec_2')
end

function Update()
--/
	Sec1 = MS_Sec1:GetValue()
	Sec2 = MS_Sec2:GetValue()
--/
	if flag_Sec2 ~= Sec2 then
		aniFlagSec2 = 1
		flag_Cntr_2 = 0
		if flag_Sec2 == 99 then
			flag_Sec2 = Sec2
		end
		flag_Sec2 = Sec2
	end
	fSec2 = Counter_Sec_2()
	FolderS2 = Sec2
	putS2 = "#@#Images\\Large\\"..FolderS2.."\\"..fSec2..".png"
	SKIN:Bang('!SetOption', 'Meter_Sec_2', 'ImageName', putS2)

--/
	if flag_Sec1 ~= Sec1 then
		aniFlagSec1 = 1
		flag_Cntr_1 = 0
		if flag_Sec1 == 99 then
			flag_Sec1 = Sec1
		end
		flag_Sec1 = Sec1
	end
	fSec1 = Counter_Sec_1()
	FolderS1 = Sec1
	if Sec1 == 0 then
		FolderS1 = 50		
	end
	putS1 = "#@#Images\\Large\\"..FolderS1.."\\"..fSec1..".png"
	SKIN:Bang('!SetOption', 'Meter_Sec_1', 'ImageName', putS1)
	
	return fSec1
end

function Counter_Sec_2()
	if aniFlagSec2 == 1 then
		cSec_2 = (flag_Cntr_2 + 1)
		flag_Cntr_2 = cSec_2
		if flag_Cntr_2 == 10 then
			flag_Cntr_2 = 0
			aniFlagSec2 = 0
		end
	else
		cSec_2 = 10
	end
	return cSec_2
end

function Counter_Sec_1()
	if aniFlagSec1 == 1 then
		cSec_1 = (flag_Cntr_1 + 1)
		flag_Cntr_1 = cSec_1
		if flag_Cntr_1 == 10 then
			flag_Cntr_1 = 0
			aniFlagSec1 = 0
		end
	else
		cSec_1 = 10
	end
	return cSec_1
end