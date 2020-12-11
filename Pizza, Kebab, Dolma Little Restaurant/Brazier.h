#pragma once
#include "Cooking_Device.h"
#include "Kebab.h"
class Brazier : public CookingDevice
{
public:

	Brazier() = delete;

	Brazier(Kebab* const& kebab)
		:CookingDevice(kebab)
	{}

	void Taste() const override
	{
		CookingDevice::Preparing_time();
		std::cout << "I taste Kebab, but i don't want this i am Vegan!\n\n";
	}
};