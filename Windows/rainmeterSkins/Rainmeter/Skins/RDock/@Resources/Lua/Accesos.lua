function Agregar(ruta,n,v)
	local k={}
	local r=SKIN:MakePathAbsolute(ruta)

	for i in io.lines(r) do
		table.insert(k, i)
	end

	local p=#k

	for i=1, p do
		if(i==1) then
			k[i]=k[i]
		else
			k[i]=string.match(k[i], '=.*')
		end
	end

	if(v=='I')then
		table.insert(k, n+1, '=#@#NN.png')
	elseif(v=='R') then
		table.insert(k, n+1, '=Sin ruta')
	elseif(v=='NO') then
		table.insert(k, n+1, '=NN')
	end

	local p=#k
	local j=1

	for i=1,p do
		if(i==1) then
			k[i]=k[i]
		else
			k[i]=v..j..k[i]
			j=j+1
		end
	end

	local f=io.open(r,"w")
	f:write(table.concat(k,"\n"))
	f:close()
end



function Eliminar(ruta,n,v)
	local k={}
	local r=SKIN:MakePathAbsolute(ruta)

	for i in io.lines(r) do
		table.insert(k, i)
	end

	local p=#k

	for i=1, p do
		if(i==1) then
			k[i]=k[i]
		else
			k[i]=string.match(k[i], '=.*')
		end
	end

	table.remove(k, n+1)

	local p=#k
	local j=1

	for i=1,p do
		if(i==1) then
			k[i]=k[i]
		else
			k[i]=v..j..k[i]
			j=j+1
		end
	end

	local f=io.open(r,"w")
	f:write(table.concat(k,"\n"))
	f:close()
end
