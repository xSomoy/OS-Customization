PROPERTIES ={}

function Initialize()
	aniFlagMin1 = 0
	flag_Min1 = 99
	flag_Cntr_1 = 0
	
	aniFlagMin2 = 0
	flag_Min2 = 99
	flag_Cntr_2 = 0
	
	MS_Min1 = SKIN:GetMeasure('Measure_Min_1')
	MS_Min2 = SKIN:GetMeasure('Measure_Min_2')
end

function Update()
--/
	Min1 = MS_Min1:GetValue()
	Min2 = MS_Min2:GetValue()
--/
	if flag_Min2 ~= Min2 then
		aniFlagMin2 = 1
		flag_Cntr_2 = 0
		if flag_Min2 == 99 then
			flag_Min2 = Min2
		end
		flag_Min2 = Min2
	end
	fMin2 = Counter_Min_2()
	FolderS2 = Min2
	putS2 = "#@#Images\\Large\\"..FolderS2.."\\"..fMin2..".png"
	SKIN:Bang('!SetOption', 'Meter_Min_2', 'ImageName', putS2)

--/
	if flag_Min1 ~= Min1 then
		aniFlagMin1 = 1
		flag_Cntr_1 = 0
		if flag_Min1 == 99 then
			flag_Min1 = Min1
		end
		flag_Min1 = Min1
	end
	fMin1 = Counter_Min_1()
	FolderS1 = Min1
	if Min1 == 0 then
		FolderS1 = 50		
	end
	putS1 = "#@#Images\\Large\\"..FolderS1.."\\"..fMin1..".png"
	SKIN:Bang('!SetOption', 'Meter_Min_1', 'ImageName', putS1)
	
	return fMin1
end

function Counter_Min_2()
	if aniFlagMin2 == 1 then
		cMin_2 = (flag_Cntr_2 + 1)
		flag_Cntr_2 = cMin_2
		if flag_Cntr_2 == 10 then
			flag_Cntr_2 = 0
			aniFlagMin2 = 0
		end
	else
		cMin_2 = 10
	end
	return cMin_2
end

function Counter_Min_1()
	if aniFlagMin1 == 1 then
		cMin_1 = (flag_Cntr_1 + 1)
		flag_Cntr_1 = cMin_1
		if flag_Cntr_1 == 10 then
			flag_Cntr_1 = 0
			aniFlagMin1 = 0
		end
	else
		cMin_1 = 10
	end
	return cMin_1
end