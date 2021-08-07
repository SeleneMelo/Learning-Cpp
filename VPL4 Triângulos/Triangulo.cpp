#include <cmath>
#include <iostream>
#include "Triangulo.hpp"

Triangulo::Triangulo(Ponto2D p1, Ponto2D p2, Ponto2D p3){
    this->_p1 = p1;
    this->_p2 = p2;
    this->_p3 = p3;
}

Triangulo::calcular_area(){

    int A = (this->_p2).calcular_dist(&(this->_p1));
    int B = (this->_p3).calcular_dist(&(this->_p2));
    int C = (this->_p1).calcular_dist(&(this->_p3));

    int p = (A + B + C)/2;

    return sqrt((p(p - A)(p - B)(p - C)));
}

Triangulo::calcular_perimetro(){

    int A = (this->_p2).calcular_dist(&(this->_p1));
    int B = (this->_p3).calcular_dist(&(this->_p2));
    int C = (this->_p1).calcular_dist(&(this->_p3));

    return (A+B+C);

}

Triangulo::comparar_area(){

    //int area1 = triangulo->comparar_area();



}