#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int i;
	int max = 5;
	int acu = 0;
	for (i = 1; i <=5; i++){
		acu += i;
		cout<<"Acu ca en ="<<acu<<"\n";
	}
	cout<<"El valor de acu es "<<acu;
}