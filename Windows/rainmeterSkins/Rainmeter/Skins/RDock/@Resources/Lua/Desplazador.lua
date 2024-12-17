function SubirInf(Yf)
	local M=SKIN:GetMeter('BarraO')
	local Yi=M:GetY()
	if(Yi>Yf) then
		local Yn=tostring(Yi-5)
		SKIN:Bang('!SetOption' , 'BarraO' , 'Y' , Yn)
	elseif(Yi<Yf) then
		SKIN:Bang('!SetOption' , 'BarraO' , 'Y' , Yf)
		SKIN:Bang('!SetVariable', 'Ocultar', '0')
	else
		SKIN:Bang('!SetVariable', 'Ocultar', '0')
	end
end

function BajarInf(Yi, Yf)
	local M=SKIN:GetMeter('BarraO')
	local Y=M:GetY()
	if(Y==Yf) then
		local Yn=tostring(Y+5)
		SKIN:Bang('!SetVariable', 'Ocultar', '1')
		SKIN:Bang('!SetOption', 'BarraO', 'Y', Yn)
	elseif(Y<Yi) then
		local Yn=tostring(Y+5)
		SKIN:Bang('!SetOption', 'BarraO', 'Y', Yn)
	else
		SKIN:Bang('!SetOption', 'BarraO', 'Y', Yi)
	end
end



function BajarSup(Yf)
	local M=SKIN:GetMeter('BarraO')
	local Yi=M:GetY()
	if(Yi<Yf) then
		local Yn=tostring(Yi+5)
		SKIN:Bang('!SetOption' , 'BarraO' , 'Y' , Yn)
	elseif(Yi>Yf) then
		SKIN:Bang('!SetOption' , 'BarraO' , 'Y' , Yf)
		SKIN:Bang('!SetVariable', 'Ocultar', '0')
	else
		SKIN:Bang('!SetVariable', 'Ocultar', '0')
	end
end

function SubirSup(Yi, Yf)
	local M=SKIN:GetMeter('BarraO')
	local Y=M:GetY()
	if(Y==Yf) then
		local Yn=tostring(Y-5)
		SKIN:Bang('!SetVariable', 'Ocultar', '1')
		SKIN:Bang('!SetOption', 'BarraO', 'Y', Yn)
	elseif(Y>Yi) then
		local Yn=tostring(Y-5)
		SKIN:Bang('!SetOption', 'BarraO', 'Y', Yn)
	else
		SKIN:Bang('!SetOption', 'BarraO', 'Y', Yi)
	end
end



function SalirIzq(Xf)
	local M=SKIN:GetMeter('BarraO')
	local Xi=M:GetX()
	if(Xi<Xf) then
		local Xn=tostring(Xi+5)
		SKIN:Bang('!SetOption' , 'BarraO' , 'X' , Xn)
	elseif(Xi>Xf) then
		SKIN:Bang('!SetOption' , 'BarraO' , 'X' , Xf)
		SKIN:Bang('!SetVariable', 'Ocultar', '0')
	else
		SKIN:Bang('!SetVariable', 'Ocultar', '0')
	end
end

function EntrarIzq(Xi, Xf)
	local M=SKIN:GetMeter('BarraO')
	local X=M:GetX()
	if(X==Xf) then
		local Xn=tostring(X-5)
		SKIN:Bang('!SetVariable', 'Ocultar', '1')
		SKIN:Bang('!SetOption', 'BarraO', 'X', Xn)
	elseif(X>Xi) then
		local Xn=tostring(X-5)
		SKIN:Bang('!SetOption', 'BarraO', 'X', Xn)
	else
		SKIN:Bang('!SetOption', 'BarraO', 'X', Xi)
	end
end



function SalirDer(Xf)
	local M=SKIN:GetMeter('BarraO')
	local Xi=M:GetX()
	if(Xi>Xf) then
		local Xn=tostring(Xi-5)
		SKIN:Bang('!SetOption' , 'BarraO' , 'X' , Xn)
	elseif(Xi<Xf) then
		SKIN:Bang('!SetOption' , 'BarraO' , 'X' , Xf)
		SKIN:Bang('!SetVariable', 'Ocultar', '0')
	else
		SKIN:Bang('!SetVariable', 'Ocultar', '0')
	end
end

function EntrarDer(Xi, Xf)
	local M=SKIN:GetMeter('BarraO')
	local X=M:GetX()
	if(X==Xf) then
		local Xn=tostring(X+5)
		SKIN:Bang('!SetVariable', 'Ocultar', '1')
		SKIN:Bang('!SetOption', 'BarraO', 'X', Xn)
	elseif(X<Xi) then
		local Xn=tostring(X+5)
		SKIN:Bang('!SetOption', 'BarraO', 'X', Xn)
	else
		SKIN:Bang('!SetOption', 'BarraO', 'X', Xi)
	end
end

