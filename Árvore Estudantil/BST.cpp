#include "BST.hpp"

using namespace std;

NodeT* createNode(Aluno aluno){
    NodeT* aux = new NodeT;
    aux->aluno = aluno;
    aux->esq = nullptr;
    aux->dir = nullptr;

    return aux;
}

void BST::insertNode(Aluno aluno){

    if(root!= nullptr){
        insertNodeHelper(root, aluno);
    }else{
        root = createNode(aluno);
    }
}

void BST::insertNodeHelper(NodeT* n, Aluno aluno){

    if(aluno.matricula < n->aluno.matricula){
          if( n->esq == nullptr){
            n->esq = createNode(aluno);
        } else{
            insertNodeHelper(n->esq, aluno);
        }
    } else if(aluno.matricula > n->aluno.matricula){
        if(n->dir == nullptr){
            n->dir = createNode(aluno);
        } else{
            insertNodeHelper(n->dir, aluno);
        }
    }
}

void BST::inserir_aluno(Aluno aluno) {
    if (root != nullptr) {
    insertNodeHelper(root, aluno);
    } else {
        root = createNode(aluno);
    }
}

void inorder(NodeT* n) {
    if(n == nullptr)
        return;

    inorder(n->esq);
    n->aluno.imprimir_dados();
    inorder(n->dir);
}

void BST::imprimir_arvore() {
    inorder(root);
    cout << endl;
}


Aluno* busca_aux(NodeT* noh, int mat){

    if (noh == NULL || noh->aluno.matricula == mat) return &noh->aluno;
    if (noh->aluno.matricula > mat) return busca_aux (noh->esq, mat);
    else return busca_aux (noh->dir, mat);
}

Aluno* BST::procurar_aluno(int matricula){
    return busca_aux(root, matricula);
}