#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Add(int x, int y)  // ֱ����ͬһ��Դ�ļ����� ���� 
                       // ����ڲ�ͬԴ�ļ� Ҳ��extern����������Ҳ�����ⲿ�������ԣ�
	                   //  ��static ͬ�����ⲿ�������Ա�Ϊ�ڲ���������
{
	return x + y; //���ص���int 
}

int main09()
{
	int a = 10;
	int b = 20;
	int z = Add(a, b);  //
	printf("%d\n", z);

	return 0;
}