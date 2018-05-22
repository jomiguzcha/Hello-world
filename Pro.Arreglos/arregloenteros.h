#ifndef ARREGLOENTEROS_H
#define ARREGLOENTEROS_H
#include <stdlib.h>

using namespace std;


class Arreglo
{	private:
		int *arr,*arr2,len=0;
	
	public:
		Arreglo(int l[],int lenght){
			*arr=l[0];
			len=lenght;}
		
		void anadir(int x);
		void eliminar(int x);
		void vaciar();
		
};

#endif

