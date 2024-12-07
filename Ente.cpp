#include "Ente.h"

using namespace sf;

Ente::Ente(){
	this->id = 0;
	this->hitBox.setSize(Vector2f(100.f, 100.f));
	this->hitBox.setFillColor(Color::Transparent);
	this->hitBox.setOutlineColor(Color::White);
	this->hitBox.setOutlineThickness(1.f);
	this->hitBox.setPosition(Vector2f(400.f, 300.f));
}

Ente::~Ente(){
}

void Ente::desenhar(){
}

void Ente::executar(){
}
