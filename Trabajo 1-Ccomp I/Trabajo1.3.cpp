#import<iostream>

using namespace std;

int main(){
	int a,b,c,n,prom=0,may=0,men=0;

    cout<<"Cantidad de numeros: ";cin>>n;
    cout<<"Dame los numeros: ";cin>>a>>b>>c;

    prom=(a+b+c)/n;

    if(a>b){
        may=a;}
    else{
        may=b;}
    if(c>may){
        may=c;}
  
    if(a<b){
        men=a;}
    else{
        men=b;}
    if(c<men){
        men=c;}
    
    cout<<"Promedio: "<<prom<<"\t,el mayor: "<<may<<"\t,el menor: "<<men;
	
	return 0;
}
