#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main05()
{
	//int ch = getchar();   //��ȡ�ַ���ASCII�� ����int��ch
	////getchar��ȡ���� �������Ӧascii��  ��������� ����EOF
	////end of file  ����intֵΪ-1  ���һ�ת�����壩
	//// ������int���պ�


	//printf("%c\n", ch);   //int���� �����������%c �����ASCII���Ӧ�ַ�
	//putchar(ch);   // ͷ�ļ�����stdio.h  ��ǰһ��һ����˼
	int ch;
	while ((ch = getchar()) != EOF)   //��ctrl+z����
	{
		putchar(ch);// �Զ����� ���������ַ�+�س� ��a+�س�
		//getchar�Ǵ����뻺������ȡ û����ȴ�
		// a+�س� ���뻺���� a \n   �ȶ�a �ٶ�\n
		// ���ζ�ȡ ��������ַ���Ҳ��һ��һ����

		//�ʵ��޸��������������������
	}
	return 0;
}