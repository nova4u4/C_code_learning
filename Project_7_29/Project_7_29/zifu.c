#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
int main02()
{
	// char �ַ�����
	// 'a' ������ �ַ�
	// char ch = 'w';

	// "abcde"  ˫���� �ַ�������ֵ string literal �ǳ��� 
	// �ַ����Ľ�����־�� \0 ��Ϊת���ַ� ���㳤�� ��ռ�ռ�
	// �ַ���c����û������
	// �洢�ַ��� �����ַ����� 

	char arr1[] = "abcdef"; // ����\0 ��Ҫ�߸��ռ�
	char arr2[] = { 'a','b','c','d','e','f' };  // û�� \0 �����ռ�
	printf("%s\n", arr1);
	printf("%s\n", arr2);  // ������ ��������

	// �ڴ�ռ��� xxx arr1 xxx   ��ӡarr1 ��\0 ��β ���ټ�����
	//  xxx xxx arr2 xxx    ��ӡarr2 û�н�β

	char arr3[] = { 'a','b','c','d','e','f','\0'};  // ��\0����ʵ��ֹͣ
	printf("%s\n", arr3);

    int len = strlen("abc"); // ���ַ������ȵĺ���(����\0) ��Ҫ����ֵ ͷ�ļ�string.h 
	printf("%d\n", len);
	printf("%d\n", strlen(arr1));

	return 0;
}