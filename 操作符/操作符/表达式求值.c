#define _CRT_SECURE_NO_WARNINGS
#include<Stdio.h>



// 1. C的整型算术运算总是至少 以缺省(默认)整型类型 的精度来进行的。

//表达式中的字符和短整型操作数在使用之前被转换为普通整型，这种转换称为
//整型提升。

////表达式的整型运算要在CPU的相应运算器件内执行，CPU内整型运算器(ALU)的操作数的字节长度
//一般就是int的字节长度，同时也是CPU的通用寄存器的长度。
//因此，即使两个char类型的相加，在CPU执行时实际上也要先转换为CPU内整型操作数的标准长度。



int main231dsa()
{
	char c = -1;   //-1是整数 32个比特位 但是char 8个比特位
	// 补码 11111111 按照符号位整形提升 补1 111111111111111

	char c2 = 1;
	//  0000 0001     补充符号位0 000000000000000000000001

	//无符号整形也补 0

	char a = 5;      
	//  00000101  整形提升 补0       0000 0000 0000 0000 0000 0000 0000 0101
	
	char b = 126;
	//  01111110 整形提升 补符号位0  0000 0000 0000 0000 0000 0000 0111 1110

	// 相加                          0000 0000 0000 0000 0000 0000 1000 0011
	
	// 由于d也是char 截断 1000 0011

	char d = a + b;    //表达式过程中 a b做了整形提升

	printf("%d\n", d);  // 输出-125   // 打印的时候 调用d表达式 整形提升
	                                //  符号位1 1111....1111 1000 0011
	                              // 补码求原码  -1求反   100000000000000000 0111 0100 

	return 0;
}



int mainkk1()
{
	char a = 0xb6;
	short b = 0xb600;
	int c = 0xb6000000;
	if (a == 0xb6)    //比较大小也是表达式调用 整形提升
		printf("a");
	if (b == 0xb600)
		printf("b");
	if (c == 0xb6000000)    // 只有c没有整形提升 因此没变
		printf("c");
	return 0;
}


int mainkk23()
{
	char c = 1;
	printf("%u\n", sizeof(c));   // 结果1  c是char 1一个字节
	printf("%u\n", sizeof(+c));
	printf("%u\n", sizeof(-c));  // +c -c就是表达式调用 需要整形提升
	return 0;
}



// 编写代码实现：求一个整数存储在内存中的二进制中1的个数。

int find_1(int n)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if ((n & (1 << i))!=0)
			count++;
	}
	return count;
}

int main5454()
{
	int num = 0;
	scanf("%d", &num);
	int ret = find_1(num);
	printf("%d", ret);

	return 0;
}




// 操作符优先级 （针对相邻操作符)
//复杂表达式的求值有三个影响的因素。
//1. 操作符的优先级
//2. 操作符的结合性
//3. 是否控制求值顺序。

int fun()
{
	static int count = 1;
	return ++count;
}
int main231()
{
	int answer;
	answer = fun() - fun() * fun();  // 非法表达式  无法确定先调用那个fun 产生歧义
	printf("%d\n", answer);//输出多少 看编译器的情况
	return 0;
}


#include <stdio.h>
int main1kjds()
{
	int i = 1;
	int ret = (++i) + (++i) + (++i);  // vs先++ ++ ++ 等于12  其他编译环境不同
	printf("%d\n", ret);
	printf("%d\n", i);
	return 0;
}


