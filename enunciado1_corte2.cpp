/*
Enunciado #1:

Diseñar un programa codificado en C++ que EMPLEANDO VECTORES almacena las notas de los estudiantes de una sección bajo las siguientes condiciones:

En la Sección nunca hay menos de tres (3) ni más de cuarenta (40) estudiantes.
Cada estudiante realiza 4 evaluaciones cuya calificación esta entre 1 y 20 puntos.
La calificación promedio mínima aprobatoria son 10 puntos
El programa debe mostrar al final todas las calificaciones de los estudiantes, incluyendo la definitiva. Así como su status (aprobado o reprobado). Como se muestra a continuación
Estudiante    Corte 1    Corte 2     Corte 3   Corte 4      Definitiva      Status

      1                  16              18             16             18               17             Aprobado

      2                  …              …            …            …              …
*/

#include <iostream>
#include <vector>

using namespace std;

int main (){
	//Variables
	int matriz[31][5];
	int cantidad_alumnos;
	
	//Matriz de titulos
	string vector_titulos[7] = {"Estudiante", "Corte 1", "Corte 2","Corte 3","Corte 4","Definitiva","Status"};
	
	
	//vector <string> alumnos;

	
	//Pregunta la cantidad de alumnos
	cout<<"Ingrese la cantidad de alumnos, no menor a tres (3) ni mayor a cuarenta (40)"<<endl;
	cin>>cantidad_alumnos;
	
	//condicion de seccion	
	if (cantidad_alumnos < 3){
		cout << "Ingresaste un numero menor a tres (3)"<<endl;
		system("cls");
		return main();
	} else if (cantidad_alumnos > 40) {
		cout << "Ingresaste un numero mayor a cuarenta (40)"<<endl;
		system("cls");
		return main();
	}
	

	//Inicia un loop primero por fila
	for(int fila=0; fila < cantidad_alumnos; fila++){
		
		//Loop de columna
		for (int columna=0; columna < 4; columna++){
			//Corte
			int corte = columna + 1;
			
			//Ingresa la nota
			cout<<"Ingresa la nota del corte "<<corte<<endl;	
			cin>>matriz[fila][columna];
			           
		}
		
		matriz[fila][4] = (matriz[fila][0] + matriz[fila][1] + matriz[fila][2] + matriz[fila][3]) / 4;
		cout<<endl;
	}

	
	//titulos
	for (int i = 0; i<7; i++){
		cout<<vector_titulos[i]<<"\t";
	}
	cout<<endl;
	
	//Muestra las notas de alumnos
	for (int fila=0; fila < cantidad_alumnos; fila++){
		int ID = fila + 1;
		//ID del alumno
		cout<<"     "<<ID<<"  \t";
		
		//Contador Columnas
		for (int columna=0; columna <= 4; columna++){
			cout<<matriz[fila][columna]<<" \t ";
		}
		
		//condicion de aprobado o no aprobado, dado que no se puede incluir en la matriz
		if (matriz[fila][4] >= 10) {
			cout<<"\tAprobado"<<endl;
		} else {
			cout<<"\tNo aprobado"<<endl;
		}
		
		//Brinco de linea para volver a comenzar
		cout<<endl;
	}
}
