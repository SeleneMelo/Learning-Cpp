#ifndef ALUNO_H
#define ALUNO_H

#include <iostream>
#include <string.h>
using namespace std;

using namespace std;

struct Aluno{
    int matricula;
    string nome;
    Aluno();
    //construtores
    Aluno(int matricula, string nome); //construtor sobrecarregado
     //construtor padrao

    //contratos

   void imprimir_dados();

};

#endif