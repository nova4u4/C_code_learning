#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
// 1. 通过函数调用形式 写一个代码：打印100~200之间的素数

int is_prime(int n)
{
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)
	{
		if (n % j == 0)
			return 0;     //不是素数 返回0 不会继续影响循环了 后续也不需要判断了
	}
	return 1;
}

int main31()
{

	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount=%d", count);
	return 0;
}


//  2.调用打印1000-2000的闰年


is_leap_year(int y)   // 尽量保持函数功能单一   高内聚 低耦合
{
	if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
		return 1;
	else
		return 0;
}


int main32()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (is_leap_year(year))
			printf("%d ", year);
	}
	return 0;
}


// 3.二分查找


int binary_search(int arr[], int k, int sz)  // arr本质上是指针 计算个数不要在函数内部
{
	int left = 0;
	int right = sz - 1;
	
	
	while(left<=right)
	{
		int mid = left + (right - left) / 2;//这种写法防止溢出
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}

}

int main33()  //形参和实参的名字可以相同也可以不同
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };  
	int k = 7;

	int sz = sizeof(arr) / sizeof(arr[1]);
	// 这句要放在主函数中  数组传参不会调走 只把首元素地址放过去 防止内存浪费
	// arr这里可以视为指针变量

	int ret = binary_search(arr, k, sz);  // 去arr中查k 传参数
		// 找到了返回下标
		// 找不到 返回-1 因为0可能是下标
	if (ret == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标是%d\n", ret);   //先写完函数主题 清楚函数功能 再写函数体
	}
	return 0;
}


//  c99引入 bool类型 表示真假   需要头文件 stdbool.h
//   true / false


// 4.写一个函数 每调用一次 num增加1
void Add1(int* p)
{
	(*p)++;
}

int main34()
{
	int num = 0;
	Add(&num);  //改变参数本身 取地址
	printf("%d\n", num);
	return 0;
}