#include <stdio.h>
#include<stdlib.h>
#include "Util.h"



int main()
{
	//어제자 복습
	/*printf("hello world\n");

	int num1;

	scanf("%d", &num1);

	for (size_t i = 0; i < num1; i++)
	{
		for (size_t j = 0; j < num1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("--------------------------\n");

	int num2;
	scanf("%d", &num2);

	for (size_t i = 0; i < num2; i++)
	{
		for (size_t j = i; j < num2; j++)
		{
			printf(" ");
		}
		for (size_t j = 0; j < i*2 +1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("--------------------------\n");

	int num3;
	scanf("%d", &num3);

	for (size_t i = 0; i < num3; i++)
	{
		for (size_t j = i; j < num3; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("--------------------------\n");

	int num4;
	scanf("%d", &num4);
	int* arr = (int*)malloc(sizeof(int)*num4);
	for (size_t i = 0; i < num4; i++)
	{
		arr[i] = i+1;
		printf("%d\n", *(arr + i));
	}
	free(arr);*/

	//HelloWorld(10);
	DrawTriangle(3);
	return 0;
}

//컴파일 순서
//메인은 제일 마지막에 컴파일함. 이전에 헤더로 추가한 파일을 obj파일로 생성하여 보유함

