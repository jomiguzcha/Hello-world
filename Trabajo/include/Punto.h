#ifndef PUNTO_H
#define PUNTO_H


class Punto
{   private:
        float x,y;
    public:
        Punto(float a,float b){
            x=a;y=b;}

        float getx() const;
        void setx(float a);
        float gety() const;
        void sety(float b);

};

#endif // PUNTO_H
