#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>

#include "Ente.h"
#include "GerenciadorGrafico.h"

using namespace sf;

class Ente;
class Gerenciador_Grafico;

class Jogo {
	public:
		Jogo();
		~Jogo();

		VideoMode videoMode;
		RenderWindow* window;

		//RectangleShape greenBox;
		Ente* theBox;

		//Core game functions
		void update();
		void pollEvents();
		void render();

		const bool running() const;

		void executar();
	protected:

	private:
		Gerenciador_Grafico* gerGra;

		Event event;

		void initWindow();
		void initManagers();
		void initVariables();
		void initEnemies();
};