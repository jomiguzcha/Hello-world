#include "Curso.h"

void curso::setearNombre(string n){
    nombre=n;}

void curso::setearPromedio(int nota[]){
    for(int i=0;i<5;i++){
        promedio+=nota[i];}}

int obtenerMayorNota(){
    int may=0;
    for(int i=0;i<5;i++){
        if(nota[i]>may){
            may=nota[i];}
        }
    return may;}

int obtenerMenorNota(){
    int men=0;
    for(int i=0;i<5;i++){
        if(nota[i]>men){
            men=nota[i];}
        }
    return may;
}

string curso::obtenerNombre(){
    return nombre;}

int curso::obtenerPromedio(){
    return promedio;}

string curso::obtenerInfo(){

}
