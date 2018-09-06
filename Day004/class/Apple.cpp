#include "Apple.h"
#include <iostream>

using namespace std;

namespace juno
{
	Apple::Apple()
	{
	}

	Apple::~Apple()
	{
	}

	void Apple::EatBy()
	{
		cout << "¸ÔÇû´Ù..";
	}
	void Apple::Calculate()
	{
		price = quality * weight;
	}
}