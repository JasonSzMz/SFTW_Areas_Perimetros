Algoritmo Areas_Perimetros
	Definir optionFg,optionOp Como Entero
	Definir backToMenu Como Caracter
	Definir globalData,globalDataT,globalDataT2,resOp Como Real
	Escribir 'Calculador de Areas y Pericmetros'
	Escribir 'Para seleccionar una opción de los menús, introduce el numero de la acción que deseas realizar'
	Escribir 'Menu'
	Escribir '1.-Cuadrado    2.-Circulo    3.-Triangulo'
	Leer optionFg
	Segun optionFg  Hacer
		1:
			Escribir '¿Que deseas calcular?  1.-Area    2.-Perimetro'
			Leer optionOp
			Escribir 'Ingresa la medida de uno de sus lados'
			Leer globalData
			Si globalData==0 Entonces
				Escribir 'Revisa tus medidas'
			SiNo
				Si optionOp==1 Entonces
					Escribir 'Formula: Lado*Lado'
					resOp <- (globalData*globalData)
				SiNo
					Si optionOp==2 Entonces
						Escribir 'Formula: Lado*4'
						resOp <- (globalData*4)
					FinSi
				FinSi
			FinSi
		2:
			Escribir '¿Que deseas calcular?  1.-Area    2.-Perimetro'
			Leer optionOp
			Escribir 'Nota: Recuerda la medida del radio es la mitad de la medida del diametro'
			Escribir 'Ingresa la medida del radio'
			Leer globalData
			Si globalData==0 Entonces
				Escribir 'Revisa tus medidas'
			SiNo
				Si optionOp==1 Entonces
					Escribir 'Formula: Pi*r²'
					resOp <- PI*(globalData*globalData)
				SiNo
					Si optionOp==2 Entonces
						Escribir 'Formula: Pi*D'
						resOp <- PI*(globalData*2)
					FinSi
				FinSi
			FinSi
		3:
			Escribir '¿Que deseas calcular?  1.-Area    2.-Perimetro'
			Leer optionOp
			Si optionOp==1 Entonces
				Escribir 'Ingresa la medida de la base del triangulo: '
				Leer globalData
				Escribir 'Ingresa la altura del triangulo: '
				Leer globalDataT
				Si globalData==0 O globalDataT==0 Entonces
					Escribir 'Revisa tus medidas'
				SiNo
					resOp <- (globalDataT*globalData)/2
				FinSi
			SiNo
				Si optionOp==2 Entonces
					Escribir 'Ingresa el lado << a >> del triangulo: '
					Leer globalData
					Escribir 'Ingresa el lado << b >> del triangulo: '
					Leer globalDataT
					Escribir 'Ingresa el lado << c >> del triangulo: '
					Leer globalDataT2
					Si globalData==0 O globalDataT==0 O globalDataT2==0 Entonces
						Escribir 'Revisa tus medidas'
					SiNo
						resOp <- globalDataT2+globalDataT+globalData
					FinSi
				FinSi
			FinSi
	FinSegun
	Si optionOp==1 Entonces
		Escribir 'Area: ',resOp
	SiNo
		Si optionOp==2 Entonces
			Escribir 'Perimetro: ',resOp
		FinSi
	FinSi
FinAlgoritmo
