#ifndef BST_H
#define BST_H

#include <iostream>
#include "Aluno.hpp"
using namespace std;

using namespace std;

struct NodeT{
    Aluno aluno;
    NodeT* esq;
    NodeT* dir;

    //construtores
    //NodeT(int matricula,string nome);
    //NodeT();
};

struct BST{
    NodeT* root;

    //construtores
    //BST(NodeT* root);
    //BST(){}

    //contratos
    void insertNodeHelper(NodeT* root, Aluno aluno);
    void insertNode(Aluno aluno);

    void inserir_aluno(Aluno aluno);
    void imprimir_arvore();
    Aluno* procurar_aluno(int matricula);

    void removeNode(Aluno aluno);
    //void display();
};

#endif