#ifndef CURSO_H
#define CURSO_H

#include <string>

using namespace std;

class curso
{    public:
        int notas[5],promedio=0;string nombre;

        curso(string n,int nota[]);

        void setearNombre(string n);
        void setearPromedio(int nota[]);
        int obtenerMayorNota();
        int obtenerMenorNota();
        string obtenerNombre();
        int obtenerPromedio();
        string obtenerInfo();

};

#endif // CURSO_H
