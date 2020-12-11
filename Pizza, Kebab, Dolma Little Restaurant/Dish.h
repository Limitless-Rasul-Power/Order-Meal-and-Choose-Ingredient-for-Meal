#pragma once
#include <iostream>
#include "Recipe_Item.h"
class Dish
{

protected:
	RecipeItem** items;
	unsigned short count;
	std::string name;

public:

	Dish() :items(nullptr), count(0), name("")
	{}

	Dish(RecipeItem** const& items, const short& count, const std::string& name)
	{
		Set_count(count);
		Set_items(items);
		Set_name(name);
	}

	void Set_items(RecipeItem** const& items)
	{
		assert(items && "Items is nullptr!");
		this->items = items;
	}

	RecipeItem** Get_items() const
	{
		return items;
	}

	void Set_count(const short& count)
	{
		assert(count > 0 && "Count must be more than 0!");
		this->count = count;
	}

	unsigned short Get_count() const
	{
		return count;
	}

	void Set_name(const std::string& name)
	{
		assert(!name.empty() && "Name is Empty!");
		this->name = name;
	}

	std::string  Get_name() const
	{
		return name;
	}


	void Calculate_all_dish_value() const
	{
		float max_protein = 0.0f;
		float max_fat = 0.0f;
		float max_carbohydrat = 0.0f;
		unsigned short max_kcal = 0;
		unsigned short max_amount = 0;

		for (unsigned short i = 0; i < Get_count(); i++)
		{
			max_protein += this->items[i]->Get_ingredient()->Get_protein();
			max_fat += this->items[i]->Get_ingredient()->Get_fat();
			max_carbohydrat += this->items[i]->Get_ingredient()->Get_carbonhydrat();
			max_kcal += this->items[i]->Get_ingredient()->Get_kcal();
			max_amount += this->items[i]->Get_amount();
		}

		std::cout << "All Dish Protein: " << max_protein << " gr\n";
		std::cout << "All Dish Fat: " << max_fat << " gr\n";
		std::cout << "All Dish Carbohydrat: " << max_carbohydrat << " gr\n";
		std::cout << "All Dish Kcal: " << max_kcal << " kcal\n";
		std::cout << "All Ingredient Amount: " << max_amount << " gr\n\n";
	}

	virtual void Show() const
	{		
		for (unsigned short i = 0; i < Get_count(); i++)
		{
			std::cout << "#" << i + 1 << ", Ingredient Information\n\n";
			this->items[i]->Get_ingredient()->Show();
			std::cout << "Amount of ingredient: " << this->items[i]->Get_amount() << " gr\n\n";
		}
		Calculate_all_dish_value();
		std::cout << "\n\nDish Name: " << Get_name() << "\n\n";
	}

	virtual ~Dish() = 0
	{
		for (unsigned short i = 0; i < Get_count(); i++)
			delete items[i];

		delete[] items;
	}

};