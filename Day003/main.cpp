#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Util.h"


//������ ����
//������ ���� �������� ��������. ������ ����� �߰��� ������ obj���Ϸ� �����Ͽ� ������


int main()
{
	//������ ����
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

	//���� ���� ����
	//����� �߰�ȣ �ȿ����� ������
	//���� �ۿ� �����ϸ� �۷ι� ����(����õ)
	//int a = 3;
	//int b = 2;

	//printf("%d, %d\n", a, b);

	////cpu�� �Լ����� �޸� ������ ����ϱ� ������
	////����� �ּҰ��� �ǳ��־� �ٲ�
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
	

	//���ڿ�
	char a[] = "Hello World";
	char b[1024];
	char c[] = "�ȳ��ϼ���.";
	//������ ������ ����õ, ���� �Ұ�
	const char *p = "����";
	//����
	strlen(a);
	//����
	strcpy(b, a);
	//�ڿ� ���̱�
	strcat(b, c);
	//�� (a < b -> -1, a > b -> 1, a = b -> 0)
	strcmp(a, b);
	printf("%s\n", a);
	//���ڿ� ������ ���� �ִ� ��
	sprintf(b, "%s, %d\n", "�����", 10);
	printf("%s", b);

	//���������
	//���������� ����
	FILE* fp;
	FILE* fpout;
	int total = 0;
	//���ڿ� ���� ����
	char Buffer[1024];
	//���Ͽ��� "r"�� �б��� "w"�� ���� ���
	fp = fopen("c:\\Data\\data.txt", "r");
	fpout = fopen("c:/Data/output.txt", "w");
	//�ѹ��� �д� �Լ�
	fgets(Buffer, 80, fp);
	//while �ݺ����� ���� �ش� ������ ������ ����
	while (strlen(Buffer) > 0)
	{
		//printf("%s", Buffer);
		//Buffer[0] = 0;
		//�޸� ����, memcpy�� �޸� ����
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
