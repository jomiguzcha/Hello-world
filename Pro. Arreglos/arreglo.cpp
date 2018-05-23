#include <iostream>
#include "arreglo.h"
#include <stdlib.h>

using namespace std;

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

void Arreglo::insertar(int pos,int x){
	arr2 = new int[len+1];
    for(int i=0;i<len;i++){
    	if(i==pos){
    		break;}
       	arr2[i]=arr[i];}
    
    for(int i=pos+1;i<=len;i++){
    	arr2[i]=arr[i-1];}
    delete[]arr;

	len++; arr2[pos]=x;

    arr=new int[len];
    for(int i=0;i<len;i++)
    	arr[i]=arr2[i];
    delete[]arr2;
}
              

void Arreglo::eliminar(int pos){
	arr2 = new int[len-1];
    for(int i=0;i<len;i++){
    	if(i==pos){
    		break;}
       	arr2[i]=arr[i];}
    
    for(int i=pos;i<len-1;i++){
    	arr2[i]=arr[i+1];}
    delete[]arr;
    
    len--;
    
	arr=new int[len];
    for(int i=0;i<len;i++)
    	arr[i]=arr2[i];
    delete[]arr2;         
}

void Arreglo::vaciar(){
	delete[]arr;
	arr=new int[1];
	arr[0]=0;
	len=1;

}

void Arreglo::mostrar(){
    for(int i=0;i<len;i++){
        cout<<arr[i]<<"\t";}
    cout<<endl;
}
