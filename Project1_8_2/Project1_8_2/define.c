#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 1. define�����ʶ������

#define NUM 100  //����NUMΪ100  

// 2.define����꣨�����в����ģ�

#define ADD(x,y) ((x)+(y))     // ���� ����(������ ֻ�Ƿ��ţ� ���壨�����滻��

int main01()
{
	printf("%d\n", NUM);
	int n = NUM;
	printf("%d\n", n);

	int a = 10;
	int b = 20;
	int c = ADD(a, b);  //���滻 ADD������������((a)+(b)) ���滻 �������ǵ���
	printf("%d\n", c);
	return 0;
}