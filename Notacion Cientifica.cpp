#import<iostream>

using namespace std;

int potencia(int b,int e,int p=1){
	for (int i=0;i<e;i++) {
		p*=b;}
	return p;}

double not_cientifica(char x[]){
	int num=0,e=0,a=0,b=0,c=10;
	double resul=0;
	for(int i=0;x[i]!='e';i++,++b){
		if(x[i]=='.'){
			continue;}
		num+=(x[i]-48);num*=10;}
	num/=10;
	
	a = x[b+2]-48;
	e=potencia(c,a);
	if(x[b+1]=='-'){
		resul=num/e;
		return resul;}
	else{
		resul=num*e;
		return resul;}
	}
	

int main(){
	char x[]="123.45e-6";
	cout<<not_cientifica(x)<<endl;
	
	return 0;
}


