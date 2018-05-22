#ifndef WORLD_H
#define WORLD_H

#include <iostream>
using namespace std;

struct world
{
	char m_world [20][20];
	world ();
	void setTile (int x, int y, char character);
};

#endif
