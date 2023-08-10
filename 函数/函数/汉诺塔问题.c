#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//问题背景
// 三根石柱 ABC 在A柱子上 从下往上依次从大到小放了64片圆盘 
// 要将圆盘按顺序(下大上小) 放到C上  且任何时候，在小圆盘上都不能放大圆盘
// 且在三根柱子之间一次只能移动一个圆盘。问应该如何操作？


// 递归思路 n个圆盘 分为最下面一个 和上面n-1个
// 因为大不能在小上 最下面一个要最先到C
// 因此分为 n-1 1  --- n-2 1 1 --------- 1


//假设总共需要移动n个盘子
//1.将A柱上的n - 1个盘子借助C柱移向B柱
//2.将A柱上仅剩的最后一个盘子移向C柱
//3.将B柱上的n - 1个盘子借助A柱移向C柱


//int main()
//{
//	int x = 0;
//	char a='A';
//	x = a;
//	printf("%c", x);              // 将字符赋值给整形变量 整形变量储存其ASCII码
//	
//	return 0;
//}


void move(int x, int y)     //MOVE 函数 显示移动过程(使用字符)
{
	printf("%c->%c ", x, y);
}

// 递归 一级级往上 分为 n-1 1  --- n-2 1 1 --------- 1

void hanoi(int n, char A, char B, char C) //A为起始 B为中转 C为目的
{
	if (n <= 1)
		move(A, C);   // 如果n<=1了 就是最后一片了 从A移到C
	else
	{
		hanoi(n - 1, A, C, B);// 如果还没到最后一片 则先分 将前n-1片 起始A 借助C 转到B
		move(A, C);//将A座上最后一个盘子移向C座
		hanoi(n - 1, B, A, C);//  n-1片现在在B上 起始B 借助A 转到C 
	}
}

// 一定会有一个 起始 中转 目的 因此可以递归


int mainta()
{
	int n = 0;
	scanf("%d", &n);
	hanoi(n,'A','B','C');
	return 0;
}

// 一共要移动 2^n -1 次