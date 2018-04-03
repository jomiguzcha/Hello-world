#import<iostream>

using namespace std;

int main(){
	
    int x,a=0,b=0,c=0,d=0,e=0;

    cout<<"Numero de cinco digitos: ";cin>>x;

    a=x%10;x/=10;
    b=x%10;x/=10;
	c=x%10;x/=10;
    d=x%10;x/=10;
    e=x%10;x/=10;
    
    cout<<e<<"\t"<<d<<"\t"<<c<<"\t"<<b<<"\t"<<a;
	
	return 0;
}
