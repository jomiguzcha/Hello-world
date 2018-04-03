#import <iostream>

using namespace std;

int main(){
	int edad;
	
	cout<<"Dame la edad: ";cin>>edad;
	
	if(edad>=18){
		cout<<"\nLa edad es de un mayor de edad";
	}
	else if(edad<=0){
		cout<<"\nEres un no-nacido";
	}
	else{
		cout<<"\nLa edad es de un menor de edad";
	}
	
	return 0;
}

