#include <iostream>
#include <cmath>

#ifndef PONTO2D_H
#define PONTO2D_H

struct Ponto2D{
    double x;
    double y;

    //construtor
    Ponto2D(double, double){}
    //Ponto2D = default;

    //contratos
    double calcular_distancia(Ponto2D* pontos){}
};

#endif 