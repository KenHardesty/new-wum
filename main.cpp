#include <iostream>
#include <cstdlib>
#include <ctime>
#include "game.h"

using namespace std;


int main()
{
	//set the random seed
	srand(time(NULL));
	
	//side length: hardcoded value for now
	int side_len = 5;
	bool debug = false;
	
	Game g;

	//get one input: side length of the cave
	


	//get the 2nd input --> debug mode or not


	//Play game
	g.play_game(side_len, debug);


	return 0;
}