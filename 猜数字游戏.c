#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// ��������Ϸ ���Բ��������(1~100)

void menu()
{
	printf("***************************\n");
	printf("********  1.play  *********\n");
	printf("********  0.exit  *********\n");
	printf("***************************\n");
}
 // Ҫ��ÿ�δ���Ϸ�������һ�� ��������Ϸ�б���һ��
void game()
{
	// 1.���������
	// rand���� ��Χ 0~RAND_MAX RANDMAXת������ 32767(0x7fff)   ͷ�ļ�stdlib.h
	// srand����rand����

    // srand�е������Ծ�������� ����һ���仯���� ��ʱ�� Ҫ����unsigned int
    // ʱ��� ����ʱ��ͼ������ʼʱ��� һֱ�ڱ仯

	// time���� ����ʱ��� ͷ�ļ�time.h  ���Դ���ָ�� NULL
	// int *a =NULL(������0) ����Ҫ������� 
	int ret = rand()%100+1;   // �κ������� mod 100 ֻ��ȡ0~99(����)  0~99+1-----1~100��
	//printf("%d\n", ret);


	// 2.������
	int guess = 0;
	while (1)  //һֱѭ��
	{
		printf("������:>");
		scanf("%d", &guess);

		if (guess < ret)
			printf("��С��\n");
		else if (guess > ret)
			printf("�´���\n");
		else
		{
			printf("��ϲ��¶���\n");
			break;
		}
	}
}
int maina01()
{
	srand((unsigned int)time(NULL)); //���ɱ�����Ϸ��Ҫ�������
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;// (break����switch)
		case 0:
			printf("%�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} 
	while (input);   //input������Ϊ�� ����ѭ�� Ϊ0������

	return 0;
}