#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main01()
{
	// 1.���泣��
	
	// 30; ����
    // 3.14;  ������
	// 'w'   �������ַ�
	// "abc"  ˫�����ַ���


	// 2.const ���εĳ�����

	// int a = 10   ���������޸�
	// a = 20;
	// const int b = 10; �����ø�)  �����Ǳ��� ���ǲ��ø� �г���������
	// int arr[n]={0} �˴�n�����ǳ��� �����ᱨ�� ����const int

	// 3.define����ı�ʶ������
	
    #define STR "abcdef" 
	printf("%s\n", STR); //��ӡ�ַ��� %s
    #define max 100
	printf("%d\n", max);
	int a = max;
    printf("%d\n", a);

	// 4. ö�ٳ��� ������ռ�

	enum Color  
	{
		RED,  //ϰ��д��д ��������ȡֵΪö�ٳ���
		GREEN,
		BLUE,
	};

	enum Color c = RED;  //������ɫ���� c ������color ��Ҫ���ڴ�����ռ�

	return 0;
}