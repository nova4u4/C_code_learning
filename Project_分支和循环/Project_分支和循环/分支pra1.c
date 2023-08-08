#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


// 1.输入两个数 求最大公约数
int maino1()
{

	int num1 = 0;
	int num2 = 0;
	scanf("%d %d", &num1, &num2);


	/*  最大公约数：即两个数据中公共约数的最大者。
		求解的方式比较多，暴力穷举、辗转相除法、更相减损法、Stein算法算法
		此处主要介绍：辗转相除法*/


	return 0;
}


// 2.打印1000到2000之间的闰年  
// 闰年的条件：如果N能够被4整除，并且不能被100整除，则是闰年
// 或者：N能被400整除，也是闰年

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

int maino21()    //简单写法 逻辑
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

// 3.写代码将三个整数数按从大到小输出。

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

// 4.写一个代码：打印100~200之间的素数

// 素数判断：
// 
// 1.试除法 循环嵌套 每一个试一试  可以优化
int maino4()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)         //100肯定不是素数
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
 
int maino42()          //若 i可以被拆为a*b 如16=2*8 一定有一个数是小于等于sqrt i的 
                   //  那只需要检测 [2 sqrt(i)] sqrt需要头文件math
{
	
		int i = 0;
		int count = 0;
		for (i = 100; i <= 200; i++)         //100肯定不是素数
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


// 5.最大公约数 

//方法 辗转相除法    例如 24 和 18 
// 先用24 mod 18  分为18 和 6       如果18和6 都能被某数m整除 那么 18+6肯定可以被某数整除 
// 转化为求 18和6的最大公约数    以此类推进行下去 直到6可以被18整除 那么这时候6就是最大公约数
 
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
	while (num1 % num2)    // m%n非0时继续循环
	{
		r=num1% num2;
		num1 = num2;
		num2 = r;
	}
	printf("最大公约数是%d", num2);
	return 0;
}

//6.编写程序数一下 1到 100 的所有整数中出现多少个数字9

int maino6()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if(i%10==9)  //个位
		{
			count++;
		}
		if (i / 10 == 9)
			count++;

	}
	printf("%d", count);
	return 0;
}



// 7.计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果

int maino7()
{
	int i = 1;
	int sign = 1;
	double sum = 0.0;      //因为分数 可能有小数
	for (i = 1; i <= 100; i++)
	{
		sum = sum + sign * 1.0 / i;
		sign = -sign;
	}
	printf("%lf", sum);

	return 0;
}



// 8.求10 个整数中最大值

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


// 9. 在屏幕上输出9 * 9乘法口诀表

#include <stdio.h>
int maino9()
{
	int i = 0;
	//控制行数
	for (i = 1; i <= 9; i++)
	{
		//打印每一行内容，每行有i个表达式
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d ", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}