#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main04()
{
	int i = 1;
	while (i <= 10)
	{
		//if (5 == i)
		//	break;   // breakֱ�ӽ���ѭ�� ������������ ��ӡ1234
		//    //continue    // continue ��������ѭ�� ֱ�ӷ���while�� ��ʱΪ��ѭ��
		//printf("%d ", i);
		//i++;
		i++;
		if (5 == i)
			continue; //continueҪ�ֺ� ��ӡ2-11

			printf("%d ", i);
	}
	return 0;
}