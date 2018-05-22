#include <iostream>
#include "arregloenteros.h"
#include <stdlib.h>

using namespace std;


int main() {
	Arreglo a1([1,2,3],3);
	
	a1.anadir(4);
	a1.extraer(3);
	a1.vaciar();
	
	return 0;
}
