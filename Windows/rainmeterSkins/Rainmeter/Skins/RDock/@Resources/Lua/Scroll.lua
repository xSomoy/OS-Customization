function Aumentar1(Unidad)
	if(Unidad==60) then
		SKIN:Bang('!WriteKeyValue', 'Variables', 'Separacion', Unidad)
	else
		Unidad=Unidad+2
		SKIN:Bang('!WriteKeyValue', 'Variables', 'Separacion', Unidad)
	end
	SKIN:Bang('!Refresh')
	SKIN:Bang('!Redraw')
end

function Disminuir1(Unidad)
	if(Unidad==0) then
		SKIN:Bang('!WriteKeyValue', 'Variables', 'Separacion', Unidad)
	else
		Unidad=Unidad-2
		SKIN:Bang('!WriteKeyValue', 'Variables', 'Separacion', Unidad)
	end
	SKIN:Bang('!Refresh')
	SKIN:Bang('!Redraw')
end


function Aumentar2(Unidad)
	if(Unidad==90) then
		SKIN:Bang('!WriteKeyValue', 'Variables', 'Tamaño', Unidad)
	else
		Unidad=Unidad+2
		SKIN:Bang('!WriteKeyValue', 'Variables', 'Tamaño', Unidad)
	end
	SKIN:Bang('!Refresh')
	SKIN:Bang('!Redraw')
end

function Disminuir2(Unidad)
	if(Unidad==30) then
		SKIN:Bang('!WriteKeyValue', 'Variables', 'Tamaño', Unidad)
	else
		Unidad=Unidad-2
		SKIN:Bang('!WriteKeyValue', 'Variables', 'Tamaño', Unidad)
	end
	SKIN:Bang('!Refresh')
	SKIN:Bang('!Redraw')
end


function Aumentar3(Unidad)
	if(Unidad==60) then
		SKIN:Bang('!WriteKeyValue', 'Variables', 'Zoom', Unidad)
	else
		Unidad=Unidad+2
		SKIN:Bang('!WriteKeyValue', 'Variables', 'Zoom', Unidad)
	end
	SKIN:Bang('!Refresh')
	SKIN:Bang('!Redraw')
end

function Disminuir3(Unidad)
	if(Unidad==0) then
		SKIN:Bang('!WriteKeyValue', 'Variables', 'Zoom', Unidad)
	else
		Unidad=Unidad-2
		SKIN:Bang('!WriteKeyValue', 'Variables', 'Zoom', Unidad)
	end
	SKIN:Bang('!Refresh')
	SKIN:Bang('!Redraw')
end
