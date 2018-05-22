#include "arregloenteros.h"

void Arreglo::anadir(int x){
	arr2 = new int[len+1];
    for(int i=0;i<len;i++){
       	arr2[i]=arr[i];}
    delete[]arr;
    
	len++;
    arr2[len-1]=x;

    arr=new int[len];
    for(int i=0;i<len;i++)
    	arr[i]=arr2[i];
    delete[]arr2;
}

void Arreglo::extraer(int x){
	int pos=0;
	for(int i=0;i<len;i++){
		if(arr[i]==x){
			pos=i;}}
    if(pos==0){
    	return "El elemento no esta en lista";}
    else{
    	arr[pos]=0;
    	arr2 = new int[len-1];
    	for(int i=0;i<len-1;i++){
    		if(arr[i]==0){
    			break;}
       		arr2[i]=arr[i];}
       	for(int i=pos+1;i<len-1;i++){
       		arr2[i-1]=arr[i];}
       	delete[]arr;
       	
       	len--;

    	arr=new int[len];
    	for(int i=0;i<len;i++)
    		arr[i]=arr2[i];
    	delete[]arr2;

    }
}

void Arreglo::vaciar(){
	delete[] arr;
	arr=new int[1];
	arr[0]=0;
}

