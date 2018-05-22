#ifndef WORLD_H
#define WORLD_H

struct world
{
	char m_world [20][20];
	world ();
	void setTile (int x, int y, char character);
};

#endif
