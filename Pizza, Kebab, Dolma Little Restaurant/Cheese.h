#pragma once
#include "Ingredient.h"
class Cheese : public Ingredient
{

protected:
	std::string color;

public:

	Cheese() :color("")
	{}

	Cheese(const std::string& name, const float& fat, const float& protein, const float& carbonhydrat, const short& kcal,
		const std::string& color)
		:Ingredient(name, fat, protein, carbonhydrat, kcal)
	{
		Set_color(color);
	}

	void  Set_color(const std::string& color)
	{
		assert(!color.empty() && "Color is Empty!");
		this->color = color;
	}

	std::string Get_color() const
	{
		return color;
	}

	void Show() const override
	{
		Ingredient::Show();
		std::cout << "Cheese color " << Get_color() << '\n';
	}
};