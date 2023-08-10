#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


// 青蛙跳台阶问题
// 一只青蛙一次可以跳上1级台阶，也可以跳上2级（最多只能跳2级）。
// 求该青蛙跳上一个n级的台阶总共有多少种跳法。

// 1级台阶 只有1种跳法
// 2级台阶 有1+1 2 2种跳法
// 3级台阶 可以是   1级台阶跳法再跳2   也可以是2级台阶跳法再跳1   有1+2两种跳法
// 4级台阶      2级台阶+2 3级台阶+1

// 因此 n级跳法 = (n-1)*1 +(n-2)*1 
int jump1(int n)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 2;
	else
	{
		return jump1(n - 1) + jump1(n - 2);   
	}
}

int jump2(int n) // 123的话 就是三种相加 
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 2;
	else if (n == 3)
		return 4;
	else
	{
		return jump2(n - 1) + jump2(n - 2) + jump2(n-3);
	}
}


int mainwa()
{
	int n = 0;
	scanf("%d", &n);
	int ret = jump2(n);
	printf("跳法总数为：%d", ret);
	return 0;
}



// 拓展 一只青蛙一次可以跳上1级台阶，也可以跳上2级台阶，也可以跳上3级台阶。
// 求该青蛙跳上一个n级的台阶总共有多上种跳法。