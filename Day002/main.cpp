#include <stdio.h>
#include <stdlib.h>

#define NUM 20

/*
C와 C++ 은 추구하는 목표가 다를 뿐 정답이 따로 없다.

C : 절차 지향 언어로 일의 순서대로 프로그램 문법이 좀 더 쉬움 확장성은 없음
C++ : 객체 지향 언어로 오브젝트를 중심으로 생각하여 설계하는 프로그램 문법이 어려움 확장 가능

C++ 이 강세인 이유는 많은 사람들이 하나의 프로그램을 만들 때
프로그램의 관리가 좀 더 쉽고 재사용성이 뛰어나다

반면에, C는 좀 더 빠른 프로그램 개발에 사용된다. ex) opengl

게임에서 C와 C++이 쓰이는 이유는 메모리에 직접 접근할 수 있는 포인터를 사용하여
효율적인 메모리 관리를 할 수 있기 때문이다.

컴파일러는 사용자의 코드를 컴퓨터가 읽을 수 있는 0과 1로 바꿔주는 역할을 한다.
이렇게 생성된 프로그램은 os가 cpu를 돌려 메모리에 프로그램을 올려 실행시킨다.
추가 역할로, 각 cpu와 os에 맞는 언어로 변환도 해준다.
더 나아간 컴파일러인 C#은 컴파일을 따로 하지 않아도 돌아가도록 프로그램 해준다.

bit는 컴퓨터의 기본 단위 byte는 문자의 단위로 영어 위주인 ascii 용도로 7 + 패리티 1 =  8bit가 기준이 되었다.
하지만, 다른 언어들을 나타내기 위해선 unicode, utf 등 다른 문자열이 필요하다.

2진수 음수표현 도수법 등등..

bmp는 비압축파일로 rgb코드로 되어있는데 어떻게 읽느냐에 따라 이미지, 코드로 나눠짐
jpg(손실압축), png(비손실압축)는 별도의 헤더가 들어가는 압축파일.

멀티스레드를 지원하기위해 api 버전이 향상됨 dx11 -> dx12, opengl -> vulkan 등등..
*/
int main()			//Entry Point
{
	//메모리(변수) 설명
	int a = 100;
	char b = 98;	//-128 ~ 127
	unsigned char c = 0xff;	//0 ~ 255
	unsigned int d = 0xffffffff;	//0 ~ 42억
	//printf("Hello World! %u", d);

	////////////////////////////////////////////////

	//포인터 설명, 이중, 삼중 포인터도 들어감
	//하드웨어 제어 및 동적할당에 사용
	int pa = 2;
	int * pb = &pa;
	int **pc = &pb;
	int ***pd = &pc;
	int ****pe = &pd;
	int *****pf = &pe;
	*pb = 3;
	//printf("%x\n", pb);
	//printf("%x\n", *pc);

	////////////////////////////////////////////////

	//배열 여러명 변수 입력을 위해 a[i] = *(a+i)
	//반복문 반복되는 문장을 줄이기 위해
	//동적할당 유동적인 capacity를 사용하기 위해

	int count = 0;
	scanf("%d", &count);
	/*int kor[NUM];
	int eng[NUM];
	int math[NUM];
	float avg[NUM];*/

	int* kor = (int*)malloc(sizeof(int)*count);
	int* eng = (int*)malloc(sizeof(int)*count);
	int* math = (int*)malloc(sizeof(int)*count);
	float* avg = (float*)malloc(sizeof(int)*count);
	
	for (size_t i = 0; i < count; i++)
	{
		kor[i] = 100;
		eng[i] = 90;
		math[i] = 80;
		avg[i] = (kor[i] + eng[i] + math[i]) / 3;
		printf("%f\n", *(avg+i));
	}

	free(kor);
	free(eng);
	free(math);
	free(avg);
	
	int input;
	scanf("%d", &input);
	for (size_t i = 0; i < input; i++)
	{
		for (size_t j = 0; j < input; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}