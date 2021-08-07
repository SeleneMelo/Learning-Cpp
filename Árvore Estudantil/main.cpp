// NÃO ALTERE ESSA LINHA
#include "avaliacao_basica_bst.hpp"
#include <string>
#include <iostream>


int main() {
  
    // NÃO ALTERE ESSA LINHA
    avaliacao_basica();

    // Adicione seu código aqui e faça as demais alterações necessárias
    int x;
    string y;
    BST bst;

    //cout << "entre com os dados:" << endl;
    while(cin >> x >> y){
        bst.inserir_aluno(Aluno(x,y));
    }
    
    // Ao final faça uma chamada para o método 'imprimir_arvore()'
    bst.imprimir_arvore();
    //

    return 0;
}