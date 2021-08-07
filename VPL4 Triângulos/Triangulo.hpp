#include <iostream>
#include <cmath>

#ifndef TRIANGULO_H
#define TRIANGULO_H

struct Triangulo{
    Ponto2D p1;
    Ponto2D p2;
    Ponto2D p3;

    //construtor
    Triangulo(Ponto2D, Ponto2D, Ponto2D){
    }

    //contratos
    double calcular_area(){}
    double calcular_perimetro(){}
    double comparar_area(Triangulo *triangulo){}

};

#endif