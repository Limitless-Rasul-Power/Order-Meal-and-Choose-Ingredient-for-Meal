#pragma once
#include "Dish.h"
class Pizza :public Dish
{

protected:
	std::string pizza_type;

public:

	Pizza() :pizza_type("")
	{}

	Pizza(RecipeItem** const& items, const short& count, const std::string& name, const std::string& pizza_type)
		:Dish(items, count, name)
	{
		Set_pizza_type(pizza_type);
	}

	void Show() const override
	{
		Dish::Show();
		std::cout << "Pizza Type: " << Get_pizza_type() << '\n';
	}

	void Set_pizza_type(const std::string& pizza_type)
	{
		assert(!pizza_type.empty() && "Pizza type is Empty!");
		this->pizza_type = pizza_type;
	}

	std::string Get_pizza_type() const
	{
		return pizza_type;
	}

};
