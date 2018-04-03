#import<iostream>

using namespace std;

int main(){
    int x,cant_mult=0,z=1;
    cout<<"Dame un numero: ";cin>>x;
    
    
    while(z<=x){
         if(x%z==0)
            cant_mult+=1;
        z+=1;
    }
    
    if(cant_mult>2){
    	cout<<"El numero no es primo"<<endl;
    }  
    else{
    	cout<<"El numero es primo"<<endl;
    }
        
    
	return 0;
}
