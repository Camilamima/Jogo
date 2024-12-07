#pragma once

#include "Jogo.h"

using namespace sf;

class Ente {
	public:
		int id;
		RectangleShape hitBox;

		Ente();
		~Ente();
		void executar();
		void desenhar();
	protected:

	private:
};
