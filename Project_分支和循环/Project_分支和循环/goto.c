#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// goto 语句    具有跳转的功能 
// 理论上来说 goto不必要 但是某些场合好用 如终止深度嵌套的结构，跳出多层循环

int mainb1() 
{

again:

	printf("hehe\n");
	printf("haha\n");
	goto again;
	// 但是goto跳不到其他函数中


	return 0;

}

int mainb2()    //例 跳出三层循环 如果不用goto语句 break break break太繁杂 goto一步到位
{
    //for (...)
    //    for (...)
    //    {
    //        for (...)
    //        {
    //            if (disaster)
    //                goto error;
    //        }
    //    }
    //…
    //    error :
    //if (disaster)
    //    // 处理错误情况

}
	
#include<string.h>

// 关机程序 
//1.电脑运行起来后 1分钟内关机————命令行窗口 shutdown -s关机   shutdown -s -t 60 60秒后关机
//2.如果输入 xxx 取消关机                                         shutdown -a 取消关机

//系统命令 库函数 system
int mainaaa()
{
    char input[20] = { 0 };
    system("shutdown -s -t 60");

again:   //标记

    printf("请注意，你的电脑在60s内关机，如果输入：xxx，取消关机\n");
    scanf("%s", input);
    if (strcmp(input, "xxx") == 0)
    {
        system("shutdown -a");
    }
    else
    {
        goto again;
    }



    return 0;
}