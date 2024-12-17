function Activar(Activado)
	if(Activado==0) then
		SKIN:Bang('!WriteKeyValue', 'Activado', 'Text', 'Activado')
	else
		SKIN:Bang('!WriteKeyValue', 'Activado', 'Text', 'Desactivado')
	end
	SKIN:Bang('!Refresh')
	SKIN:Bang('!Redraw')
end

function Ocultar(Ocultar)
	if(Ocultar==0) then
		SKIN:Bang('!WriteKeyValue', 'Ocultar', 'Text', 'No ocultar')
	else
		SKIN:Bang('!WriteKeyValue', 'Ocultar', 'Text', 'Ocultar')
	end
	SKIN:Bang('!Refresh')
	SKIN:Bang('!Redraw')
end

function Clic(Clic)
	if(Clic==0) then
		SKIN:Bang('!WriteKeyValue', 'Clic', 'Text', 'Mostrar al hacer clic')
	else
		SKIN:Bang('!WriteKeyValue', 'Clic', 'Text', 'Mostrar al acercar el puntero')
	end
	SKIN:Bang('!Refresh')
	SKIN:Bang('!Redraw')
end

function Mostrar(Mostrar)
	if(Mostrar==0) then
		SKIN:Bang('!WriteKeyValue', 'Mostrar', 'Text', 'Mostrar barra')
	else
		SKIN:Bang('!WriteKeyValue', 'Mostrar', 'Text', 'No mostrar barra')
	end
	SKIN:Bang('!Refresh')
	SKIN:Bang('!Redraw')
end