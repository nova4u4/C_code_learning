#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



// 逻辑操作符  && 逻辑与     || 逻辑或  与位操作符区分 不关心二进制

// && 左边为假 右边就不算了  
// || 左边为真 右边也不算了
int main46598()
{
    int i = 0, a = 1, b = 2, c = 3, d = 4;
    i = a++ && ++b && d++;  
    // a++ 先使用a=0   
    // 赋值操作符地位低 先算逻辑
    // 若a=0 后面与不用算了都为0  因此b d都不++  输出1 2 3 4
    // 若 a=1 正常计算       
    // 
    // 
    //i = a++||++b||d++;  或有1 则后面不用计算 肯定为1
    printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
    return 0;
}




// 2.条件操作符/三目操作符 exp1 ? exp2 : exp3



// 3.逗号表达式  exp1, exp2, exp3, …expN  从左向右依次执行。整个表达式的结果是最后一个表达式的结果。




// 4.. [ ] 下标引用操作符
//操作数：一个数组名 + 一个索引值

// arr[7] 和 7[arr] 等价



// 5. 结构体

struct Stu  //定义结构体Stu
{
    char name[10];
    int age;
    double score;
};

void set_stu(struct Stu *ps)
{
    strcpy((*ps).name, "zhangsan");
    (*ps).age = 20;
    (*ps).score = 100.0;

    //  (*ps).name (结构体对象.成员 ) 等价于  ps->name    (结构体指针->成员)
}

void print_stu(struct Stu* ps)
{
    printf("%s %d %.2lf\n", ps->name, ps->age, ps->score);

}

int main23141()
{
    struct Stu s = { 0 };
    set_stu(&s);      // 类似数组 如果直接复制浪费空间 因此用指针
    print_stu(&s);
    return 0;
}
