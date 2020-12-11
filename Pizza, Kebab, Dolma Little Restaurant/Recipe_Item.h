#pragma once
#include "Ingredient.h"
struct RecipeItem
{
protected:
	Ingredient* ingredient;
	unsigned short amount;

public:
	RecipeItem() = delete;

	RecipeItem(Ingredient* const& ingredient, const short& amount)
	{
		Set_ingredient(ingredient);
		Set_amount(amount);
	}

	void Set_ingredient(Ingredient* const& ingredient)
	{
		assert(ingredient && "Ingredient is nullptr!");
		this->ingredient = ingredient;
	}

	Ingredient* Get_ingredient() const
	{
		return ingredient;
	}

	void Set_amount(const short& amount)
	{
		assert(amount > 0 && "Amount must be more than 0!");
		this->amount = amount;
	}

	unsigned short Get_amount() const
	{
		return amount;
	}

	~RecipeItem()
	{
		std::cout << "\nDeleted Ingredient Name: " << Get_ingredient()->Get_name() << '\n';
		delete ingredient;
	}
};