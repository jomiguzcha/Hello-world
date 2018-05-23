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

	a1.vaciar();
	a1.mostrar();


	return 0;
}
