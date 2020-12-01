#include "TV.h"
#include <iostream>

void TV::power()
{
	if (state)
		state = false;
	else
		state = true;
}

void TV::nextChannel()
{
	if (state == true && currChannel < maxChannel)
		currChannel++;
	else
		std::cout << "error" << std::endl;
}

void TV::prevChannel()
{
	if (state == true && currChannel > 1)
		currChannel--;
	else
		std::cout << "error" << std::endl;
}

void TV::incVolume()
{
	if (state == true && volume < maxVolume)
		volume++;
	else if (!state)
		std::cout << "TV is off!" << std::endl;
	else if (volume == maxVolume)
		std::cout << "Max volume" << std::endl;
}

void TV::decVolume()
{
	if (state == true && volume > 1)
		volume--;
	else if (!state)
		std::cout << "TV is off!" << std::endl;
	else if (volume == 1)
		std::cout << "Min volume!" << std::endl;
}

void TV::print() const
{
	if (!state)
	{
		std::cout << "Channel: " << maxChannel << std::endl;
		std::cout << "Max volume: " << maxVolume << std::endl;
		std::cout << "TV is off!" << std::endl;
	}
	else
	{
		std::cout << "Current channel: " << currChannel << std::endl;
		std::cout << "Volume: " << volume << std::endl;
		std::cout << "TV worked!" << std::endl;
	}
}