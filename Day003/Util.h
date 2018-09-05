#pragma once
/*
#pragma once 와 같은 의미

#ifndef __UTIL__
#define __UTIL__
void HelloWorld(int a);
#endif // !__UTIL__
*/

//데이터를 뭉쳐서 한번에 전달하기 위해 구조체 사용
//typedef을 통해 형으로 선언 가능
typedef struct tagPosition
{
	int x;
	int y;
	int z;
}Position;

//구조체를 이용하여 리턴하여 값 변경 가능
Position Calculate(Position newPos);
//하지만 구조체 내에 값이 너무 크다면 값의 복사 과정에서 메모리 비효율,
//때문에 포인터를 통해 전달을 할 수 있음
void Calculate(Position* newPos);


void HelloWorld(int a);

void DrawTriangle(int a);

void DrawReverseTriangle(int a);

void DrawLine(int a);

void ArrayTest();

void AllocTest();

//콜바이밸류를 이용한 콜바이레퍼런스 구현 C
void Swap(int* a, int* b);
//콜바이레퍼런스 구현 C++
void Swap(int& a, int& b);
//const 는 입력에서 사용되며 값을 변경할 수 없음(변경시 애러)
