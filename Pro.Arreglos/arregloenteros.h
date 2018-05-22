#ifndef ARREGLOENTEROS_H
#define ARREGLOENTEROS_H
#include <stdlib.h>

using namespace std;


class Arreglo
{	private:
		int *arr,*arr2,len=0;
	
	public:
		Arreglo(int lenght){
			arr=new int[lenght];
			len=lenght;}
		
		void anadir(int x);
		void eliminar(int x);
		void vaciar();
		
};

#endif

