#pragma once
#include <string>
#include <assert.h>
class Ingredient
{

protected:
	std::string name;
	float fat;
	float protein;
	float carbonhydrat;
	unsigned short kcal;

public:


	Ingredient() :name(""), fat(0.0f), protein(0.0f), carbonhydrat(0.0f), kcal(0)
	{}

	Ingredient(const std::string& name, const float& fat, const float& protein, const float& carbonhydrat, const short& kcal)
	{
		Set_name(name);
		Set_fat(fat);
		Set_protein(protein);
		Set_carbonhydrat(carbonhydrat);
		Set_kcal(kcal);
	}

	void Set_name(const std::string& name)
	{
		assert(!name.empty() && "Name is Empty!");
		this->name = name;
	}

	std::string Get_name() const
	{
		return name;
	}

	void Set_fat(const float& fat)
	{
		assert(fat >= 0.0f && "Fat must be more than or equal 0!");
		this->fat = fat;
	}

	float Get_fat() const
	{
		return fat;
	}

	void Set_protein(const float& protein)
	{
		assert(protein >= 0.0f && "Protein must be more than or equal 0!");
		this->protein = protein;
	}

	float Get_protein() const
	{
		return protein;
	}

	void Set_carbonhydrat(const float& carbonhydrat)
	{
		assert(carbonhydrat >= 0.0f && "Carbonhydrat must be more than or equal 0!");
		this->carbonhydrat = carbonhydrat;
	}

	float Get_carbonhydrat() const
	{
		return carbonhydrat;
	}

	void Set_kcal(const short& kcal)
	{
		assert(kcal >= 0 && "Kcal must be more than or equal 0!");
		this->kcal = kcal;
	}

	unsigned short Get_kcal() const
	{
		return kcal;
	}

	virtual void Show() const
	{
		std::cout << "Name: " << Get_name() << '\n';
		std::cout << "Fat: " <<  Get_fat() << " gr\n";
		std::cout << "Kcal: " << Get_kcal() << " kcal\n";
		std::cout << "Protein: "  << Get_protein() << " gr\n";
		std::cout << "Carbohydrat: " <<  Get_carbonhydrat() << " gr\n";	
	}

	virtual ~Ingredient() = 0
	{

	}
};