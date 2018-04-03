#include <iostream>

using namespace std;

int main(){
	int i,fact=1,numero;

	cout<<"Dame un numero: ";cin>>numero;
	
	if(numero<=0){
		cout<<"NO existe el factorial";
	} 
	else{
	    for (i = 1; i <= numero; i++){
	        fact*=i;
	    }
	}
	cout<<"Factorial de "<<numero<<" es "<<fact;
		
	return 0;
}
