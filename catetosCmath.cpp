#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

float cateto1, cateto2;

float calculoHipotenusa(float cateto1, float cateto2){
	
	float hipotenusa=sqrt((cateto1*cateto1+cateto2*cateto2));
	
	return hipotenusa;
}
 
int main() 
{
 
    cout<<"ingrese cateto 1:"<<endl;
    cin>>cateto1; 
    cout<<"ingrese el cateto 2:"<<endl;
    cin>>cateto2;
    
    calculoHipotenusa(cateto1, cateto2);
    cout<<"la hipotenusa es: "<<hipotenusa<<endl;
    
   return 0;
}