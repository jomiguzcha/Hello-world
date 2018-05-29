#include <iostream>
#include "arreglo.h"
#include <stdlib.h>

using namespace std;

void Arreglo::iniciar(){
    for(int i=0;i<len;i++){
        cout<<"Elemento de la posicion "<<i<<" : ";cin>>arr[i];}
}

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
	arr=new int[0];
	len=0;

}

void Arreglo::mostrar(){
    for(int i=0;i<len;i++){
        cout<<arr[i]<<"\t";}
    cout<<endl;}

int Arreglo::mayor(){
    int may=arr[0];
    for(int i=0;i<len;i++){
        if(arr[i]>may){
            may=arr[i];}}
    return may;
}

int Arreglo::menor(){
    int men=arr[0];
    for(int i=0;i<len;i++){
        if(arr[i]<men){
            men=arr[i];}}
    return men;
}

float Arreglo::promedio(){
    float prom=0;
    for(int i=0;i<len;i++){
        prom+=arr[i];}
    prom/=len;
    return prom;
}

bool Arreglo::esPrim(int x){
    int i=1,cant_mult=0;
    while(i<=x){
        !(x%i)?cant_mult+=1:cant_mult=cant_mult;
        i++;}
    if(cant_mult>2){
        return false;}
    else{
        return true;}
}


int Arreglo::mayor_prim(){
    int may=0;
    for(int i=0;i<len;i++){
        if(esPrim(arr[i])==true){
            if(arr[i]>may){
                may=arr[i];}}
    }
    if(may==0){
    	cout<<"No hay numeros primos"<<endl;}
    return may;
}


int Arreglo::menor_prim(){
    int men=0;
    for(int i=0;i<len;i++){
        if(esPrim(arr[i])==true){
        	if(men==0){
        		men=arr[i];}

            if(arr[i]<men){
                men=arr[i];}}
    }
    if(men==0){
    	cout<<"No hay numeros primos"<<endl;}
    return men;
}

void Arreglo::ordenar(){
    for(int i=0;i<len;i++){
    	for(int j=0;j<len;j++){
			 if(arr[j]>arr[j+1]){
			 	int c=0;
			 	c=arr[j];
                arr[j]= arr[j+1];
                arr[j+1]=c;} 
    	}
               	
    }
          
}

int Arreglo::sumar(){
    int sum=0;
    for(int i=0;i<len;i++){
        sum+=arr[i];}
    return sum;
}

void Arreglo::invertir(){
	for(int i=1;i<=(len/2);i++){
        int c=0;
        c=arr[i-1];
        arr[i-1]=arr[len-i];
        arr[len-i]=c;}		
}
