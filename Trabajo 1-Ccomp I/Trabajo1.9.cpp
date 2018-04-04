#include <iostream>

using namespace std;

int main(){
	int anio ;
    cout<<"Año a comprobar: ";cin>> anio ;

    !(anio % 4)? !(anio%400) or (anio%100!=0)?cout<<"El año es bisiesto"<<endl:cout<<"El año no es bisiesto"<<endl:cout<<"El año no es bisiesto"<<endl;

	return 0;
	}


