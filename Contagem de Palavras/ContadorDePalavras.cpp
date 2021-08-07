#include "ContadorDePalavras.hpp"
#include <iostream>
#include <algorithm> 
#include <list>

using namespace std;
using std::list;

ContadorDePalavras::ContadorDePalavras(){
	std::list<Palavra> _lista_de_palavra; //cria lista VAZIA
}

void ContadorDePalavras::Adicionar(string s){ 
	Palavra palavra_atual = Palavra(s);
	
	list<Palavra>::iterator iter;
	for(iter =_lista_de_palavras.begin(); iter != _lista_de_palavras.end(); ++iter){
		string p1 = iter->palavra(); 
		if(p1 != s){
			_lista_de_palavras.push_back(palavra_atual);
		}else{
			palavra_atual.Incrementar();
		}
	}
}

void ContadorDePalavras::ImprimirOrdenado(){
	list<Palavra>::iterator iter;

	if(!_lista_de_palavras.empty()){
		_lista_de_palavras.sort();
		for(iter = _lista_de_palavras.begin(); iter != _lista_de_palavras.end(); ++iter){
			string p1 = iter->palavra();
			int o1 = iter->ocorrencias();
			cout << p1 << o1 << endl;
		}
	}	
}


/*auto iter = find_if(std::begin(_lista_de_palavras), std::end(_lista_de_palavras), Palavra(s));
	string p1 = iter->palavra;
	if(p1 == s){
		//item nao encontrado na lista
		_lista_de_palavras.push_back(palavra_atual);
	} else{
		palavra_atual.Incrementar();
	}*/