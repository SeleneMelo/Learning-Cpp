#include "fila_de_prioridade.h"
#include <string>

using namespace std;
using std::string;

No::No(string _dado, int _prioridade, No* _proximo){
	this->dado = _dado;
	this->prioridade = _prioridade;
	this->proximo = _proximo;
}

No::No(){
	this->dado = " ";
	this->prioridade = 0;
	this->proximo = nullptr;
}

FilaDePrioridade::FilaDePrioridade(){
	this->primeiro_ = nullptr;
	this->tamanho_ = 0;
}

string FilaDePrioridade::primeiro() const{
	if(this->primeiro_ != nullptr){
		return primeiro_->dado;
	} else {
		return 0;
	}
}

int FilaDePrioridade::tamanho() const {
	return this->tamanho_;
}

bool FilaDePrioridade::vazia() const {
	if(this->primeiro_ == nullptr){
		return true;
	} else{
		return false;
	}
}

void FilaDePrioridade::RemoverPrimeiro(){
	//precondicao: a fila n pode estar vazia
	string aux = this->primeiro_->dado;
	if(this->primeiro_ != nullptr){
		No* second = this->primeiro_->proximo;
		delete this->primeiro_;
		this->primeiro_ = second;
	}
	this->tamanho_--;
}

void FilaDePrioridade::Inserir(int _p, string _s){
	//se a fila estiver vazia, cria o primeiro nó = cabeca
	this->tamanho_++; //tamanho = 1
	if(this->primeiro_ == nullptr){
		this->primeiro_ = new No(_s, _p, nullptr);
		return;
	}
	//checa as prioridades
	if(_p > this->primeiro_->prioridade){
		No *head = new No(_s, _p, this->primeiro_);
		this->primeiro_ = head; //fila = head, this->primeiro
		return;
	}

	No* atual = this->primeiro_; //atualiza a cabeca, antes de percorrer o loop
	for(int i = 0; i < this->tamanho_; ++i){
		if(_p <= atual->prioridade && (atual->proximo==nullptr || _p > atual->proximo->prioridade)){
			atual->proximo = new No(_s, _p, atual->proximo);
			return;
		}
		atual = atual->proximo;
	}
}

void FilaDePrioridade::Limpar(){
	No* atual = this->primeiro_;
	if(atual != nullptr){
		for(int i=0; i < this->tamanho_; ++i){
			delete this->primeiro_;
			this->primeiro_ = atual->proximo;
			this->tamanho_--;
		}	
	}
}



