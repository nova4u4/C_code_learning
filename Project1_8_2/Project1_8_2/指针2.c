#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main03()
{
	//ָ������Ĵ�С

	// ������ʲô���͵�ָ�� ���Ǵ���ָ����� �����ڴ�ŵ�ַ�� 
	// ȡ���ڵ�ַ�����Ҫ�Ŀռ�  32λ���� 32bitλ --4�ֽ�    64λ���� 64bitλ����8�ֽ�
	// debug ����ѡ�� x64 x86
	printf("%zu\n", sizeof(char*));
	printf("%zu\n", sizeof(char*));
	printf("%zu\n", sizeof(short*));
	printf("%zu\n", sizeof(int*));
		printf("%zu\n", sizeof(float*));
		printf("%zu\n", sizeof(double*));

		int* p1, * p2, p3;   // p1 p2��ָ����� p3��ֻ��int
	return 0;
}