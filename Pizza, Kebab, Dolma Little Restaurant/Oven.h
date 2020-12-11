#pragma once
#include "Cooking_Device.h"
#include "Pizza.h"

class Oven : public CookingDevice
{
public:
	Oven() = delete;

	Oven(Pizza* const pizza)
		:CookingDevice(pizza)
	{}

	void Taste() const override
	{
		CookingDevice::Preparing_time();
		std::cout << "I taste Hot Pizza, uuuuu!\n\n";
	}
};