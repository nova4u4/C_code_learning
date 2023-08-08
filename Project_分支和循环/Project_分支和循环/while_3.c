#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main06()
{
	// 举例 加入密码是字符串
	char password[20] = { 0 };
	printf("请输入密码:>");
	scanf("%s", password);  //举例说明 其实可以用scans 主要是循环解决缓冲区 密码已经不对了
	//getchar();//  读取了\n

	int ch = 0;
	while ((ch = getchar()) != '\n')
	{
		; // 空语句 继续读 从缓冲区拿出来就行
	}
	printf("请确认密码(Y/N):>");
	int ret = getchar();     //没有确认过程 直接输出NO了

	//原因 scanf也是从输入缓冲区获取数据 123456+回车   ——> 123456\n 将123456放入password
	// getchar————缓冲区中有\n 不等待 直接读取进ret  \n不等于Y
	// 因此在第十行放入一个getchar 拿走\n

	// 但是如果输入密码 abcd edfg  ————abcd edfg\n scanf读到空格就不读了
	// 然后getchar拿走空格  下面getchar读取edfg\n 从12行起修改

	// scanf接收字符串%s的话，在串首遇到空格的话，跳过，继续寻找下一个非空格字符，
	// 因此到空格结束   但是%c会读取空格
	if('Y' == ret)
	{
		printf("YES\n");
	}
	else
	{
	printf("NO\n");
 }


	return 0;
}