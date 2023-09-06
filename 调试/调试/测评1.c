#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//  1. 求最小公倍数


void min_bei(int a, int b)
{
	// a * i = b * j = x   即是公倍数
	// 用大的*j j++ 直到 j可以被a整除
	int tmp = 0;
	if (b > a)
	{
		tmp = a;
		a = b;
		b = tmp;
	}

	int i = 1;
	while ((a * i) % b)
	{
		i++;
	}
	printf("%d ",i*a);
}

int main21()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
    min_bei(a, b);

	return 0;
}





// 2.倒 将一句话的单词倒置 但是标点不倒置 如 i like beijing.  beijing. like i
#include<string.h>
#include<assert.h>

// 为了reverse能用于全逆 也能用于单词逆
// 输入参数直接定义为 始末地址
void reverse(char *left, char *right)
{
	
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

int main321()
{
	// 思路可以分三步  1.字符串逆序 2.每个单词逆序  

	// i love you.   .uoy evol i     you. love i

	//1. 输入
	char arr[101] = {0};  //由于有空格 可以用gets读字符串
	gets(arr);  // 读到arr中

	//2. 全逆   
	char* left = arr;
	int n = strlen(arr);
	char* right = arr + n - 1;
	reverse(left,right);
	

	//3. 逆序每个单词  最后一个单词结束标志是\0

	char* start = arr;

	while (*start != '\0')
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')
		{
			end = end + 1;    //找到空格的时候 停止while循环 最后一个字符在end前面 所以需要-1
		}

		reverse(start, end - 1);
		// 下一个单词
		if (*end != '\0');
		end++;
		start = end;

	}

	printf("%s\n", arr);

	
	return 0;
}