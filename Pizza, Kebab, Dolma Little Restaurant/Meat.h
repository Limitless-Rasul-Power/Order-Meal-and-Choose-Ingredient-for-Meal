#pragma once
#include "Ingredient.h"
class Meat : public Ingredient
{

protected:
	std::string country;

public:

	Meat() :country("")
	{}

	Meat(const std::string& name, const float& fat, const float& protein, const float& carbonhydrat, const short& kcal, const std::string& country)
		:Ingredient(name, fat, protein, carbonhydrat, kcal)
	{
		Set_country(country);
	}

	void Set_country(const std::string& country)
	{
		assert(!country.empty() && "Country is Empty!");
		this->country = country;
	}

	std::string Get_country() const
	{
		return country;
	}

	void Show() const
	{
		Ingredient::Show();
		std::cout << "Meat Country: " << Get_country() << '\n';
	}

};