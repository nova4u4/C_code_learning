#define _CRT_SECURE_NO_WARNINGS


// C���Ժ�������   

// 1.�⺯��   IO���� �ַ�����غ��� �ַ��������� �ڴ�������� ʱ�����ں����ȵ�
// https://cplusplus.com/reference/���Բ�ѯ

/* strcpy example */
#include <stdio.h>
#include <string.h>

int main01()
{
	char str1[] = "Sample string";
	char str2[40];
	char str3[40];
	strcpy(str2, str1);  //�󸳸�ǰ
	strcpy(str3, "copy successful");
	printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
	return 0;
}


/* memset example */ //�ڴ��趨

//  void* memset(void* ptr, int value, size_t num);
//  ptr ָ��Ҫ�����ڴ���ָ�롣
//  value ���趨ֵ ��Ϊint���� ����ʹ�ø�ֵ��unsigned charת��������ڴ�顣
//  numΪ Ҫ����Ϊvalue ���ֽ�����
//  ��ptrָ����ڴ��� ǰnum���ֽ�����Ϊָ��ֵ������Ϊunsigned char����
int main02()
{
	char str[] = "almost every programmer should know memset!";
	memset(str, '-', 6);   //ǰ�������ó� -  ���������ǵ�ַ �Ǿ���ָ��
	puts(str);
	return 0;
}



//2.�Զ��庯��
// 
//  ��ɣ�  �������� ������ ����   ������
// 
int get_max(int x, int y)
{
	return(x > y ? x : y); //��Ŀ����� ���ʽ1 �桪��2 �١���3
}

int main03()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int m = get_max(a, b);
	printf("%d\n", m);
	return 0;
}


// ����� �����һ̨���� wmare workstation 
// ������� .vmdk���ļ� 