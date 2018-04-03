#include <iostream>

using namespace std;

int main(){
	int anio ;
    cout<<"Año a comprobar: ";cin>> anio ;

    if (anio % 4 == 0 ){
            if(anio%400==0 or anio%100!=0){
                cout<<"El año es bisiesto"<<endl;}
            else{
                cout<<"El año no es bisiesto"<<endl;}
            }

    else{
    	cout<<"El año no es bisiesto"<<endl;
    }

	return 0;
	}
