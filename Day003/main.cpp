#include <stdio.h>
#include<stdlib.h>
#include "Util.h"


//컴파일 순서
//메인은 제일 마지막에 컴파일함. 이전에 헤더로 추가한 파일을 obj파일로 생성하여 보유함


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
	//DrawTriangle(3);
	/*DrawReverseTriangle(3);
	ArrayTest();
	AllocTest();*/

	//변수 범위 설정
	//선언된 중괄호 안에서만 유지됨
	//제일 밖에 선언하면 글로벌 변수(비추천)
	int a = 3;
	int b = 2;

	printf("%d, %d\n", a, b);

	//cpu는 함수별로 메모리 영역을 사용하기 때문에
	//변경시 주소값을 건내주어 바꿈
	Swap(&a, &b);

	printf("%d, %d\n", a, b);

	Swap(a, b);

	printf("%d, %d\n", a, b);

	Position pos;
	pos.x = 1;
	pos.y = 2;
	pos.z = 3;
	printf("(%d, %d, %d)\n", pos.x, pos.y, pos.z);
	pos = Calculate(pos);
	printf("(%d, %d, %d)\n", pos.x, pos.y, pos.z);
	Calculate(&pos);
	printf("(%d, %d, %d)\n", pos.x, pos.y, pos.z);
	
	return 0;
}
