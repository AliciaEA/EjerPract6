Proceso TranspMatriz
	Definir i, j Como Entero;
	Definir matriz1, matriz2, resultado Como Entero;
	
	//Declaramos matrices
	Dimension matriz1[3, 3];
	Dimension matriz2[3, 3];
	Dimension resultado[3, 3];
	
	//Datos matriz 1
	Escribir "Matriz 1...";
	Para i<-0 Hasta 2 Con Paso 1 Hacer
		Para j<-0 Hasta 2 Con Paso 1 Hacer
			
			Escribir "Ingresa un numero, fila ", i+1, ", columna ", j+1, ":";
			Leer matriz1[i, j];
			
		FinPara
	FinPara
	
	//Salida matriz 1
	Escribir "Matriz 1";
	Para i<-0 Hasta 2 Con Paso 1 Hacer
		Para j<-0 Hasta 2 Con Paso 1 Hacer
			
			Escribir matriz1[i, j], Sin Saltar;
			
		FinPara
		Escribir "";
	FinPara
	
	//Salida matriz 1
	Escribir "Matriz transpuesta...";
	Para i<-0 Hasta 2 Con Paso 1 Hacer
		Para j<-0 Hasta 2 Con Paso 1 Hacer
			
			Escribir matriz1[j, i], Sin Saltar;
			
		FinPara
		Escribir "";
	FinPara
	
	
	
FinProceso
