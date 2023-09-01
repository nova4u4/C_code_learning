#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


// 二维数组 如 int arr[3][4] 三行四列  


// 1. 二位数组初始化


int main2_1()
{
	int arr1[3][4] = {1,2,3,4,5,6,7,8,9,10}; //类似矩阵填充 先横着  不够则填入0

	int arr3[3][4] = { {1,2},{3,4},{5,6} };   // 做了分组 第一行 1 2 0 0 第二行 3 4 0 0

	int arr[][4] = { {2,3},{4,5} };//二维数组如果有初始化，行可以省略，列不能省略 2 3 0 0 / 4 5 0 0

	int i = 0;


	// 循环打印 通过下标调用 注意行和列都是从0开始!!!!!!!!!!!!!!!


	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}

	printf("%d", arr1[2][0]);
	char arr2[5][10];
	return 0;
}


//2.二维数组可以理解为  一维数组的数组
 
// 如3*4  有三个一维数组    (arr[0]) [1]  数组(arr[0])的[1]





// 3. 二维数组在内存中也是连续存放的 差4


#include <stdio.h>
int main2_3()
{
	int arr[3][4];
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
		}
	}
	return 0;
}


// 4.越界访问，超过下标范围   ——编译器不会报错 内存随机

int main2_4()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	for (i = 0; i <= 10; i++)
	{
		printf("%d\n", arr[i]);//当i等于10的时候，越界访问了
	}
	return 0;
}


// 5.数组作为函数参数
// 数组传参数给函数  有数组和指针两种写法 都可以


// 冒泡排序：核心思想 两个相邻元素比较
// 
// 外层循环控制遍历数  内层控制范围
// 遍历从头开始 有左比右大的则交换 但是比较的范围随着j往后推进 不会回头 
// 如果有最大的在前面 那就一路换到最后  否则在推进过程中 遇到更大的数 改为推进更大的
// 因此第一次i的遍历 排好最大的一个数在最后 然后内层比较的范围-i 因为最后一个不用排




void bubble_sort(int arr[],int sz)  //必须有[] 否则变为普通整形了 （不过实际上不是创建数组 也是传递指针)
{

	//int sz = sizeof(arr) / sizeof(arr[0]);  //长度
    // 数字名传过来 本质上是传地址 因此 arr看似是数组 其实是首元素指针 所以求sz出错


	int i = 0; 
	for (i = 0; i < sz - 1; i++)    // 趟数是 sz-1 最小的不用排了
		                            // 外层循环控制遍历的趟数
	{
		int j = 0;
		// 内层循环控制控制每趟遍历访问区间的范围
		for (j = 0; j < sz - 1 - i; j++)  //一趟确定最大一个元素的位置 然后范围就可以减小
		{
			if (arr[j] > arr[j + 1]) // 左比右大 交换顺序
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}



int main()
{
	int arr[] = { 2,1,9,6,4,8,5 }; //排序为升序
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}



//数组名可以表示首元素地址 但有两意外
	// 1.sizeof(数组名)
	// 2. &数组名 表示整个数组地址



int mainkk()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);  // arr 表首元素地址
	printf("%p\n", arr+1);  //  下一元素
	printf("-----------------\n");
	printf("%p\n", &arr[0]);       // 首元素地址
	printf("%p\n", &arr[0]+1);     // 下一元素
	printf("-----------------\n");
	printf("%p\n", &arr);          // 数组地址
	printf("%p\n", &arr+1);     //下一数组地址
	 

}

// 二维数组名 ——表示首组(首行)首元素地址    看作一维数组的数组  +1跳到下一行

// 求二维数组的行大小  列大小

int mainkk2()
{
	int arr[3][4] = { 0 };
	printf("%d\n", sizeof(arr) / sizeof(arr[0]));  // arr[0] 表示第一行  总数除 求行大小
	printf("%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));   // 行大小/一个元素大小 求列大小
	return 0;
}

