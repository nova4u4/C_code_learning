#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main06()
{
	// ���� �����������ַ���
	char password[20] = { 0 };
	printf("����������:>");
	scanf("%s", password);  //����˵�� ��ʵ������scans ��Ҫ��ѭ����������� �����Ѿ�������
	//getchar();//  ��ȡ��\n

	int ch = 0;
	while ((ch = getchar()) != '\n')
	{
		; // ����� ������ �ӻ������ó�������
	}
	printf("��ȷ������(Y/N):>");
	int ret = getchar();     //û��ȷ�Ϲ��� ֱ�����NO��

	//ԭ�� scanfҲ�Ǵ����뻺������ȡ���� 123456+�س�   ����> 123456\n ��123456����password
	// getchar������������������\n ���ȴ� ֱ�Ӷ�ȡ��ret  \n������Y
	// ����ڵ�ʮ�з���һ��getchar ����\n

	// ��������������� abcd edfg  ��������abcd edfg\n scanf�����ո�Ͳ�����
	// Ȼ��getchar���߿ո�  ����getchar��ȡedfg\n ��12�����޸�

	// scanf�����ַ���%s�Ļ����ڴ��������ո�Ļ�������������Ѱ����һ���ǿո��ַ���
	// ��˵��ո����   ����%c���ȡ�ո�
	if('Y' == ret)
	{
		printf("YES\n");
	}
	else
	{
	printf("NO\n");
 }


	return 0;
}