#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	//int a = 3;
	//int b = 2;

	//printf("%d, %d\n", a, b);

	////cpu는 함수별로 메모리 영역을 사용하기 때문에
	////변경시 주소값을 건내주어 바꿈
	//Swap(&a, &b);

	//printf("%d, %d\n", a, b);

	//Swap(a, b);

	//printf("%d, %d\n", a, b);

	//Position pos;
	//pos.x = 1;
	//pos.y = 2;
	//pos.z = 3;
	//printf("(%d, %d, %d)\n", pos.x, pos.y, pos.z);
	//pos = Calculate(pos);
	//printf("(%d, %d, %d)\n", pos.x, pos.y, pos.z);
	//Calculate(&pos);
	//printf("(%d, %d, %d)\n", pos.x, pos.y, pos.z);
	

	//문자열
	char a[] = "Hello World";
	char b[1024];
	char c[] = "안녕하세요.";
	//포인터 형식은 비추천, 변경 불가
	const char *p = "졸려";
	//길이
	strlen(a);
	//복사
	strcpy(b, a);
	//뒤에 붙이기
	strcat(b, c);
	//비교 (a < b -> -1, a > b -> 1, a = b -> 0)
	strcmp(a, b);
	printf("%s\n", a);
	//문자열 변수에 문자 넣는 법
	sprintf(b, "%s, %d\n", "배고파", 10);
	printf("%s", b);

	//파일입출력
	//파일포인터 선언
	FILE* fp;
	FILE* fpout;
	int total = 0;
	//문자열 받을 버퍼
	char Buffer[1024];
	//파일열기 "r"은 읽기모드 "w"는 쓰기 모드
	fp = fopen("c:\\Data\\data.txt", "r");
	fpout = fopen("c:/Data/output.txt", "w");
	//한문장 읽는 함수
	fgets(Buffer, 80, fp);
	//while 반복문을 통해 해당 파일의 끝까지 읽음
	while (strlen(Buffer) > 0)
	{
		//printf("%s", Buffer);
		//Buffer[0] = 0;
		//메모리 세팅, memcpy는 메모리 복사
		int temp = atoi(Buffer);
		total += temp;

		memset(Buffer, 0, sizeof(char)*10);
		fgets(Buffer, 80, fp);
	}


	fprintf(fpout, "%d\n", total);
	
	fclose(fp);
	fclose(fpout);
	
	return 0;
}
