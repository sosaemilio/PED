#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

//creamos una estructura para cada alumno

int main(){
	int n;
	vector<vector<int>> corte;
	cout<<"Cuantos alumnos hay en la seccion ";
	cin>>n;
	
	//Columnas y filas
	size_t columnas = 5;
	size_t filas = n; 
	
	corte.resize(columnas * filas);
	
	//Condiciones y uniones
	for (size_t i = 0; i < filas; ++i){
    	for (size_t j = 0; j < columnas; ++j){
        	corte[i + j * filas] = j;
    	}
	}
	
	//Salidas
	for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << corte[i][j] << " ";
        }   
        cout << endl;
    }
 
    return 0;
}
