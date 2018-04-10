#import<iostream>

using namespace std;

void sucesion(int n,int x=1)
{   while(x<=n){
		cout<<x;
		if(x!=n){
			cout<<",";
		}
		x+=1;
	}

}

int main(){
	int n;

	cout<<"Dame un numero: ";cin>>n;
    sucesion(n);

	return 0;
}
