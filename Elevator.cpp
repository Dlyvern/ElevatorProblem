#include"Elevator.h"

void Gotoxy(short int x, short int y);

void Elevator::DrawElevator(int floor)
{
	int i = _y - ((floor - 1) * 10);

	const int size = 7;

	std::string elevator[size] =
	{
		"___________",
		"|    |    |",
		"|    |    |",
		"| *  |  * |",
		"|    |    |",
		"|    |    |",
		"|____|____|",
	};

	for (int index = 0; index != size; ++i, index++)
	{
		Gotoxy(_x, i); std::cout << elevator[index];
	}
}
