#include <stdio.h>
#include <iostream>

#include "Jogo.h"
#include "GerenciadorGrafico.h"
#include "GerenciadorColisoes.h"
#include "Ente.h"

using namespace sf;

//Main function
int main()
{
    //Initializing the game
    Jogo game;

    //Main game loop (yes this is a loop)
    game.executar();

    return 0;
}