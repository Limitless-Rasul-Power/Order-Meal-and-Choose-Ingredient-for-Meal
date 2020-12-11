#pragma once
#include "Ingredient.h"
class Spice : public Ingredient
{
protected:
	std::string category;

public:

	Spice() :category("")
	{}

	Spice(const std::string& name, const float& fat, const float& protein, const float& carbonhydrat, const short& kcal,
		const std::string& category)
		:Ingredient(name, fat, protein, carbonhydrat, kcal)
	{
		Set_category(category);
	}

	void  Set_category(const std::string& category)
	{
		assert(!category.empty() && "Category is Empty!");
		this->category = category;
	}

	std::string Get_category() const
	{
		return category;
	}

	void Show() const override
	{
		Ingredient::Show();
		std::cout << "Spice category: " << Get_category() << '\n';
	}
};