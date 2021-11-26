/*Enunciado #1:

Diseñar un programa codificado en C++ que EMPLEANDO VECTORES almacena las notas de los estudiantes de una sección bajo las siguientes condiciones:

En la Sección nunca hay menos de tres (3) ni más de cuarenta (40) estudiantes.
Cada estudiante realiza 4 evaluaciones cuya calificación esta entre 1 y 20 puntos.
La calificación promedio mínima aprobatoria son 10 puntos
El programa debe mostrar al final todas las calificaciones de los estudiantes, incluyendo la definitiva. Así como su status (aprobado o reprobado). Como se muestra a continuación
Estudiante    Corte 1    Corte 2     Corte 3   Corte 4      Definitiva      Status

      1                  16              18             16             18               17             Aprobado

      2                  …              …            …            …              … */
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main(){
	int calificacion;
	int cantidad_estudiantes;
	cout<<"Por favor ingrese la cantidad de estudiantes, no puede ser menor tres (3) ni mayor a cuarenta (40)"<<endl;
	do{
		cin>> cantidad_estudiantes;
	} while (cantidad_estudiantes <= 3 && cantidad_estudiantes >= 40);

	vector<int> alumnos;
	int contador_notas = cantidad_estudiantes * 4
	for (int i = 1; i <= cantidad_estudiantes; i++){
		cout<<"Ingrese las calificaciones del alumno 1"<<endl;
		cin>>calificacion;
		alumnos.push_back(calificacion);
		int tamanio = alumnos.size();
		if (tamanio % 4){
			cout<<" \n "<<endl;
		} 
	}
}