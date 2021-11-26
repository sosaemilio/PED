#include <iostream>
#include <cstdlib>

using namespace std;

int numeroMayor = 0, numeros[5], numeroConsultar;

int determinarMayor(int numeroConsultar){
	if(numeroConsultar > numeroMayor){
		numeroMayor = numeroConsultar;
	}
	return numeroMayor;
}
 
int main(){
	cout<<"Ingrese 5 valores para determinar el numero maximo\n";
	
	for (int i = 1; i <= 5; i++){ 
		cout<<"\n Ingresa el numero: ";
		cin>>numeros[i];
		numeroConsultar = numeros[i];
		determinarMayor(numeroConsultar);
	}
	
	cout<<"El numero mayor es: "<<numeroMayor;
	return 0;
}
