#import<iostream>

using namespace std;
int esPrimo(int &n,int &i,int &cant_mult){
    while(i<=n){
        !(n%i)?cant_mult+=1:cant_mult=cant_mult;
        i++;
    }return cant_mult;
}


int main(){
    int n,a=1,z=1,x=0,cant_mult=0;

	cout<<"Dame un numero: ";cin>>n;
    while(x!=n){
		cant_mult=0;
		z=1;
		esPrimo(a,z,cant_mult);
		(cant_mult==2)?cout<<a<<endl && (x++):x=x;
		a++;
	}

	return 0;
}
