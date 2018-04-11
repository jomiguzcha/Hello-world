#import<iostream>

using namespace std;
int esPrimo(int &n,int &i,int &cant_mult){
    while(i<=n){
        !(n%i)?cant_mult+=1:cant_mult=cant_mult;
        i++;
    }return cant_mult;
}

int main(){
    int x,cant_mult=0,z=1;
    cout<<"Dame un numero: ";cin>>x;
    esPrimo(x,z,cant_mult);
    cant_mult>2?cout<<"El numero no es primo"<<endl:cout<<"El numero es primo"<<endl;

	return 0;
}
