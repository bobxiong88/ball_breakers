#include "world.h"
//Contructor that sets of values of world to blanks

world::world()
{	
	for (int x = 0; x < 20; x++)
	{
		for (int y = 0; y < 20; y++)
		{
			m_world [x][y] = 'a';
		}
	}
}

//Sets a single tile in the world to a certain character
//Usage: OBJECT.setTile (x, y, character);
void world::setTile (int x, int y, char character)
{
	m_world [x][y] = character;
}
