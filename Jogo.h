#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>

#include "Ente.h"

using namespace sf;

//class Ente;

class Jogo {
	public:
		Jogo();
		~Jogo();

		//RectangleShape greenBox;
		//Ente* theBox;

		//Core game functions
		void update();
		void pollEvents();
		void render();

		const bool running() const;

		void executar();
	protected:

	private:
		RenderWindow* window;
		VideoMode videoMode;

		Event event;

		void initVariables();
		void initWindow();
		void initEnemies();
};