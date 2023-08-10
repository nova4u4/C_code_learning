#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void swap1(int x, int y)  //这样写实参a和b的值传给了形式参数x和y
//                         // 形参是实参的临时拷贝 （有自己的存储地址)
//                           形式参数当函数调用完成之后就自动销毁了。
//	                       // 因此改形参 不影响实参
{
	int c = 0;
	c = x;
	x = y;
	y = c;                  
}

// swap1 传值调用
// swap2 传址调用 这种传参方式可以让函数和函数外边的变量建立起真正的联系

void swap2(int* px, int* py)
{
	int z = *px;       //通过 *px *py 找到内存地址 修改交换其中内容
	*px = *py;
	*py = z;

	// 改内容
	// int a = 10;   int *p = &a;
	// 1.直接改 a=20    2. *p =30;
}

int main21()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("交换前a=%d,b=%d\n", a, b);
	//swap1(a, b);
	swap2(&a, &b);       //改为取地址
	printf("交换后a=%d,b=%d\n", a, b);

	return 0;
}

//  什么情况需要传地址？
//  ————是否改变参数本身   需要改变实参，则加地址符
//  如a+b和x+y一样  返回的是和 与实参无关 不用取地址