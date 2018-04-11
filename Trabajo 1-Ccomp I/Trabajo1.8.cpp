#import<iostream>

using namespace std;
bool palindromo(int a,int b,int c,int d, int e,int n){
    a=n%10;n/=10;
    b=n%10;n/=10;
    c=n%10;n/=10;
    d=n%10;n/=10;
    e=n%10;
    return (a==e) && (b==d)?true:false;
}

int main(){
	int x,a=0,b=0,c=0,d=0,e=0;

    cout<<"Numero: ";cin>>x;
    palindromo(a,b,c,d,e,x)?cout<<"El numero es palindromo":cout<<"El numero NO es palindromo";

	return 0;
	}
