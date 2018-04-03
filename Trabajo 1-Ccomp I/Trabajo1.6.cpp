#import<iostream>

using namespace std;

int main(){
	int n,a=1,z=1,cant_mult=0,x=0;
	
	cout<<"Dame un numero: ";cin>>n;
	
	while(x!=n){
		cant_mult=0;
		z=1;
		while(z<=a){
         		if(a%z==0){
            			cant_mult+=1;}
        			z+=1;
    		}
    
	    	if(cant_mult==2){
	    		cout<<a<<endl;
			x+=1;
	   	}  
		a+=1;
		
	}
	
	return 0;
}
