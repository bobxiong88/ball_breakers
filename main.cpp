//This project will only work with windows
//Current exit keys for the program is ESC and P

#include <stdio.h> //displaying
#include <conio.h> //detecting key presses
#include <unistd.h> //library for sleeping

#include "world.h" //include the world class
#include "brick.h" //include the brick class
#include "ball.h"  //include the ball class

//temporary since I dont really know how to use C output statements yet
#include <iostream>
using namespace std;
//

//Main function
int main()
{
	//The world object
	world World;
	
	char key;        //Stores keypresses
	int acsiiValue;  //Stores the ID of the keypresses
	
	//Loop that runs until broken out of
	while (true)
	{
		//I know this isn't the best way to do it, but its good enough for now
		//This function sleeps in microseconds
		//1000 microseconds = 1 millisecond
		//1000,000 microseconds = 1 second
		usleep(1000);
		
		//Clears the console screen
		system ("cls");
		
		//Display the world
		for (int x = 0; x<20;x++)
		{
			for (int y = 0; y<20; y++)
			{
				cout << World.m_world [x][y];
			}cout << endl;
		}
		//
		
		//Listening for keypresses
		key = getch();
		acsiiValue = key;
		//
		
		//The exit keys, remember to add the lowercase and uppercase if the key is a letter!
		if (acsiiValue == 27 || acsiiValue == 80 || acsiiValue == 112)
		{
			break;
		}
		//		
	}
}
