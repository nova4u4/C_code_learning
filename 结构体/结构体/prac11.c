#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



// 1.打印菱形 1 -- 13  分为上下三角

int main02()
{
	// 先打印上半部分  只要分为 空格 *号即可 后面不用空格了

	int line = 7;
	int i = 0;

	for (i = 0; i < line; i++)
	{
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}


	//下半部分

	int line2 = 6;

	for (i = 0; i < line2; i++)
	{
		int j = 0;
		for (j = 0; j <i+1; j++)
		{
			printf(" ");
		}

		for (j = 0; j<11-2*i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}



int main03()
{
	//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水

	int mon = 0;
	scanf("%d", &mon);
	int sum = 0;
	int empty = 0;

	sum = mon;
	empty = mon;

	while (empty > 1)
	{
		sum = empty / 2 + sum;
		empty = empty / 2 + empty % 2;   // 如果除不尽要加上 (可能留有空瓶)
	}
	printf("%d", sum);

	return 0;
}





// 3. 字符串逆序 (使用指针下标)

void Reverse(char *str, int l)   // 传来的是数组首元素地址 用*表示
{
	char* left = str;
	char* right = str + l - 2; // 减去/0 再少一个  如果用strlen 则-1
	while (left < right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}

int main()
{
	char str[] = "hello bit";
	// 如果是输入的 scanf %s 遇到空格就结束
	// 因此应该用gets()
	int length = (sizeof(str) / sizeof(str[0]));  // 包括/0
	Reverse(str,length);
	/*int i = 0;
	for (i = 0; i < length; i++)
	{
		printf("%c", str[i]);
	}*/

	printf("%s\n",str);
	return 0;
}


// oj 可能的循环输入 写法参考
//int main()
//{
//	char str[101] = { 0 };
//	while (gets(str))
//	{
//		Reverse1(str);
//		printf("%s\n", str);
//		memset(str, 0, sizeof(str) / sizeof(str[0]));
//	}
//	return 0;
//}