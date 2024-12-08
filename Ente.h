#pragma once

#include "Jogo.h"

using namespace sf;

class Gerenciador_Grafico;

class Ente {
	public:
		int id;
		RectangleShape hitBox;

		//need a pointer to the graphics manager
		Gerenciador_Grafico* pGerGra; // static variable

		Ente();
		~Ente(); // virtual
		//study static variables, this should be declared once!
		void setGerGra(Gerenciador_Grafico* newGerGra);
		void desenhar();
		//void apagar();
		void executar(); // virtual
		
	protected:

	private:
};
