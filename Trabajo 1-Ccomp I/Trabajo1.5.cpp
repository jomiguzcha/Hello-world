#import<iostream>

using namespace std;

int main(){
    int x,cant_mult=0,z=1;
    cout<<"Dame un numero: ";cin>>x;

    while(z<=x){
        !(x%z)?cant_mult+=1:cant_mult=cant_mult;
        z+=1;
    }

    cant_mult>2?cout<<"El numero no es primo"<<endl:cout<<"El numero es primo"<<endl;

	return 0;
}

