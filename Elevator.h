#pragma once
#include<string>
#include<iostream>

class Elevator
{
private:
	int _currentFloor;
	int _x;
	int _y;
public:

	Elevator(int x, int y) : _currentFloor(1), _x(x), _y(y) {}

	void DrawElevator(int floor);
};
