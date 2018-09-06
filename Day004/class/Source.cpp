#include <iostream>
#include <string>
#include "Apple.h"

using namespace juno;

int main()
{	
	//c malloc
	//c++ new
	int size = 10;
	Apple* a = new Apple[size];
	//a.EatBy();

	for (size_t i = 0; i < size; i++)
	{
		a[i].weight = rand() % 10;
		a[i].quality = 1;
		a[i].Calculate();
		std::cout << a[i].GetPrice() << std::endl;
	}

	//c free
	//c++ delete (¹è¿­ : delete[])
	delete[] a;
	Apple* b = new Apple();
	delete b;
	//std::cout << a;
	//printf("Hello World");
}