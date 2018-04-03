#include <iostream>

using namespace std;

int main(){
	int anio ;
    cout<<"Año a comprobar: ";cin>> anio ;
    
    if (anio % 4 == 0){
        cout<<"El año es bisiesto"<<endl;
    }
    else{
    	cout<<"El año no es bisiesto"<<endl;
    }
    
	return 0;
	}
