#pragma once
#include <string>
using namespace std;

class Ship
{
private:
	char orientation;
	int x;
    int y;
public:
	Ship(char o, int xx, int yy);
	void move(char direction, int value);
	void rotate(char direction, int value);
	void navigate(string path);
	void info();
};

