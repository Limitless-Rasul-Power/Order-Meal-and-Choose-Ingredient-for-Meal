#pragma once
#include "Dish.h"
#include <windows.h>

class CookingDevice : public Dish
{

private:
	Dish* dish;
	unsigned short second;

public:

	CookingDevice(Dish* const& meal)
	{
		Set_dish(meal);
		Set_second();
	}

	void Set_second()
	{
		this->second = rand() % 30 + 5;
	}

	unsigned short Get_second() const
	{
		return second;
	}

	void Set_dish(Dish* const& dish)
	{
		assert(dish && "Dish is nullptr!");
		this->dish = dish;
	}

	Dish* Get_dish() const
	{
		return dish;
	}

	void Preparing_time() const
	{
		COORD cord{ 47, 10 };
		for (unsigned short i = 0; i < Get_second(); i++)
		{
			system("CLS");
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), {cord.X - 5, cord.Y});
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);

			std::cout << dish->Get_name() << " is getting ready in " << Get_second() << " seconds!";

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { cord.X + 5, cord.Y + 1});
			std::cout << Get_second() - i << " seconds left";

			Sleep(500);
		}
		system("CLS");
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cord);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	}

	virtual void Taste() const
	{
		std::cout << "I do not have clue, what is this ?!\n\n";
	}

	virtual ~CookingDevice() = 0
	{
		delete dish;
	}
};