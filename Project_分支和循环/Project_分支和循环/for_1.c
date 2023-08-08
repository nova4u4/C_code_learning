#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// while循环一般需要初始化语句 判断语句 调整语句)
// for循环(初始化语句; 判断语句; 调整语句) 中间使用分号

// 实现代码习惯   1.左闭右开   2.循环语句不要改变循环变量

// 循环语句两句以上用{}

// break和continue一样


// for循环的判断部分省略————恒成立

int main08()
{

	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			break;   // 输出1 2 3 4 等于5后 break跳出

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
			continue;   // 输出1 2 3 4 6 7 8 9 10等于5后 continue跳到下一次循环 已经自增了

		printf("%d ", i);
	}

	return 0;
}


int main10()   //循环嵌套  printf 100次

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


int main11()   //循环嵌套  不要轻易省略初始化

{
	int i = 0;
	int j = 0;

	for (; i < 3; i++)     //省略 共打印三次 不是九次
	{                         //i=0时  j = 0 1 2打印三次 然后i++ i=1，2时 j=3直接跳出
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
      for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)  //可以用多个变量控制循环
{
	 printf("hehe\n");
}
return 0;
}


int main13()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)      //循环0次 k=0是赋值语句 为0直接跳出
		k++;
	return 0;
}

