#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

 // �ṹ�� �Ǹ��ӵĶ��� �����õ�һ�������������� 
// �Ͱѵ�һ�����������һ������

struct stu   //����ѧ������ ����name age sex tele
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
	//�����÷���ͬ �ṹ��ָ�����->��Ա��
}

int main04()
{
	struct stu s = { "FUCK",20,"nan","15596668862" };
	printf("%s %d %s %s\n", s.name,s.age,s.sex,s.tele);
	//������ӡ ���ð�˳�� ������ ��s.name
    // �ṹ�����.��Ա��
	//�����ṹ�� ������ ���γ�ʼ�� ���Ÿ���
	
	print(&s); //print���� ���ݲ��� ȡs��ַ

	return 0;
}