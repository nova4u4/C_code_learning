#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

 // 结构体 是复杂的对象 难以用单一的数据类型描述 
// 就把单一的类型组合在一起描述

struct stu   //定义学生类型 包含name age sex tele
{
	char name[20];
	int age;
	char sex[10];
	char tele[12];

};

void print(struct stu* ps)
{
	printf("%s %d %s %s\n", (*ps).name, (*ps).age,(*ps).sex,(*ps).tele);
	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
	//两种用法相同 结构体指针变量->成员名
}

int main04()
{
	struct stu s = { "FUCK",20,"nan","15596668862" };
	printf("%s %d %s %s\n", s.name,s.age,s.sex,s.tele);
	//正常打印 不用按顺序 用子体 如s.name
    // 结构体对象.成员名
	//创建结构体 大括号 依次初始化 逗号隔开
	
	print(&s); //print函数 传递参数 取s地址

	return 0;
}