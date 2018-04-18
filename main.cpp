#include <iostream>

using namespace std;
int suma_iterativa(const int array[],int lenght,int suma=0,int i=0){
    for(int i=0;i<lenght;i++){
        suma+=array[i];}
    return suma;}

int suma_recursiva(const int array[],int lenght,int suma=0,int i=0){
    if(lenght==0){
        return 0;}
    else{
        suma=array[lenght-1]+suma_recursiva(array,lenght-1);}
    return suma;}

int invertir(int array[],int lenght){
    if(lenght%2==0){
       for(int i=0;i<=(lenght/2);i++){
            int c=0;
            c=array[i];array[i]=array[lenght-i];array[lenght-i]=c;}
    }

}

int tamano(char x){

}


int main(){
    int n;
    cout<<"Longitud de la lista: ";cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Elemento"<<i<<" :";cin>>arr[i];}

    cout<<suma_iterativa(arr,n)<<endl;
    cout<<suma_recursiva(arr,n)<<endl;
    cout<<invertir(arr,n);



    return 0;
}


