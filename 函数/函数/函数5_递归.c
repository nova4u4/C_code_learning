#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//  1.递归: 在函数定义中 直接或简介调用自身
//  少量程序进行多次重复计算
//  思考方式 是大事化小 



// 1.栈区 : 局部变量 函数形参  (每一次函数调用都会在栈区申请空间)
//          如果递归不当 则stack overflow 栈溢出


// 一 .存在限制条件，当满足这个限制条件的时候，递归便不再继续。 否则死递归
// 二 .每次递归调用之后越来越接近这个限制条件。


// 1. 接受一个无符号整形 按顺序打印其每一位

// (1) 正常写 思路是取模

// (2) 函数递归写 先将复杂问题转化为重复小问题

// 1234 -- 123 4 ----12 3 4  ---1 2 3 4

void print1(unsigned int n)
{
	if (n > 9)     // 必要限制条件
	{
		print1(n / 10);
	}
	printf("%d ", n % 10);   // 打印最后一位   
}

// 例如 1234    1234 > 9   n/10 变为 123 123>9 继续 12 > 9   变为1 1<9  printf 
// 这样最底层的print1调用结束 回到 n=12的时候 打印最后一位为2 再回一层 3 4 打印结束

int main231321()
{
	unsigned int num = 0;
	scanf("%u", &num);   // %u是无符号整形
	print1(num);
	return 0;
	

	//while (num)
	//{
	//	printf("%d", num % 10);          // 取模 得最后一位
	//	num = num / 10;                 // /10推移位数
	//}                                   // 但是顺序不对

}



// 2 .编写函数不允许创建临时变量，求字符串的长度。(模拟实现strlen)

#include<string.h>


int my_strlen1(char *str)      //数组和字符串在内存中连续储存 因此传输的是首元素地址 也就需要指针接收
{
    //指向a 计数 直到\0
	int count = 0;                 //但是创建了临时变量 不符合要求
	while (*str != '\0')
	{
		count++;
		str++;  //跳到下一个字符 
	}

	return count;
}


// 递归求解  len_abc = 1+len_bc = 2+len_c =3 +len \0 = 1+1+1+0;
int my_strlen2(char *str)
{ 
	if (*str != '\0')    //递归则不用循环了 因为持续在调用和回归
	{
		return 1 + my_strlen2(str + 1);  //不能++ 否则先传后加
	}
	else
		return 0;
	// 画图理解   传入a的地址 a不等于\0 返回1+my_strlen 递归调用my_strlen(str+1)
	// 2 .... 3.... 最后一次调用 地址中为\0 return 0 
	// 所以return 0 1 1 1 最后return3


}

int main5_2()
{
	char arr[] = "abc";     // [a b c \0]
	int len = my_strlen2(arr);   //字符串在内存中也是连续存放 因此传输的也是首字符地址
	printf("%d\n", len);

	return 0;
}




// 3.求n的阶乘。（不考虑溢出）

//(1)正常写

int main5_3_1()
{
	int n = 0;
	int res = 1;
	scanf("%d", &n);
	int i = n;
	for (i = n; i >= 2; i--)
	{
		res = res * i;
	}
	printf("%d", res);
	return 0;
}


// (2) 递归 

//分析 n的阶乘如 4的阶乘 等于 4*3的阶乘 =4*3*2的阶乘
// 想一个限制条件 用if
int fac(int n)
{
	if (n > 1)
	{
		return n * fac(n - 1);
	}
	else
		return 1;
}

int main_5_3()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fac(n);
	printf("%d", ret);
	return 0;
}




// 4.斐波那契数列 (递归不一定好)   1 1 2 3 5 8 13 21

// 求第n个斐波那契数  Fib(n) = Fib(n-1)+Fib(n-2);

int Fib1(int n)
{
	if (n > 2)
		return Fib1(n - 1) + Fib1(n - 2);   //双递归 代码效率极低 计算时间长 (指数级别的)
	else               // 因为没有存储得到的数据 大量重复计算   40 - 39 38 --38 37  36 35--
		return 1;


}

int Fib2(int n)
{
	int a = 1;
	int b = 1;
	int c = 0;
	int i = 0;

	if (n <= 2)
		return 1;
	else
	{
		for (i = 3; i <= n; i++)
		{
			c = a + b;        //移位操作;
			a = b;
			b = c;
		}
	}
	return c;
}



int main4_1()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib2(n);
	printf("%d\n", ret);

	return 0;
}




// 5.栈溢出            递归中层次过多 栈溢出 stack overflow

void yichu(int n)
{
	if (n < 10000)
		yichu(n + 1);
}

int main5_1()
{
	yichu(1);
	return 0;
}     

//那如何解决上述的问题：
// 
//1. 将递归改写成非递归。
//2. 使用静态对象   存到静态区 不会占用栈区空间



// 6.打印一个数的每一位(顺序)

// 1234  123 12 1
void printk(int n)
{
	if (n >= 10)
		printk(n / 10);
	printf("%d ", n % 10);
}
int main6_1()
{
	int num = 0;
	scanf("%d", &num);
	printk(num);
	return 0;
}


// 7. 字符串逆序（递归实现）

//编写一个函数 reverse_string(char* string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。(存到数组中)
//要求：不能使用C函数库中的字符串操作函数。

// 递归思路 
// abcdefg  
// 1.将g幅值给a a的值存在临时变量 将g转为\0
// 2. strlen(arr+1)>=2 则还要交换 则递归(因为每一次递归有临时变量 tmp互不影响 所以可以放最后）
void reverse_string1(char* arr)
{
	int len = strlen(arr);
	char tmp = *arr;
	*arr = *(arr + len - 1);         // *(arr + len -1)是最后一个元素 因为len包含第一个 所以要减1
	*(arr + len - 1) = '\0';

	if (strlen(arr + 1) >= 2)       //strlen(arr+1) arr是首元素地址 那arr+1就是次元素地址 
	{                           // 那么计算strlen是到/0结尾 那么这个表达式就会比strlen(arr)少1
		reverse_string1(arr + 1);
	}
	*(arr + len - 1) = tmp;  // 递归后再复制 否则不会缩短
}

#include<string.h>
//非递归 则使用下标 定义两个指针(用指针了就都用指针)
void reverse_string2(char* arr)
{
	char *left = arr;
	char *right = arr+strlen(arr)-1;   //因为指针中存放的是字符 因此用char
	char change = '0';
	while (left <= right)
	{
		change = *left;
		*left = *right;
		*right = change;

		left++;
		right--;
	}
}
int main7_1()
{
	char arr[10] = {"0"};
	scanf("%s", arr);
	reverse_string1(arr);//由于是操作数组中的数 传递指针(数组名就是首元素地址)
	printf("%s\n", arr);
	return 0;
}



// 8.写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和

// 思路和之前输出每位数一样 一个个拆分
// 1234  变为123 sum=4    12 3+4  1 2+3+4

int DigitSum1(int n)
{
	if (n > 9)
		return DigitSum1(n / 10) + n % 10;
	else
		return n % 10;
}

int main8_1()
{
	int num=0;
	scanf("%d", &num);
	int ret = DigitSum1(num);
	printf("%d", ret);
	return;
}



// 9.递归实现n的k次方
// 递归思路 n的k次方 = n的k-1次方*n = n*n*n*n*n*n*n*n

int k_fang(int n, int k)
{
	if (k > 1)
		return k_fang(n, k - 1) * n;
	else
		return n;
}

int main()
{
	int n;
	int k;
	scanf("%d %d", &n,&k);
	int ret = k_fang(n,k);
	printf("%d的%d次方是%d", n,k,ret);

	return 0;
}