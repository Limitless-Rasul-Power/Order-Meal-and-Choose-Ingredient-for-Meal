#pragma once
#include "Ingredient.h"
class Tomatoe : public Ingredient
{
protected:
	std::string vitamins;

public:

	Tomatoe() :vitamins("")
	{}

	Tomatoe(const std::string& name, const float& fat, const float& protein, const float& carbonhydrat, const short& kcal,
		const std::string& vitamins)
		:Ingredient(name, fat, protein, carbonhydrat, kcal)
	{
		Set_vitamins(vitamins);
	}

	void Set_vitamins(const std::string& vitamins)
	{
		assert(!vitamins.empty() && "Vitamin(s) is(are) Empty!");
		this->vitamins = vitamins;
	}

	std::string Get_vitamins() const
	{
		return vitamins;
	}

	void Show() const override
	{
		Ingredient::Show();
		std::cout << "Tomatoe has " << Get_vitamins() << '\n';
	}

};
