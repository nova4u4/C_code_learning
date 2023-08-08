#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main05()
{

    printf("%#o %#X\n", 1234, 1234);
    //rintf可以使用使用格式控制串“%o”、“%X”分别输出八进制整数和十六进制整数，
    //并使用修饰符“#”控制前导显示
    
        // %#o小写o #有修饰作用 0开头
     // %#X 大写X #有修饰作用 0X开头

    int a = 0XABCDEF;  // 定义十六进制时 0X开头 才能识别 
    printf("%15d\n", a);   // “%md”输出域宽为m的十进制整数

    int b = printf("Hello world!"); 
    //将printf的值赋给整数变量 返回的是打印在屏幕上字符的数量 包括换行 因此 在打印b的时候 在前面加换行
    printf("\n%d", b);

    return 0;
}