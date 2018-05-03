#import<iostream>

using namespace std;

int tamano(char arr[],int i=0){
    for(int lenght=0;arr[lenght]!='\0';lenght++){
    	i++;}
	return i;}

int substring(char *ptr,char *ptr2,int a,int b){
	int i=0;
	if(a<b){
		for(;*ptr2!='\0';*ptr2++){
			if(*ptr==*ptr2){
				*ptr++;i++;}}
		if(i<a){
			return 0;}
		else if(i==a){
			return 1;}
	}
	if(a>b){
		for(;*ptr!='\0';*ptr++){
			if(*ptr==*ptr2){
				*ptr2++;i++;}}
		if(i<b){
			return 0;}
		else if(i==b){
			return 1;}
	}
}

int main(){
	char s[]="hola";
	char t[]="adios";
	int a=tamano(s);int b=tamano(t);
	cout<<substring(s,t,a,b)<<endl;
	
	return 0;
}


