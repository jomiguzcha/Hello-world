#import <iostream>

using namespace std;

void edad(int n)
{
    n<=0?cout<<"La edad es de un no nacido":n>=18?cout<<"La edad es de un mayor de edad":cout<<"La edad es de un menor de edad";

}

int main(){
    int n;
    cout<<"Dame tu edad: ";cin>>n;
	edad(n);
	return 0;
}
