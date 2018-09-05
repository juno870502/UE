#include <stdio.h>
#include <stdlib.h>

#define NUM 20

/*
C�� C++ �� �߱��ϴ� ��ǥ�� �ٸ� �� ������ ���� ����.

C : ���� ���� ���� ���� ������� ���α׷� ������ �� �� ���� Ȯ�强�� ����
C++ : ��ü ���� ���� ������Ʈ�� �߽����� �����Ͽ� �����ϴ� ���α׷� ������ ����� Ȯ�� ����

C++ �� ������ ������ ���� ������� �ϳ��� ���α׷��� ���� ��
���α׷��� ������ �� �� ���� ���뼺�� �پ��

�ݸ鿡, C�� �� �� ���� ���α׷� ���߿� ���ȴ�. ex) opengl

���ӿ��� C�� C++�� ���̴� ������ �޸𸮿� ���� ������ �� �ִ� �����͸� ����Ͽ�
ȿ������ �޸� ������ �� �� �ֱ� �����̴�.

�����Ϸ��� ������� �ڵ带 ��ǻ�Ͱ� ���� �� �ִ� 0�� 1�� �ٲ��ִ� ������ �Ѵ�.
�̷��� ������ ���α׷��� os�� cpu�� ���� �޸𸮿� ���α׷��� �÷� �����Ų��.
�߰� ���ҷ�, �� cpu�� os�� �´� ���� ��ȯ�� ���ش�.
�� ���ư� �����Ϸ��� C#�� �������� ���� ���� �ʾƵ� ���ư����� ���α׷� ���ش�.

bit�� ��ǻ���� �⺻ ���� byte�� ������ ������ ���� ������ ascii �뵵�� 7 + �и�Ƽ 1 =  8bit�� ������ �Ǿ���.
������, �ٸ� ������ ��Ÿ���� ���ؼ� unicode, utf �� �ٸ� ���ڿ��� �ʿ��ϴ�.

2���� ����ǥ�� ������ ���..

bmp�� ��������Ϸ� rgb�ڵ�� �Ǿ��ִµ� ��� �д��Ŀ� ���� �̹���, �ڵ�� ������
jpg(�սǾ���), png(��սǾ���)�� ������ ����� ���� ��������.

��Ƽ�����带 �����ϱ����� api ������ ���� dx11 -> dx12, opengl -> vulkan ���..
*/
int main()			//Entry Point
{
	//�޸�(����) ����
	int a = 100;
	char b = 98;	//-128 ~ 127
	unsigned char c = 0xff;	//0 ~ 255
	unsigned int d = 0xffffffff;	//0 ~ 42��
	//printf("Hello World! %u", d);

	////////////////////////////////////////////////

	//������ ����, ����, ���� �����͵� ��
	//�ϵ���� ���� �� �����Ҵ翡 ���
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

	//�迭 ������ ���� �Է��� ���� a[i] = *(a+i)
	//�ݺ��� �ݺ��Ǵ� ������ ���̱� ����
	//�����Ҵ� �������� capacity�� ����ϱ� ����

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