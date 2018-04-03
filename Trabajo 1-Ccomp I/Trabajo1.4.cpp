#import<iostream>

using namespace std;

int main(){
	int a,b;
	
	cout<<"Dame dos numeros: ";cin>>a>>b;
	
	if(a%2==0){
		cout<<a<<" es multiplo de 2"<<endl;}
	else{
		cout<<a<<" no es multiplo de 2"<<endl;
	}
	
	if(b%2==0){
		cout<<b<<" es multiplo de 2"<<endl;
	}
	else{
		cout<<b<<" no es multiplo de 2"<<endl;
	}

	if(a%b==0){
		cout<<a<<" es multiplo de "<<b<<endl;
	}
	else{
		cout<<a<<" no es multiplo de "<<b<<endl;
	}
	
	
	if(a*a==b){
		cout<<a<<" elevado al cuadrado da "<<b<<endl;
	}
	else{
		cout<<a<<" elevado al cuadrado NO da "<<b<<endl;
	}
	
	
	
	return 0;
}
