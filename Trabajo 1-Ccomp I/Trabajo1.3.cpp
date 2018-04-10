#import<iostream>

using namespace std;

void ecuacion(int a,int b,int c,int &prom,int &may,int &men){
    prom=(a+b+c)/3;
    may=(a>b)?a:b; may=(c>may)?c:may;
    men=(a<b)?a:b; men=(c<men)?c:men;
}

int main(){
	int a,b,c,prom=0,may=0,men=0;

    cout<<"Dame tres numeros: ";cin>>a>>b>>c;
    ecuacion(a,b,c,prom,may,men);

    cout<<"Promedio: "<<prom<<",el mayor: "<<may<<",el menor: "<<men;
	return 0;
}
