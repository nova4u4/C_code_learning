#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


// �ṹ��һЩֵ�ļ��� ��Щֵ�ǳ�Ա����  ÿ����Ա�����ǲ�ͬ����
// �����������Ӷ���


// 1.�ṹ�������

struct peo       //����ṹ������ ������ͼֽ �����ڴ��ʱ�� ���԰�ͼ����
{
	char name[20];
	char tele[12];
	char sex[5];
	int high;
}p1, p2;  //��Ҫ����  �ڶ�����ṹ��� �����ýṹ�����͵ı���p1 p2  ��ȫ�ֱ���

struct st  //�ṹ���Ƕ��
{
	struct peo p;
	int num;
	float f;
};

// 2.�ṹ�崫��

// ��Ϊ���ṹ��������� / ����ַ

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
	struct peo p4 = {0};   //�����þֲ�����
	struct peo p3 = { "����","15596668862","��",181 };

	struct st s = { {"lisi","15596668888","Ů",166},100,3.14f };    //һ���ṹ��һ��{}
	// ���������ڴ��в��ܾ�ȷ����

	printf("%s %s %s %d\n", p3.name, p3.tele, p3.sex, p3.high);
	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex, s.p.high, s.num, s.f);

	print1(&p3);
	print2(p3);
	return 0;
}


// ʹ��ָ�� ��ʹ�ü�ͷ����
// ʹ�ýṹ����� ���õ����