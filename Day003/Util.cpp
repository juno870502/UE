#include <stdio.h>
#include <stdlib.h>
#include "Util.h"

Position Calculate(Position newPos)
{
	newPos.x += 1;
	newPos.y += 2;
	newPos.z += 3;

	return newPos;
}

void Calculate(Position * newPos)
{
	newPos->x += 1;
	(*newPos).y += 2;
	newPos->z += 3;
}

void HelloWorld(int a)
{
	printf("Hello World\n");
}

void DrawTriangle(int a)
{
	for (size_t i = 0; i < a; i++)
	{
		DrawLine(i+1);
	}
}

void DrawReverseTriangle(int a)
{
	for (size_t i = a; i > 0; i--)
	{
		DrawLine(i);
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

void ArrayTest()
{
	int test[100] = {0};

	for (size_t i = 0; i < 100; i++)
	{
		test[i] = i;
	}
	for (size_t i = 0; i < 100; i++)
	{
		printf("%d ", *(test + i));
	}
}

void AllocTest()
{
	int* test = (int*)malloc(sizeof(int) * 100);
	for (size_t i = 0; i < 100; i++)
	{
		test[i] = i;
	}
	for (size_t i = 0; i < 100; i++)
	{
		printf("%d ", *(test + i));
	}
	free(test);
}

void Swap(int* a, int* b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}

void Swap(int & a, int & b)
{
	int temp = 0;

	temp = a;
	a = b;
	b = temp;
}
