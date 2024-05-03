Proceso imparesAlCien
	definir i Como Entero;
	
	escribir "Imprimiendo los numeros impares en orden descendente que hay entre 1 y 100...";
	Para i<-100 Hasta 1 Con Paso -1 Hacer
		Si i MOD 2 <> 0 Entonces 
			escribir i, ", ";
		SiNo
		FinSi
	FinPara
FinProceso