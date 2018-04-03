#import<iostream>

using namespace std;

int main(){
	int n,x=1;
	
	cout<<"Dame un numero: ";cin>>n;
	
	while(x<=n){
		cout<<x;
		if(x!=n){
			cout<<",";
		}
		x+=1;
	}	
	
	
	
	return 0;
}
