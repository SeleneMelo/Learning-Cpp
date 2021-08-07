#include <cmath>
#include <iostream>
#include "Ponto2D.hpp"

Ponto2D::Ponto2D(double x, double y){
    this->x_ = x;
    this->y_ = y;
}

Ponto2D::calcular_distancia(){

    return sqrt(pow(this->x_ - ponto->x_, 2) + pow(this->y_ - ponto->y_, 2));

}