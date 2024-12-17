function Agregar(ruta1,ruta2, N)
	local r1=SKIN:MakePathAbsolute(ruta1)
	local h1=io.input(r1):read("*all")
	local k={}
	local m=N+1

	for i=1,m do
		k[i]=string.gsub(h1, "Numero", i)
	end

	local r2=SKIN:MakePathAbsolute(ruta2)
	local f=io.open(r2,"w")
	f:write(table.concat(k,"\n"))
	f:close()
end

function Eliminar(ruta1,ruta2, N)
	local r1=SKIN:MakePathAbsolute(ruta1)
	local h1=io.input(r1):read("*all")
	local k={}
	local m=N-1

	for i=1,m do
		k[i]=string.gsub(h1, "Numero", i)
	end

	local r2=SKIN:MakePathAbsolute(ruta2)
	local f=io.open(r2,"w")
	f:write(table.concat(k,"\n"))
	f:close()
end
