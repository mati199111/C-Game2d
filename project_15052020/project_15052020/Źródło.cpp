#include <iostream>
#include "Game.h"
//using namespace sf;
int main()
{
	//init srand
	std::srand(static_cast<unsigned> (time(NULL)));

	//init game engine
	Game game;
	
	//gra loop

	while (game.running() && !game.getEndGame())
	{
		//update
		game.update();
		//render
		game.render();
		
	}
	return 0;
}


/* program
- obsluga myszy
- zbieranie punktow 
- zabieranie zycia
- ogranicznenie zycia (if < 0) {stop}
- wyswietlanie tekstu
*/