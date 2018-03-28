#include <iostream>

using namespace std;

int main()
{

    int a,b,c,d,e,n,prom=0,may=0,men=0;

    cout<<"Cantidad de numeros: ";cin>>n;
    cout<<"Dame los numeros: ";cin>>a>>b>>c>>d>>e;

    prom=(a+b+c+d+e)/n;

    if(a>b){
        may=a;}
    else{
        may=b;}
    if(c>may){
        may=c;}
    if(d>may){
        may=d;}
    if(e>may){
        may=e;}

    if(a<b){
        men=a;}
    else{
        men=b;}
    if(c<men){
        men=c;}
    if(d<men){
        men=d;}
    if(e<men){
        men=e;}

    cout<<"Promedio= "<<prom<<"\tel mayor "<<may<<"\tel menor "<<men;
    return 0;
}
