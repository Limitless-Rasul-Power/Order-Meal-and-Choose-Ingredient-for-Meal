#pragma once
#include "Dish.h"
class Kebab :public Dish
{

protected:
	bool is_spicy;

public:

	Kebab() :is_spicy(false)
	{}

	Kebab(RecipeItem** const& items, const short& count, const std::string& name, const bool& is_spicy)
		:Dish(items, count, name)
	{
		Set_type(is_spicy);
	}

	void Set_type(const bool& is_spicy)
	{
		this->is_spicy = is_spicy;
	}

	bool Get_type() const
	{
		return is_spicy;
	}

	void Show() const override
	{
		Dish::Show();
		std::cout << "Kebab is ";
		if (is_spicy)
			std::cout << "spicy!\n\n";
		else
			std::cout << " not spicy!\n\n";
	}
};