#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main01()
{
	////  ����1
	//  if (condition) {
	//  	return x;
	//  }
	//  return y;            ��ʵ����ѡ������ ��Ϊreturn�Ǳ���� ���������Ĵ�������������� ������else

	//int num = 1;
	//if (num == 5)
	//{
	//	printf("hehe\n");
	//}
	//
	int num = 1;  // �����ж���� ������д��ǰ ��ֹ���� ��©��һ���Ⱥ�
	if (5 == num)
	{
		printf("hehe\n");
		printf("hehe\n"); // �����������ʹ�ô����
	}

	return 0;
}