#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


// 1.���������� �����Լ��
int maino1()
{

	int num1 = 0;
	int num2 = 0;
	scanf("%d %d", &num1, &num2);


	/*  ���Լ���������������й���Լ��������ߡ�
		���ķ�ʽ�Ƚ϶࣬������١�շת�������������𷨡�Stein�㷨�㷨
		�˴���Ҫ���ܣ�շת�����*/


	return 0;
}


// 2.��ӡ1000��2000֮�������  
// ��������������N�ܹ���4���������Ҳ��ܱ�100��������������
// ���ߣ�N�ܱ�400������Ҳ������

int maino2()

{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (year % 4 == 0)
		{
			if (year % 100 != 0)
			{
				printf("%d\n", year);
			}
			else if (year % 400 == 0);
			{
				printf("%d\n", year);
			}
			
		}

	}

	return 0;
}

int maino21()    //��д�� �߼�
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		{
			printf("%d ", year);
		}
	}

	return 0;
}

// 3.д���뽫�������������Ӵ�С�����

int maino3()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d %d %d\n", a, b, c);
}

// 4.дһ�����룺��ӡ100~200֮�������

// �����жϣ�
// 
// 1.�Գ��� ѭ��Ƕ�� ÿһ����һ��  �����Ż�
int maino4()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)         //100�϶���������
	{
		int j = 0; 
		for (j = 2; j < i ; j++)
		{
			if (i % j == 0)
			break; 
		}
		if (j == i)
		{
			printf("%d ", i);
		    count++;
		}
	}
	printf("\ncount=%d", count);
	return 0;
}

#include<math.h>
 
int maino42()          //�� i���Ա���Ϊa*b ��16=2*8 һ����һ������С�ڵ���sqrt i�� 
                   //  ��ֻ��Ҫ��� [2 sqrt(i)] sqrt��Ҫͷ�ļ�math
{
	
		int i = 0;
		int count = 0;
		for (i = 100; i <= 200; i++)         //100�϶���������
		{
			int j = 0;
			for (j = 2; j < sqrt(i); j++)
			{
				if (i % j == 0)
					break;
			}
			if (j > sqrt(i))
			{
				printf("%d ", i);
				count++;
			}
		}
		printf("\ncount=%d", count);
	
	


	return 0;
}


// 5.���Լ�� 

//���� շת�����    ���� 24 �� 18 
// ����24 mod 18  ��Ϊ18 �� 6       ���18��6 ���ܱ�ĳ��m���� ��ô 18+6�϶����Ա�ĳ������ 
// ת��Ϊ�� 18��6�����Լ��    �Դ����ƽ�����ȥ ֱ��6���Ա�18���� ��ô��ʱ��6�������Լ��
 
int maino5()
{
	int num1;
	int num2;
	int c = 0;
	int r = 0;
	scanf("%d %d", &num1, &num2);
	if (num1 < num2)
	{
		c = num1;
		num1 = num2;
		num2 = c;
	}
	while (num1 % num2)    // m%n��0ʱ����ѭ��
	{
		r=num1% num2;
		num1 = num2;
		num2 = r;
	}
	printf("���Լ����%d", num2);
	return 0;
}

//6.��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9

int maino6()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if(i%10==9)  //��λ
		{
			count++;
		}
		if (i / 10 == 9)
			count++;

	}
	printf("%d", count);
	return 0;
}



// 7.����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����

int maino7()
{
	int i = 1;
	int sign = 1;
	double sum = 0.0;      //��Ϊ���� ������С��
	for (i = 1; i <= 100; i++)
	{
		sum = sum + sign * 1.0 / i;
		sign = -sign;
	}
	printf("%lf", sum);

	return 0;
}



// 8.��10 �����������ֵ

int maino8()
{
	int arr[10] = { 0 };
	int max = 0;
	int i = 0;
	for (i = 0; i < 10; i++)
		scanf("%d", &arr[i]);

	max = arr[0];
	int j = 0;
	for (j = 0; j < 10; j++)
	{
		if (arr[j] > max)
			max = arr[j];
	}

	printf("%d", max);

	return 0;
}


// 9. ����Ļ�����9 * 9�˷��ھ���

#include <stdio.h>
int maino9()
{
	int i = 0;
	//��������
	for (i = 1; i <= 9; i++)
	{
		//��ӡÿһ�����ݣ�ÿ����i�����ʽ
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d ", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}