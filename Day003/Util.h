#pragma once
/*
#pragma once �� ���� �ǹ�

#ifndef __UTIL__
#define __UTIL__
void HelloWorld(int a);
#endif // !__UTIL__
*/

//�����͸� ���ļ� �ѹ��� �����ϱ� ���� ����ü ���
//typedef�� ���� ������ ���� ����
typedef struct tagPosition
{
	int x;
	int y;
	int z;
}Position;

//����ü�� �̿��Ͽ� �����Ͽ� �� ���� ����
Position Calculate(Position newPos);
//������ ����ü ���� ���� �ʹ� ũ�ٸ� ���� ���� �������� �޸� ��ȿ��,
//������ �����͸� ���� ������ �� �� ����
void Calculate(Position* newPos);


void HelloWorld(int a);

void DrawTriangle(int a);

void DrawReverseTriangle(int a);

void DrawLine(int a);

void ArrayTest();

void AllocTest();

//�ݹ��̹���� �̿��� �ݹ��̷��۷��� ���� C
void Swap(int* a, int* b);
//�ݹ��̷��۷��� ���� C++
void Swap(int& a, int& b);
//const �� �Է¿��� ���Ǹ� ���� ������ �� ����(����� �ַ�)
