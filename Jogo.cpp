#include "Jogo.h"

using namespace sf;

//Constructor and Destructor ==================================================================================================
Jogo::Jogo(){
	this->initVariables();
	this->initWindow();
	this->initEnemies();
}

Jogo::~Jogo(){
	delete this->window;
}

//Main functions of the game ==================================================================================================

//Update function
void Jogo::update(){
	this->pollEvents();
}

//Event check
void Jogo::pollEvents(){
	while (this->window->pollEvent(this->event)){
		if (this->event.type == Event::Closed){
			this->window->close();
		}
		else if (this->event.type == Event::KeyPressed){
			if (this->event.key.code == Keyboard::Space){
				this->window->close();
			}
		}
	}
}

//Variables initialization
void Jogo::initVariables(){
	this->window = nullptr;
}

//Window initialization
void Jogo::initWindow(){
	this->videoMode.width = 800;
	this->videoMode.height = 600;

	this->window = new RenderWindow(this->videoMode, "Die Tonight");
}

void Jogo::initEnemies(){
	//this->theBox = new Ente;
}

//Render drawables
void Jogo::render() {

	//clear old frame
	this->window->clear();

	//draw game objects (here we should call the graphics manager?)
	//this->window->draw(this->theBox->hitBox);

	//display the new frame with all drawables
	this->window->display();
}


//Utility =====================================================================================================================
const bool Jogo::running() const{
	return this->window->isOpen();
}

//Used to hide update and render from the main.cpp
void Jogo::executar(){
	while (this->running()){
		this->update();
		this->render();
	}
}