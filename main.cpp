#include <iostream>
#include <SDL.h>
#include "SDL_image.h"
#include "Game.h"

#define SDL_MAIN_HANDLED

int main(int argc, char* argv[]) {
	// Create the game object
	Game* game = new Game();

	// Initialize and run the game
	if (game->Init()) {
		game->Run();
	}

	// Clean up
	delete game;
	return 0;
}