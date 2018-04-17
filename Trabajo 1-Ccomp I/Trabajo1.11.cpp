#import<iostream>

using namespace std;

int factorial(int n){
	if(n==1){
		return 1;}
	else{
		return n*factorial(n-1);}
}

int main(){
	int fact=0,n;
	
	cout<<"Dame el numero: ";cin>>n;
	fact=factorial(n);
	
	cout<<"El factorial del numero es :"<<fact;
	
	return 0;
}
