Proceso vectorMultipli
		Definir long, i Como Entero;
		Definir array1, array2 Como Entero;
		Definir producto Como Entero;
		
		//Definiendo Vectores 
		Dimension array1[10];
		Dimension array2[10];
		producto <- 0;
		
		Escribir "Ingresa 2 vectores para calcular su producto punto...";
		Escribir "Dime la longitud del vector... ";
		Leer long;
		
		Si long <= 10  Y long > 0 Entonces
			//Arreglo 1
			Para i<-0 Hasta long-1 Con Paso 1 Hacer
				Escribir "Arreglo 1";
				Escribir "Dime un numero: ";
				Leer array1[i];
			FinPara
			
			//Arreglo 2
			Para i<-0 Hasta long-1 Con Paso 1 Hacer
				Escribir "Arreglo 2";
				Escribir "Dime un numero: ";
				Leer array2[i];
			FinPara
			
			//Multiplicacion
			Escribir "";
			Para i<-0 Hasta long-1 Con Paso 1 Hacer
				producto <- producto + (array1[i] * array2[i]);
			FinPara
			
			Escribir "Producto punto: ", producto;
		SiNo
			Escribir "Invalido...";
		FinSi
		
		
		
FinProceso
