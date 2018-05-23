#include <iostream>
#ifndef ARREGLO_H
#define ARREGLO_H
#include <stdlib.h>

using namespace std;

class Arreglo
{	public:
	    int *arr,*arr2,len=0;

		Arreglo(int lenght){
			arr=new int[lenght];
			len=lenght;}

        ~Arreglo(){
            delete[]arr;
            delete[]arr2;}

		void anadir(int x);
		void insertar(int pos,int x);
		void eliminar(int pos);
		void vaciar();
        void mostrar();

};

#endif 
