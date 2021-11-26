#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const float PI = 3.1416;
float radio, longitud, area, volumen;

float calcularLongitud(float radio){
    longitud = 2*PI*radio;
	return longitud;
}

float calcularArea(float radio){
	PI*pow(radio,2);
	return area;
}

float calcularVolumen(float radio){
	(4.0/3)*PI*pow(radio,3);
	return volumen;
}

int main(void)
{  
    cout << "Introduce el valor del radio : ";
    cin >> radio;
    
    calcularLongitud(radio);
    calcularArea(radio);
    calcularVolumen(radio);
    
    
    cout << "\nLongitud del circulo: "<<longitud;
    cout << "\nArea del circulo: "<<area;
    cout << "\nVolumen de la esfera: "<<volumen;
    
    return 0;
}