#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



// �߼�������  && �߼���     || �߼���  ��λ���������� �����Ķ�����

// && ���Ϊ�� �ұ߾Ͳ�����  
// || ���Ϊ�� �ұ�Ҳ������
int main46598()
{
    int i = 0, a = 1, b = 2, c = 3, d = 4;
    i = a++ && ++b && d++;  
    // a++ ��ʹ��a=0   
    // ��ֵ��������λ�� �����߼�
    // ��a=0 �����벻�����˶�Ϊ0  ���b d����++  ���1 2 3 4
    // �� a=1 ��������       
    // 
    // 
    //i = a++||++b||d++;  ����1 ����治�ü��� �϶�Ϊ1
    printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
    return 0;
}




// 2.����������/��Ŀ������ exp1 ? exp2 : exp3



// 3.���ű��ʽ  exp1, exp2, exp3, ��expN  ������������ִ�С��������ʽ�Ľ�������һ�����ʽ�Ľ����




// 4.. [ ] �±����ò�����
//��������һ�������� + һ������ֵ

// arr[7] �� 7[arr] �ȼ�



// 5. �ṹ��

struct Stu  //����ṹ��Stu
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

    //  (*ps).name (�ṹ�����.��Ա ) �ȼ���  ps->name    (�ṹ��ָ��->��Ա)
}

void print_stu(struct Stu* ps)
{
    printf("%s %d %.2lf\n", ps->name, ps->age, ps->score);

}

int main23141()
{
    struct Stu s = { 0 };
    set_stu(&s);      // �������� ���ֱ�Ӹ����˷ѿռ� �����ָ��
    print_stu(&s);
    return 0;
}
