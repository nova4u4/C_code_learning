#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 1.��С���ֽ���

// �������ڴ��д��ʱ ����˳������

// 0x 00 00 00 01    ��Ϊ 01 00 00 00   ��->��

int main11()
{
	int arr[] = { 1,2,3,4,5 };
	short* p = (short*)arr;  // ǿ������ת�� һ�η��������ֽ�
	int i = 0;
	for (i = 0; i < 4; i++) //��0
	{
		*(p + i) = 0;
	}

	for (i = 0; i < 5; i++) //��ӡ
	{
		printf("%d ", arr[i]);
	}
	return 0;
}




int main12()   // �κ�һ������/���ʽ ������������ �������Ժ�ֵ����
{
	int a = 0x11223344;   // ��С�� 44 33 22 11
	char* pc = (char*)&a;   // һ��ֻ��һ���ֽ�
	*pc = 0;
	printf("%x\n", a);   // 0x 11 22 33 00;
	return 0;
}