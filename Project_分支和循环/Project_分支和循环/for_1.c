#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// whileѭ��һ����Ҫ��ʼ����� �ж���� �������)
// forѭ��(��ʼ�����; �ж����; �������) �м�ʹ�÷ֺ�

// ʵ�ִ���ϰ��   1.����ҿ�   2.ѭ����䲻Ҫ�ı�ѭ������

// ѭ���������������{}

// break��continueһ��


// forѭ�����жϲ���ʡ�ԡ������������

int main08()
{

	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			break;   // ���1 2 3 4 ����5�� break����

		printf("%d ", i);
	}
	
	return 0;
}

int main09()
{

	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			continue;   // ���1 2 3 4 6 7 8 9 10����5�� continue������һ��ѭ�� �Ѿ�������

		printf("%d ", i);
	}

	return 0;
}


int main10()   //ѭ��Ƕ��  printf 100��

{
	int i = 0;
	int j = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("hehe\n");
		}
	}

	return 0;
}


int main11()   //ѭ��Ƕ��  ��Ҫ����ʡ�Գ�ʼ��

{
	int i = 0;
	int j = 0;

	for (; i < 3; i++)     //ʡ�� ����ӡ���� ���ǾŴ�
	{                         //i=0ʱ  j = 0 1 2��ӡ���� Ȼ��i++ i=1��2ʱ j=3ֱ������
		for (; j < 3; j++)
		{
			printf("hehe\n");
		}
	}

	return 0;
}


int main12()
{
       int x, y;
      for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)  //�����ö����������ѭ��
{
	 printf("hehe\n");
}
return 0;
}


int main13()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)      //ѭ��0�� k=0�Ǹ�ֵ��� Ϊ0ֱ������
		k++;
	return 0;
}

