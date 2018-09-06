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
	//종료조건 q, Q
	if (KeyCode == 'q' || KeyCode == 'Q')
	{
		bIsRunning = false;
	}
	//이동 한다.
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
	//골인 시 게임 끝
	if (map[PlayerPosition.Y][PlayerPosition.X] == 3)
	{
		bIsRunning = false;
	}
}

void Rendering()
{
	system("cls");	//화면 지우기
	for (size_t y = 0; y < MAXSIZEY; y++)
	{
		for (size_t x = 0; x < MAXSIZEX; x++)
		{
			if (map[y][x] == 1)	//현재 출력 위치 정보가 벽(1)이냐?
			{
				printf("%d", map[y][x]);
			}
			//플레이어 그리기
			else if (y == PlayerPosition.Y && x == PlayerPosition.X)
			{
				printf("P");
			}
			//골인 그리기
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
		Process(keyCode);	//이동, 물리
		//Sound();
		Rendering();
	}
	return 0;
}