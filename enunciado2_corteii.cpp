/*Enunciado #2:

Diseñar un programa codificado en C++ que EMPLEANDO MATRICES almacena el Sueldo Base y Préstamos de los Trabajadores de una empresa bajo las siguientes condiciones:

En la empresa nunca hay menos de 3 ni más de 15 trabajadores
Ningún trabajador devenga menos del Salario mínimo establecido en la Ley.
El préstamo dado al trabajador no puede superar el 60% de su Sueldo Base
A todos los Trabajadores se le realizan los descuentos de Seguro Social Obligatorio (S.S.O) y Ley de Política Habitacional (L.P.H) (Cálculos automáticos)
El programa debe mostrar el Salario Neto del Trabajador como se muestra a continuación:
*/
#include <iostream>
#include <vector>

using namespace std;

main (){
	
	//Variables
	int matriz[15][5];
	int cantidad;
	
	//Matriz de titulos
	string vector_titulos[6] = {"Trabajador","Salario Base", "Prestamo", "S.S.O", "L.P.H."," Sueldo Neto"};

	
	//Pregunta la cantidad de trabjador
	cout<<"Ingrese la cantidad de trabajadores, no menor a tres (3) ni mayor a quince (15)"<<endl;
	cin>>cantidad;
	
	//condicion de seccion	
	if (cantidad < 3){
		cout << "Ingresaste un numero menor a tres (3)"<<endl;
		system("cls");
		return main();
	} else if (cantidad > 15) {
		cout << "Ingresaste un numero mayor a quince (15)"<<endl;
		system("cls");
		return main();
	}
	

	//Inicia un loop primero por fila
	for(int fila=0; fila < cantidad; fila++){
		
		//Salario base
		cout<<"Salario base del trabajador"<<endl;
		cin>>matriz[fila][0];
		
		//calculo del maximo del prestamo		
		float maximo_prestamo = (matriz[fila][0]* 60) / 100;
		
		cout<<"Cual prestamo del trabajador "<<endl;
		cin>>matriz[fila][1];
		
		//Prestamo
		while (matriz[fila][1] > maximo_prestamo) {
		cout<<"Que prestamo del trabajador "<<endl;
		cin>>matriz[fila][1];
		}
		
		//Aportes al SSO, solo monto
		matriz[fila][2] = (matriz[fila][0] * 4) / 100; 
		
		//Aportes al L.P.H o la FAOV
		matriz[fila][3] = (matriz[fila][0] * 3) / 100; 
		
		//Salario final
		matriz[fila][4] = matriz[fila][0] - (matriz[fila][1] + matriz[fila][2] + matriz[fila][3]);
		cout<<endl;
	}

	
	//mostrar titulos
	for (int i = 0; i<6; i++){
		cout<<vector_titulos[i]<<"  ";
	}
	cout<<endl;
	
	//Muestra las salarios trabajador
	for (int fila=0; fila < cantidad; fila++){
		
		//ID del Trabajador
		int ID = fila + 1;
		
		cout<<"     "<<ID<<"  \t";
		
		//Contador Columnas
		for (int columna=0; columna < 5; columna++){
			cout<<matriz[fila][columna]<<" \t ";
		}

		//Brinco de linea para volver a comenzar
		cout<<endl;
	}
}