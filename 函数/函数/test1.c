#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
// 6.打印一个数的每一位(顺序)

// 1234  123 12 1
void print(int n)
{
	if (n >= 10)
		print(n / 10);
	printf("%d ", n % 10);
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	print(num);
	return 0;
}