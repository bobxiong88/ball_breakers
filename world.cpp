#include "world.h"

//Contructor that sets all the values of world to blanks by default
world::world() {	
	for (int x = 0; x < 20; x++){
		for (int y = 0; y < 20; y++){
			m_world [x][y] = ' ';
		}
	}
}

//Sets a single tile in the world to a certain character
//Usage: OBJECT.setTile (x, y, character);
void world::setTile (int x, int y, char character) {
	m_world [x][y] = character;
}
