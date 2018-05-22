#ifndef BRICK_H
#define BRICK_H
#include <vector>
using namespace std;



struct coords
{
	int x = 0;
	int y = 0;
};

struct brick
{
	vector<coords> brickCoords;
};


#endif

