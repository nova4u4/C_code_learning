#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_max(int x, int y)
{
	int z = 0;
	if (x > y)
	{
		z = x;
	}
	else z = y;
	return z;
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	printf("«Î ‰»Îx,y\n");
	scanf("%d %d", &num1, &num2);
	int max = 0;
	max = get_max(num1, num2);
	printf("%d\n", max);

	return 0;
}