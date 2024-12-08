#include "GerenciadorGrafico.h"

Gerenciador_Grafico::Gerenciador_Grafico(){
	this->pWindow = nullptr;
	this->enteAtual = nullptr;
}

Gerenciador_Grafico::~Gerenciador_Grafico(){
}

Gerenciador_Grafico::Gerenciador_Grafico(Jogo* newGame){
	this->pWindow = newGame->window;
	this->enteAtual = nullptr;
}

void Gerenciador_Grafico::desenharEnte(Ente* pE){
	enteAtual = pE;
	this->pWindow->draw(this->enteAtual->hitBox);
}