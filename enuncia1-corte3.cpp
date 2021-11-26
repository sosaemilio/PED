/* Diseñe un programa en C++ que empleando registros permita almacenar y consultar los datos para el control de una academia de cursos que facilitara un curso de c++ con lo siguiente:

Datos del curso: Codigo_Curso, Nombre_Curso, Horas Academicas, Créditos, Fecha_Inicio

Datos Participante: Cédula, Apellidos, Nombres, Dirección, Celular, Edad, Sexo

Datos_Inscripcion: Cod_Participante, Cod_Curso, Turno(Matutino, Vespertino, Sabatino)

El programa debe mostrar los listados por turno  */

#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

	//Declaracion de vectores por turno usando STRUCT
	/*
	vector <Datos_participante> matutino;
	vector <Datos_participante> vespertino;
	vector <Datos_participante> sabatino;
	*/
	
	//Declaracion de vectores por turno	usando string
	vector <string> matutino;
	vector <string> vespertino;
	vector <string> sabatino;

struct Datos_del_curso{
	int cod_curso;
	char nombre_curso[25];
	int horas_academicas;
	int creditos;
	char fecha_de_inicio[50];
}cursos[10];

struct Datos_participante{
	int cod_participante;
	int cedula;
	string apellidos;
	string nombres;
	char direccion[30];
	string celular;
	int edad;
	char sexo [2];
	char turno[2];
}participante[20];

//Funcion para crear el curso
Datos_del_curso crear_cursos(){
	cout<<"Ingrese el codigo del curso a registrar... "<<endl;
	cin>>cursos[1].cod_curso;
	cout<<"Inngre el nombre del cursos... "<<endl;
	cin>>cursos[1].nombre_curso;
	cout<<"Ingrese las horas academicas... "<<endl;
	cin>>cursos[1].horas_academicas;
	cout<<"Ingrese las unidades de creditos... "<<endl;
	cin>>cursos[1].creditos;
	
	return cursos[1];
}

int main() {
	int op;

	
	//Texto del menu
	cout<<"----------Menu----------"<<endl;
	cout<<"1. Crear curso "<<endl;
	cout<<"2. Registrar Alumno "<<endl;
	cout<<"3. Consultas "<<endl;
	cin>>op;
	
	//Menu principal
	switch(op){
		case 1:
			crear_cursos();
			return main();
			break;
		case 2:
			//Variable que guardara los alumnos
			int n;
			
			//Preguntamos la cantidad de alumnos
			cout<<"Ingrese la cantidad de alumnos... ";
			cin>>n;
			
			//Iniciamos el contandor desde uno por cada alumno ingresado en la consola
			for (int i=1; i<=n; i++){
				//ID para controlar cada alumno
				int id = i;
				participante[i].cod_participante = id;
				cout<<"Ingresa los nombres del participante "<<id<<endl;
				cin>>participante[i].nombres;
				cout<<"Ingresa los apellidos del participante "<<id<<endl;
				cin>>participante[i].apellidos;
				cout<<"Ingresa la cedula del participante "<<id<<endl;
				cin>>participante[i].cedula;
				cout<<"Ingresa la direccion del participante "<<id<<endl;
				cin>>participante[i].direccion;
				cout<<"Ingresa la Edad del participante "<<id<<endl;
				cin>>participante[i].edad;
				cout<<"Ingresa la telefono celular del participante "<<id<<endl;
				cin>>participante[i].celular;
				cout<<"Ingresa la sexo (M o F) del participante "<<id<<endl;
				cin>>participante[i].sexo;
				cout<<"Ingresa el turno M para matutino, V para vespertino y S para Sabatino "<<endl;
				cin>>participante[i].turno; //Deben ingresar en minisculas
				
				//Condicion para el turno
				if (strcmp(participante[i].turno,"m") == 0) {
					string nombre = participante[i].nombres;
					matutino.push_back(nombre);
					cout<<"Registrado en el turno matutino. "<<endl;
				} else if (strcmp(participante[i].turno,"v") == 0) {
					string nombre = participante[i].nombres;
					vespertino.push_back(nombre);
					cout<<"Registrado en el turno vespertino. "<<endl;
				} else if (strcmp(participante[i].turno,"s") == 0) {
					string nombre = participante[i].nombres;
					sabatino.push_back(nombre);
					cout<<"Funciono en el turno sabatino. "<<endl;
				} else {
					cout<<"Usted no ingreso los datos correctos, repita por favor"<<endl;
					return main();
				}
				system("cls");
				cout<<"Participante: "<< participante[i].nombres<<" "<<participante[i].apellidos<<" registrado exitosamente"<<"en el turno de "<<participante[i].turno<<endl;
			}
			return main();
			break;
		case 3:
			//Consultar
			system("cls");
			cout<<"Consulta los alumnos por turno, del curso "<< cursos[1].nombre_curso <<endl;
			cout<<"1. Vespertino "<<endl;
			cout<<"2. Matutino "<<endl;
			cout<<"3. Sabatino "<<endl;
			cout<<"4. Volver atras "<<endl;
			cin>>op;
			
			//Menu, es modificable imprime solo el nombre, si se desea usar la estructura se modifica el tipo de variable y se abren las que estan arriba
			switch(op){
				case 1:
					for (std::size_t i = 0; i < vespertino.size(); i++) {
					string alumnoNombre = vespertino[i];
					cout << alumnoNombre <<endl; //Esta configurado para solo mostrar el nombre pero puede mostrar lo que sea
					}
					return main();
				break;
				case 2:
					for (std::size_t i = 0; i < matutino.size(); i++) {
					string alumnoNombre = matutino[i];
					cout << alumnoNombre <<endl; 
					}
					return main();
				break;
				case 3:
					for (std::size_t i = 0; i < sabatino.size(); i++){
					string alumnoNombre = sabatino[i];
					cout << alumnoNombre <<endl; 
					}
					return main();
				break;
				case 4:
					return main();
					system("cls");
				break;
			}
		break;
	}
}

