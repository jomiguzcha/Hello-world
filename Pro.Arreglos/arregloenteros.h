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
		void eliminar(int x);
		void vaciar();
        void imprimir();

};

#endif // ARREGLO_H
