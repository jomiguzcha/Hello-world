#import<iostream>

using namespace std;

int main(){
	int n,a=1,z=1,x=0,cant_mult=0;

	cout<<"Dame un numero: ";cin>>n;

	while(x!=n){
		cant_mult=0;
		z=1;
		while(z<=a){
            !(a%z)?cant_mult+=1:cant_mult=cant_mult;
            z+=1;
        }

        (cant_mult==2)?cout<<a<<endl && (x+=1):x=x;

		a+=1;

	}

	return 0;
}


