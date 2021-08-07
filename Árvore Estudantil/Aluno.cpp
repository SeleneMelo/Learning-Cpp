#include "Aluno.hpp"


using namespace std;

//construtor sobrecarregado
Aluno::Aluno(int _matricula, string _nome){
    this->matricula = _matricula;
    this->nome = _nome;
}

//construtor padrao
Aluno::Aluno(){
    this->matricula = 0;
    this->nome = "";
}


void Aluno::imprimir_dados(){
    cout << matricula << " " << nome << endl;
}