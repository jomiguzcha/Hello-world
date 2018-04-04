#import<iostream>

using namespace std;

int main(){
	int a,b,c,prom=0,may=0,men=0;

    cout<<"Dame tres numeros: ";cin>>a>>b>>c;

    prom=(a+b+c)/3;

    may=(a>b)?a:b;
    may=(c>may)?c:may;

    men=(a<b)?a:b;
    men=(c<men)?c:men;

    cout<<"Promedio: "<<prom<<"\t,el mayor: "<<may<<"\t,el menor: "<<men;

	return 0;
}
