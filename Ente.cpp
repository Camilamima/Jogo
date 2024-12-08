#include "Ente.h"

using namespace sf;

Ente::Ente(){
	this->id = 0;
	
	//study about static variables, change this later to be declared only once!
	this->pGerGra = nullptr;

	//This is the default hitbox for any uninitialized enty, should make another contructor with:
	//Ente(Float width, Float height, Float x, Float y)
	this->hitBox.setSize(Vector2f(100.f, 100.f));
	this->hitBox.setFillColor(Color::Transparent);
	this->hitBox.setOutlineColor(Color::White);
	this->hitBox.setOutlineThickness(1.f);
	this->hitBox.setPosition(Vector2f(400.f, 300.f));
}

Ente::~Ente(){
}

/*
Ente::Ente(Float width, Float height, Float x, Float y){
	this->id = 0;
	this->hitBox.setSize(Vector2f(width, height));
	this->hitBox.setFillColor(Color::Transparent);
	this->hitBox.setOutlineColor(Color::White);
	this->hitBox.setOutlineThickness(1.f);
	this->hitBox.setPosition(Vector2f(x, y));
}
*/

//study static variables, this should be declared once!
void Ente::setGerGra(Gerenciador_Grafico* newGerGra){
	pGerGra = newGerGra;
}

void Ente::desenhar(){
	//put self address in the draw list
	/*
	insert(this, pGerGra->list<drawables>);
	*/
}

/*
void Ente::apagar(){
	remove(this, pGerGra->list<drawables>);
}
*/

void Ente::executar(){
}
