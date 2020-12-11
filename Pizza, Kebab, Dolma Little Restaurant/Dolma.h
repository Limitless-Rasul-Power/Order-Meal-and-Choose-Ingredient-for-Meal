#pragma once
#include "Dish.h"
class Dolma :public Dish
{

protected:
	std::string leaf_type;

public:

	Dolma(RecipeItem** const& items, const short& count, const std::string& name, const std::string& leaf_type)
		:Dish(items, count, name)
	{
		Set_leaf_type(leaf_type);
	}

	void Set_leaf_type(const std::string& leaf_type)
	{
		assert(!leaf_type.empty() && "Leaf Type is Empty!");
		this->leaf_type = leaf_type;
	}

	std::string Get_leaf_type() const
	{
		return leaf_type;
	}

	void Show() const override
	{
		Dish::Show();
		std::cout << "Dolma Leaf: " << Get_leaf_type() << '\n';
	}
};