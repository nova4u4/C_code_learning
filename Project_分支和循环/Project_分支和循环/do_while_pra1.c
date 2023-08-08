#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int maina1()  //计算n的阶乘
{
	int i = 1;  //从1开始
	int n = 0;
	int ret = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) // 到=n结束
	{
		ret = ret * i;
	}
	printf("%d", ret);
	return 0;
}




int maina2()   // 计算 1!+ 2!+ 3!+ …… + 10!
{                        // 双循环嵌套 时间上复杂
	int j = 1;
	int sum = 0;
	int i = 1;

	for (j = 1; j <= 10; j++)
	{
		int ret = 1;   //ret放在循环里 可以复位
		for (i = 1; i <= j; i++)
		{
			ret = ret * i;
		}
		sum = sum + ret;
	}
	printf("%d", sum);
	return 0;
}






int maina3()       // 优化 10的阶乘就是 9的阶乘*10
{
	int i = 1;
	int ret = 1;
	int sum = 0;

	for (i = 1; i <=10; i++)
	{
		ret = ret * i;         //2的阶乘=1阶乘*2  3阶乘=2阶乘*3
		sum = sum + ret;
	}

	printf("%d", sum);
	return 0;
}






int maina4()    //3. 在一个有序数组中查找具体的某个数字n。（讲解二分查找）

{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 }; //有序数组
	int k = 7; //查找数字7
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	
	for (i = 0; i < sz; i++)
	{
		if (arr[i] == k)
		{
			printf("找到了,下标是%d\n", i);  //输出下标
			break;
		}

	}
	  
	if (i == sz)
	{
		printf("找不到");
	}

	return 0;             //没有利用有序这个条件 无序也可以
}





int maina5()      // 二分法查找(折半) 效率高 查看一个 可以滤去一大部分
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 }; //有序数组
	int k = 7; //查找数字7
	//左边下标left  右边right   中间下标mid 取平均值整数   如0-9 取中间4  下标4的是5

	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);

	int left = 0;      //左下标
	int right = sz - 1;  //右下标  =长度-1

	while (left <= right)
{
	// int mid = (left + right) / 2;  //中间下标  不溢出的情况可用
	// left和right不溢出 但是相加可能溢出 换一个保险的方法

		int mid = left + (right - left) / 2;
		// 只要其中一个不溢出 则不会溢出


	if (arr[mid] < k)  //因为有序 中间的小于k 所以一定在右半部分 此时mid+1变为左下标
	{
		left = mid + 1;
	}

	else if (arr[mid] > k)
	{
		right = mid - 1;
	}
	else
	{
		printf("找到了，下标是%d\n", mid);
		break;
	}
}
	//重复这个过程 写出循环 若没找到 直到left>right才跳出（相等可能可以找到)
	if (left > right)
		printf("找不到");
	return 0;
}



#include<windows.h>
#include<stdlib.h>

int maina6()   // 编写代码，演示多个字符从两端移动，向中间汇聚。
{
	// welcome to bit!
	// **************
	// w************!
	// we**********t!

	char arr1[] = "welcome to bit!!!!";
	char arr2[] = "##################";  //将arr1的字符替换arr二种 并打印

	// left right 下标 left++  right--


	int left = 0;
	
	int right = strlen(arr1)-1;  //方法一 可以用strlen  但是下标减一

	//int right = sizeof(arr1) / sizeof(arr1[0])-2;

	
	//方法二 注意字符串用\0结尾 用sizeof下标减二
	
	// 如char buf[]={a b c}  实际有四个元素 a b c \0
	// 但strlen长度为3         而sizeof得结果为4     实际下标为2

	while (left<=right) // 相等也可能要拿下来
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);  // 防止打印过快 Sleep函数(S大写) 休息1000ms  头文件windows.h
        
		// 只在一行打印 那就每一步后清空屏幕
		// cmd中 dir列出当前目录文件
		// 可以使用cls清空
		system("cls");   //system是库函数 可以执行系统命令  头文件 stdlib.h

		left++;
		right--;
	}

	printf("welcome to bit!!!!");
	return 0;
}



#include<string.h>

//编写代码实现，简单模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则
//提示登录成，如果三次均输入错误，则退出程序。
int mainaa()
{
	int i = 0;
	//假设密码是字符串abcdef
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:");
		scanf("%s", password);     //数组可以不需要取地址 因为数组的名称就是地址
		// if (password == "abcdef") 是错误的 比较字符串不能用==

		if (strcmp(password, "abcdef") == 0)       //strcmp 字符串比较 相等返回0 头文件string.h
		{
			printf("登录成功\n");
			break;
		}
		else
			printf("密码错误\n");
	}

	if (i == 3)
	{
		printf("三次密码均输入错误，退出程序\n");
	}
	return 0;
}