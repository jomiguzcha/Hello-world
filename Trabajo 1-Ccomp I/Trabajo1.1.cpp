#import <iostream>

using namespace std;

int main(){
	int edad;

	cout<<"Dame la edad: ";cin>>edad;

	edad<=0?cout<<"La edad es de un no nacido":edad>=18?cout<<"La edad es de un mayor de edad":cout<<"La edad es de un menor de edad";


	return 0;
}

