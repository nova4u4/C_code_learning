#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main04()
{
	int  input = 0;
	printf("�ú�ѧϰ��(1/0)?");
	scanf("%d", &input); // ȡ��ַ����input
	if (input == 1)  // if () {}
	{
		printf("�ù���\n");
	}
	else
	{
		printf("������\n");
	}

	return 0;
}