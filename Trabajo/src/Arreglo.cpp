#include "Arreglo.h"
#include <iostream>

using namespace std;

float Punto::getx() const{
    return x;}

void Punto::setx(float a){
    x=a;}

float Punto::gety() const{
    return y;}

void Punto::sety(float b){
    y=b;}

void Arreglo::insertar(int pos,Punto a){
	arr2 = new Punto[len+1];
    for(int i=0;i<len;i++){
    	if(i==pos){
    		break;}
       	arr2[i]=arr[i];}

    for(int i=pos+1;i<=len;i++){
    	arr2[i]=arr[i-1];}
    delete[]arr;

	len++; arr2[pos]=a;

    arr=new Punto[len];
    arr=arr2;
    delete[]arr2;
}

void Arreglo::eliminar(int pos){
	arr2 = new Punto[len-1];
    for(int i=0;i<len;i++){
    	if(i==pos){
    		break;}
       	arr2[i]=arr[i];}

    for(int i=pos;i<len-1;i++){
    	arr2[i]=arr[i+1];}
    delete[]arr;

    len--;
    arr=new Punto[len];
    arr=arr2;
    delete[]arr2;
}
