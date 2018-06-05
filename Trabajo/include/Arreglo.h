#ifndef ARREGLO_H
#define ARREGLO_H

class Punto
{   private:
        float x,y;
    public:
        Punto(float a,float b){
            x=a;y=b;}

        Punto(int lenght){
            arr=new Punto[lenght];}

        float getx() const;
        void setx(float a);
        float gety() const;
        void sety(float b);

};

class Arreglo
{    Punto *arr;int len=0;

		Arreglo(int lenght){
			arr=new Punto[lenght];
			len=lenght;}

        ~Arreglo(){
            delete[]arr;}

		void insertar(int pos,Punto a);
		void eliminar(int pos);

};

#endif // ARREGLO_H
