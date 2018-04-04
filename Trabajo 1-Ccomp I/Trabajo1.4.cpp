#import<iostream>

using namespace std;

int main(){
	int a,b;

	cout<<"Dame dos numeros: ";cin>>a>>b;

	!(a%2)?cout<<a<<" es multiplo de 2"<<endl:cout<<a<<" no es multiplo de 2"<<endl;
    !(b%2)?cout<<b<<" es multiplo de 2"<<endl:cout<<b<<" no es multiplo de 2"<<endl;
    !(a%b)?cout<<a<<" es multiplo de "<<b<<endl:cout<<a<<" no es multiplo de "<<b<<endl;
    b==a*a?cout<<a<<" elevado al cuadrado da "<<b<<endl:cout<<a<<" elevado al cuadrado NO da "<<b<<endl;



	return 0;
}


