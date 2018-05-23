#include <iostream>
#include "arreglo.h"
#include <stdlib.h>


using namespace std;


int main() {
	Arreglo a1(4);

    a1.iniciar();
	a1.anadir(10);
	a1.mostrar();

	a1.eliminar(2);
	a1.mostrar();

	a1.insertar(1,7);
	a1.mostrar();

	//a1.vaciar();
	//a1.mostrar();

    cout<<"El mayor es : "<<a1.mayor()<<endl;
    cout<<"El menor es : "<<a1.menor()<<endl;
    cout<<"El promedio de elementos es : "<<a1.promedio()<<endl;
    cout<<"El mayor primo es : "<<a1.mayor_prim()<<endl;
    cout<<"El menor primo es : "<<a1.menor_prim()<<endl;

    cout<<"La suma de elementos es : "<<a1.sumar()<<endl;


	return 0;
}
