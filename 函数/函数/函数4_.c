#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



// 1.��������Ƕ�׵��� ����Ƕ�׶���

// 2.��ʽ����
#include<string.h>
int main41()
{
	int len = strlen("abcdef");
	printf("%d\n", len);

	// printf("%d\n", strlen("abcdef"));  ��ʽ�ṹ

	printf("%d", printf("%d", printf("%d", 43)));   // printf����ֵΪ��ӡ�ַ���
	return 0;

}

// 3. main�������������� main( int argc,  char* argv[],char *envp[]) 



// 4.�����������Ͷ���

//int Add(int x, int y);  //�������� ������������������� ȥ����
//
//int main44()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//
//
//
//int Add(int x, int y)  //�������� ����������֮�� ����Ҳ��� ����Ҫ����
//{
//	return x + y;
//}


// ���Ǻ���������һ�����ͷ�ļ��� 
// ����Add.h      Add.c  Ϊһ���ӷ�ģ��  ��������ҵ�񻮷� ������

// �Ҽ�sln ���� ��exe��Ϊlib��̬�� add.lib (������Դ����)

#include"add.h"  // ͷ�ļ�����ڽ������������� ����������

// ��̬��ʵ�������� lib �ŵ��ļ�����
// �൱�ں�����Ŀ ������ ��̬������0.lib   add.h

#pragma comment(lib,"��̬������.lib")   //���뾲̬��
int maina51()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}