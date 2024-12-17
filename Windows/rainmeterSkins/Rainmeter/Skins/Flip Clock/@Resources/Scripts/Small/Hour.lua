PROPERTIES ={}

function Initialize()
	aniFlagHour1 = 0
	flag_Hour1 = 99
	flag_Cntr_1 = 0
	
	aniFlagHour2 = 0
	flag_Hour2 = 99
	flag_Cntr_2 = 0
	
	MS_Hour1 = SKIN:GetMeasure('Measure_Hour_1')
	MS_Hour2 = SKIN:GetMeasure('Measure_Hour_2')
end

function Update()
--/ 
	Hour1 = MS_Hour1:GetValue()
	Hour2 = MS_Hour2:GetValue()
--/ 
	if flag_Hour2 ~= Hour2 then
		aniFlagHour2 = 1
		flag_Cntr_2 = 0
		if flag_Hour2 == 99 then
			flag_Hour2 = Hour2
		end
		flag_Hour2 = Hour2
	end
	fHour2 = Counter_Hour_2()
	FolderS2 = Hour2
	if Hour2 == 0 then
		FolderS2 = 30		
	end
	putS2 = "#@#Images\\Small\\"..FolderS2.."\\"..fHour2..".png"
	SKIN:Bang('!SetOption', 'Meter_Hour_2', 'ImageName', putS2)

--/ 
	if flag_Hour1 ~= Hour1 then
		aniFlagHour1 = 1
		flag_Cntr_1 = 0
		if flag_Hour1 == 99 then
			flag_Hour1 = Hour1
		end
		flag_Hour1 = Hour1
	end
	fHour1 = Counter_Hour_1()
	FolderS1 = Hour1
	if Hour1 == 0 then
		FolderS1 = 20		
	end
	putS1 = "#@#Images\\Small\\"..FolderS1.."\\"..fHour1..".png"
	SKIN:Bang('!SetOption', 'Meter_Hour_1', 'ImageName', putS1)
	
	return fHour1
end

function Counter_Hour_2()
	if aniFlagHour2 == 1 then
		cHour_2 = (flag_Cntr_2 + 1)
		flag_Cntr_2 = cHour_2
		if flag_Cntr_2 == 10 then
			flag_Cntr_2 = 0
			aniFlagHour2 = 0
		end
	else
		cHour_2 = 10
	end
	return cHour_2
end

function Counter_Hour_1()
	if aniFlagHour1 == 1 then
		cHour_1 = (flag_Cntr_1 + 1)
		flag_Cntr_1 = cHour_1
		if flag_Cntr_1 == 10 then
			flag_Cntr_1 = 0
			aniFlagHour1 = 0
		end
	else
		cHour_1 = 10
	end
	return cHour_1
end