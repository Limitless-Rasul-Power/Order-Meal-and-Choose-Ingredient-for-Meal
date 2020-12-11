#pragma once
#include <iostream>
#include "Ingredient.h"
class Mushroom : public Ingredient
{

private:
	std::string smell;

public:
	
	Mushroom(const std::string& name, const float& fat, const float& protein, const float& carbonhydrat, const short& kcal,
		const std::string& smell)
		:Ingredient(name, fat, protein, carbonhydrat, kcal)
	{
		Set_smell(smell);
	}

	void Set_smell(const std::string& smell)
	{
		assert(!smell.empty() && "Smell is Empty!");
		this->smell = smell;
	}

	std::string Get_smell() const
	{
		return smell;
	}

	void Show() const override
	{
		Ingredient::Show();
		std::cout << "Mushroom smells " << Get_smell() << '\n';
	}

};