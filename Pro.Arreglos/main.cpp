#include <iostream>
#include "Arreglo.h"
#include <stdlib.h>


using namespace std;


int main() {
	Arreglo a1(3);
    a1.arr[0]=0;
    a1.arr[1]=5;
    a1.arr[2]=9;

	a1.anadir(4);
	a1.imprimir();

	a1.eliminar(5);
	a1.imprimir();

	a1.vaciar();
	a1.imprimir();

	return 0;
}
