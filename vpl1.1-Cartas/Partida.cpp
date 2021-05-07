#include "Partida.hpp"
#include "Jogador.hpp"

    Partida::Partida(int num_jogadores){
		this->_num_jogadores = num_jogadores;
        this->_atualsize = 0;
		this->_jogadores = new Jogador[num_jogadores]; //ponteiros inicializados com new
	}

	Partida::~Partida(){
		delete this->_jogadores; //destroi o que tá no heap DESTRUIR NO FINAL
	}

	void Partida::addJogadorCarta(string nomeJogador, int numero_pontos_carta, string naipe){
		Carta carta = Carta(numero_pontos_carta, naipe);
		//jogador já inserido -> atualizar no array:
		for(int i = 0; i < this->_atualSize; i++){ //no atualSize pois é o que armazena o tamanho até entao
			if(this->_jogadores[i].getNomeJogador() == nomeJogador){
				this->_jogadores[i].adicionaCarta(carta);
				return;
			}
		}
		
		//Jogador novo -> criar ele no array como um objeto novo:
		Jogador jogador;
		jogador.setNomeJogador(nomeJogador);
		jogador.adicionaCarta(carta);
			//precisamos colocar o jogador no vetor:
		this->_jogadores[this->_atualSize] = jogador;
			//atualiza o tamanho
		this->_atualSize += 1;

	}
	
	int Partida::getNumJogadores(){
		return this->_num_jogadores;
	}
	int Partida::getNumAtualJogadores(){
		return this->_atualSize;
	}
	void Partida::setJogadores(Jogador  *jogadores){
		this->_jogadores = jogadores;
	}

	Jogador *Partida::getJogadores(){
		return this->_jogadores;
	}

	Jogador Partida::getCampeao(){
		Jogador *jogadores = this->getJogadoresOrdenados();
		return jogadores[this->_num_jogadores - 1];
	}
	Jogador *Partida:: getJogadoresOrdenados(){

		Jogador *jogadores = new Jogador[this->_num_jogadores];
		for(int i =0; i < this->_num_jogadores; i++){
			jogadores[i] = this->_jogadores[i];
		}
		for(int i = 0; i < this->_num_jogadores - 1; i++){
			for(int j = 0; j < this->_num_jogadores - i - 1; j++){
				if(jogadores[j].calcularPontuacao() > jogadores[j + 1].calcularPontuacao()){
					Jogador aux = jogadores[j];
					jogadores[j] = jogadores[j + 1];
					jogadores[j + 1] = aux;
				}
			}
		}
		return jogadores;
	}

	void Partida::imprimeJogadoresOrdenados(){
		Jogador *jogadores = this->getJogadoresOrdenados();
		for(int i = 0; i < this->_num_jogadores; i++){
			std::cout << jogadores[i].getNomeJogador() << " " << jogadores[i].calcularPontuacao() << std::endl;
		}

	}
