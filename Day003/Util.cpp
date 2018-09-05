#include <stdio.h>
#include "Util.h"

void HelloWorld(int a)
{
	printf("Hello World\n");
}

void DrawTriangle(int a)
{
	for (size_t i = 0; i < 3; i++)
	{
		DrawLine(i+1);
	}
}

void DrawLine(int a)
{
	for (size_t i = 0; i < a; i++)
	{
		printf("*");
	}
	printf("\n");
}
