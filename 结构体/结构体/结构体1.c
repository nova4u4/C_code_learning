#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


// 结构是一些值的集合 这些值是成员变量  每个成员可以是不同类型
// 用于描述复杂对象


// 1.结构体的声明

struct peo       //定义结构体类型 则有了图纸 申请内存的时候 可以按图建房
{
	char name[20];
	char tele[12];
	char sex[5];
	int high;
}p1, p2;  //需要逗号  在定义完结构体后 创建该结构体类型的变量p1 p2  是全局变量

struct st  //结构体的嵌套
{
	struct peo p;
	int num;
	float f;
};

// 2.结构体传参

// 分为传结构体变量本身 / 传地址

void print1(struct peo* sp)
{
	printf("%s %s %s %d\n", sp->name, sp->tele, sp->sex, sp->high);
}

void print2(struct peo sp)
{
	printf("%s %s %s %d\n", sp.name, sp.tele, sp.sex, sp.high);
}




int main01()
{
	struct peo p4 = {0};   //尽量用局部变量
	struct peo p3 = { "张三","15596668862","男",181 };

	struct st s = { {"lisi","15596668888","女",166},100,3.14f };    //一个结构体一个{}
	// 浮点数在内存中不能精确保存

	printf("%s %s %s %d\n", p3.name, p3.tele, p3.sex, p3.high);
	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex, s.p.high, s.num, s.f);

	print1(&p3);
	print2(p3);
	return 0;
}


// 使用指针 则使用箭头访问
// 使用结构体变量 则用点访问