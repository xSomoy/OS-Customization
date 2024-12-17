function Crecer(n,N,Ti,Z)
	local Tf=Ti+Z
	local B=SKIN:GetVariable('Barra', 'n/a')
	local Bi=tonumber(B)
	local Bf=20+(Ti+20)*N+Tf-Ti
	if(Bi<Bf) then
		local BN=tostring(Bi+4)
		SKIN:Bang('!SetVariable', 'Barra', BN)
	end
	for i=1,N do
		local M='Acceso'..i
		local IM=SKIN:GetMeter(M)
		local W=IM:GetW()
		if(i==n) then
			if(W<Tf) then
				local WN=tostring(W+4)
				SKIN:Bang('!SetOption' , M , 'W' , WN)
			end
		elseif(W>Ti) then
			local WN=tostring(W-4)
			SKIN:Bang('!SetOption' , M , 'W' , WN)
		end
	end
end

function Salir(N,T)
	local B=SKIN:GetVariable('Barra', 'n/a')
	local Bi=tonumber(B)
	local Bf=20+(T+20)*N
	if(Bi>Bf) then
		local BN=tostring(Bi-4)
		SKIN:Bang('!SetVariable', 'Barra', BN)
	end
	for i=1,N do
		local M='Acceso'..i
		local IM=SKIN:GetMeter(M)
		local W=IM:GetW()
		if(W>T) then
				local WN=tostring(W-4)
				SKIN:Bang('!SetOption' , M , 'W' , WN)
			else
				local WN=tostring(T)
				SKIN:Bang('!SetOption' , M , 'W' , WN)
		end	
	end
end
