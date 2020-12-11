#pragma once
#include "Cooking_Device.h"
#include "Dolma.h"
class Pot : public CookingDevice
{
public:

	Pot() = delete;

	Pot(Dolma* const& dolma)
		:CookingDevice(dolma)
	{}

	void Taste() const override
	{
		CookingDevice::Preparing_time();
		std::cout << "I taste leaf hmm and meat WOOOOW this is Dolma, Azerbaijan one of the best food!!!\n\n";
	}
};