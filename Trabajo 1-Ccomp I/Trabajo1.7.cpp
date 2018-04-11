#import<iostream>

using namespace std;
void CincoDigitos(int &a,int &b,int &c,int &d,int &e,int n){
    a=n%10;n/=10;
    b=n%10;n/=10;
	c=n%10;n/=10;
    d=n%10;n/=10;
    e=n%10;
}

int main(){
    int n,a=0,b=0,c=0,d=0,e=0;

    cout<<"Numero de cinco digitos: ";cin>>n;
    CincoDigitos(a,b,c,d,e,n);
    cout<<e<<"\t"<<d<<"\t"<<c<<"\t"<<b<<"\t"<<a;

	return 0;
}
