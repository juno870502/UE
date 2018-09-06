#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define MAXSIZEX 10
#define MAXSIZEY 10

#define	UP 0x48
#define	DOWN 0x50
#define	LEFT 0x4B
#define	RIGHT 0x4D

typedef struct tagVector2D
{
	int X;
	int Y;
}FVector2D;

FVector2D PlayerPosition;

bool bIsRunning = true;
int map[MAXSIZEX][MAXSIZEY] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,3,1},
	{1,1,1,1,1,1,1,1,1,1},
};

int Input()
{
	return _getch();
}

void Process(int KeyCode)
{
	//�������� q, Q
	if (KeyCode == 'q' || KeyCode == 'Q')
	{
		bIsRunning = false;
	}
	//�̵� �Ѵ�.
	else if (KeyCode == UP)
	{
		if (map[PlayerPosition.Y-1][PlayerPosition.X] != 1)
		{
			PlayerPosition.Y--;
		}
	}
	else if (KeyCode == DOWN)
	{
		if (map[PlayerPosition.Y + 1][PlayerPosition.X] != 1)
		{
			PlayerPosition.Y++;
		}
	}
	else if (KeyCode == LEFT)
	{
		if (map[PlayerPosition.Y][PlayerPosition.X-1] != 1)
		{
			PlayerPosition.X--;
		}
	}
	else if (KeyCode == RIGHT)
	{
		if (map[PlayerPosition.Y][PlayerPosition.X + 1] != 1)
		{
			PlayerPosition.X++;
		}
	}
	//���� �� ���� ��
	if (map[PlayerPosition.Y][PlayerPosition.X] == 3)
	{
		bIsRunning = false;
	}
}

void Rendering()
{
	system("cls");	//ȭ�� �����
	for (size_t y = 0; y < MAXSIZEY; y++)
	{
		for (size_t x = 0; x < MAXSIZEX; x++)
		{
			if (map[y][x] == 1)	//���� ��� ��ġ ������ ��(1)�̳�?
			{
				printf("%d", map[y][x]);
			}
			//�÷��̾� �׸���
			else if (y == PlayerPosition.Y && x == PlayerPosition.X)
			{
				printf("P");
			}
			//���� �׸���
			else if (map[x][y] == 3)
			{
				printf("3");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}

int main()
{
	PlayerPosition.X = 1;
	PlayerPosition.Y = 1;
	while (bIsRunning)
	{
		int keyCode = Input();
		//Network();
		Process(keyCode);	//�̵�, ����
		//Sound();
		Rendering();
	}
	return 0;
}