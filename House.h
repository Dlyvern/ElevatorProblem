#include"Elevator.h"
#include<string>
#include<iostream>

class House
{
private:
	Elevator* _elevator = nullptr;

	void DrawHouse();

public:

	House()
	{
		DrawHouse();
	}
};
