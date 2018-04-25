#include <iostream>

using namespace std;

int suma(int arr[],int lenght)
{   int suma=0;
    for(int i=0;i<lenght;i++)
        suma+=arr[i];
    return suma;}

int suma_recursiva(int arr[],int lenght,int suma=0)
{     if (lenght==0){
        return 0;}
      else{
        return suma=arr[lenght-1]+suma_recursiva(arr,--lenght);}

}

int invertir(int array[],int lenght){
       for(int i=1;i<=(lenght/2);i++){
             int c=0;
            c=array[i-1];
           array[i-1]=array[lenght-i];
           array[lenght-i]=c;}
    }

void copia(int arr1[],int arr2[],int lenght)
{   for (int i=0;i<lenght;i++){
        arr2[i]=arr1[i];
        cout<<arr2[i];}
}

void copia_recursivo(int arr1[],int arr2[],int lenght)
{    if(lenght==0){
        return;}
    arr2[lenght-1]=arr1[lenght-1];
    copia_recursivo(arr1,arr2,lenght-1);
}



int main()
{   int l1[]={1,2,3,4};
    int l2[]={5,6,7,8};
    copia_recursivo(l1,l2,4);
    for (int i=0;i<4;i++){
           cout<<l2[i];}

  

    return 0;
}

