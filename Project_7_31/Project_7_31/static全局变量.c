#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 2.static����ȫ�ֱ��� Ҳ�Ǵ���ھ�̬����

extern int g_val;  //�����ⲿ����  ����static���� ȫ�ֱ��������ⲿ�������ԣ�link ����һ���֣� 
// ���� ���� ���ɿ�ִ�г���exe

int main08()
{
	printf("%d\n", g_val); //ʹ������Դ�ļ���ȫ�ֱ��� ��Ҫextern����

	return 0;
}

// ���� ǰԴ�ļ����� static int g_val �򱨴� 
//  ��Ϊ static����ȫ�ֱ���ʱ ���ⲿ�����Ա���ڲ�������
// �з�ֹ���õ����� �糣�ñ���abc
