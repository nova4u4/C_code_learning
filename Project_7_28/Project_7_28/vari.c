#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>    


// ������������
// 
// 1.�ֲ�����            //���������ǣ����������򵽳�������
// �ֲ��������������Ǳ������ڵľֲ���Χ

// 2. ȫ�ֱ���        //��������
// ȫ�ֱ���������������������(��Ŀ)
//����������һ��Դ�ļ��� ��Ҫ����   extern int a
extern int a;


void test()
{
	printf("test-->%d\n", a);
}

int main()
{
	test();
	{
		//int a = 10;        //���a�ľֲ���Χ�Ǵ�{ } 
		printf("a=%d\n", a);
	}
	
	printf("a=%d\n", a);

	return 0;
}