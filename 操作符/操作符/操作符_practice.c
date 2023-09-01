#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 一.变种水仙花自己的作法 复杂
int is_lily(int n)
{
    int x11 = 0;  //五位数 14 23 32 41
    x11 = n / 10000;
    int x12 = 0;
    x12 = n % 10000;

    int x21 = 0;  //五位数 14 23 32 41
    x21 = n / 1000;
    int x22 = 0;
    x22 = n % 1000;

    int x31 = 0;  //五位数 14 23 32 41
    x31 = n / 100;
    int x32 = 0;
    x32 = n % 100;

    int x41 = 0;  //五位数 14 23 32 41
    x41 = n / 10;
    int x42 = 0;
    x42 = n % 10;

    int product = x11 * x12 + x21 * x22 + x31 * x32 + x41 * x42;
    if (product == n)
        return 1;
    else return 0;
}


int mainkl1()
{

    int i = 0;
    for (i = 10000; i <= 99999; i++)
    {
        int ret = is_lily(i);
        if (ret == 1)
        {
            printf("%d ", i);
        }
    }
    return 0;
}


#include<math.h>

int maink12()
{
    int i = 0;
    
    for (i = 10000; i <= 99999; i++)
    {
        int sum = 0;
        int j = 0;
        for (j = 1; j <= 4; j++)
        {
            int k = (int)pow(10, j);    // pow是次方函数 头文件math.h  类型double 强制类型转化为int
            sum = sum + (i % k) * (i / k);

        }
        if (sum == i)
            printf("%d ", i);
    }

    return 0;
}





// 2.求两个数二进制中不同位的个数

// 编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？ 

int maink22()
{
    int num1 = 0;
    int num2 = 0;
    scanf("%d %d", &num1, &num2);
    // 求多少位相同 x86  异或 同0 异1
    int res = num1 ^ num2;
    // 统计res中1的个数 即是不同位的数量

    int sum = 0;
    int i = 0;
    for (i = 0; i < 32; i++)
    {
         //移位解决
        if ((res &(1 << i)))
            sum++;
    }
    printf("%d", sum);
    return 0;

}




// 3.统计个数的另一方法 无需循环

int main3213()
{
    int num = 0;
    scanf("%d", &num);
    int i = 0;
    int count = 0;//计数
    while (num)
    {
        count++;
        num = num & (num - 1);

        // 如  5:101    101 & 100     只
    }
    printf("二进制中1的个数 = %d\n", count);
    return 0;
}



// 4. 打印整数二进制的奇数位和偶数位

// 获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列

void printji(int n)
{
    int i = 0;  //奇数位是1/0就打印1/0
    for (i = 31; i >= 1; i = i - 2)
    {
        printf("%d ", 1 & (n >> i));
    }
    printf("\n");
}

void printou(int n)
{
    int i = 0;  //奇数位是1/0就打印1/0
    for (i = 30; i >= 0; i = i - 2)
    {
        printf("%d ", (n >> i) & 1 );
    }
    printf("\n");
}

int main()
{
    int num = 0;
    scanf("%d", &num);
    printf("奇数位\n");
    printji(num);
    printf("偶数位\n");
    printou(num);
    
}