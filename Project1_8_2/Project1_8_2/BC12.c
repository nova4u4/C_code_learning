#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	// ������ ����ѭ��
//	char a; // char���ó�ʼ��
//	scanf("%c", &a);
//
//	printf("    %c\n", a);
//	printf("   %c %c\n", a, a);
//	printf("  %c %c %c\n", a, a, a);
//	printf(" %c %c %c %c\n", a, a, a, a);
//	printf("%c %c %c %c %c\n", a, a, a, a, a);
//	return 0;
//}


int main(void)
{
    char a;
    scanf("%c", &a);//����һ�������ַ�
    int i = 1;//�������õ�
    int j, g; //j��������ո��õģ�g��������ַ�+�ո��õ�
    for (i = 1; i < 6; i++)//��������i��ǰ5��ִ�е�ѭ����������5�У�
    {
        for (j = 5 - i; j > 0; j--)//�����n�е�ǰ5-n���ո�n<=5��
        {
            printf(" ");
        }
        for (g = 0; g < i; g++)//�����n�е����пո����ַ�
        {
            printf("%c ", a);//ע���������%c����һ���ո�
        }
        printf("\n");//��n�����������ִ�л��в���
    }//���е�����������n�е��ַ�������ͼ��
    return 0;

    return 0;
}