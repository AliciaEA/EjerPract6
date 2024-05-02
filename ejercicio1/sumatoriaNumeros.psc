Proceso sumatoriaNumeros
	definir num Como Entero;
	Definir suma Como Entero;
	Definir i Como Entero;
	
	
	Escribir "Proporciona hasta que numero natural se desea calcular la suma: ";
	leer num;
	
	Si num < 1 Entonces
		Escribir "Numero invalido, digite cantidades mayores o igual a 1";
	SiNo
		suma <- 0;
		Para i<-1 Hasta num Con Paso 1 Hacer
			suma <- suma + i;
		FinPara
		Escribir "La suma es: ", suma;
	FinSi
	
FinProceso
