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
	arr=new int[1];
	arr[0]=0;
	len=1;

}

void Arreglo::mostrar(){
    for(int i=0;i<len;i++){
        cout<<arr[i]<<"\t";}
    cout<<endl;}

int Arreglo::mayor(){
    int may=0;
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

bool Arreglo::esPrim(int pos){
    int i=1,cant_mult=0;
    while(i<=arr[pos]){
        !(arr[pos]%i)?cant_mult+=1:cant_mult=cant_mult;
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
    return may;
}

int Arreglo::menor_prim(){
    int men=arr[0];
    for(int i=0;i<len;i++){
        if(esPrim(arr[i])==true){
            if(arr[i]<men){
                men=arr[i];}}
    }
    return men;
}

void Arreglo::ordenar(){

}

int Arreglo::sumar(){
    int sum=0;
    for(int i=0;i<len;i++){
        sum+=arr[i];}
    return sum;
}

void Arreglo::invertir(){

}
