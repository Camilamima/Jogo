#pragma once

#include "Jogo.h"

using namespace sf;

//Classes dependentes
class Ente;
class Jogo;

class Gerenciador_Grafico {
	public:
		Gerenciador_Grafico();
		~Gerenciador_Grafico();

		Gerenciador_Grafico(Jogo* newGame);

		RenderWindow* pWindow;
		Ente* enteAtual;

		void desenharEnte(Ente* pE);
	protected:

	private:
};