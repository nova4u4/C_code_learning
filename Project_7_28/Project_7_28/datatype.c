// �������� ���������� 
// ������ ���� �ַ���  ������ϸ��

#include<stdio.h>

int main02()
{
    // printf("%d\n",100) // ��ӡ���� ��������Ϊ100

	printf("%zu\n", sizeof(char)); //�ַ�  1�ֽ�    
	// sizeof(char) ����char�����������ڴ���ռ�ռ��С
	printf("%zu\n", sizeof(short));   //������  2�ֽ�  
	// �� %d����  %zu�Ǵ�ӡһ��sizeof���ص��޷�������
	printf("%zu\n", sizeof(int));    //����  4�ֽ�
	printf("%zu\n", sizeof(long));   // ������   4�ֽ�
	// c���Թ涨 sizeof(int) <= sizeof(long)
	printf("%zu\n", sizeof(long long));  //�������� 8�ֽ�
	printf("%zu\n", sizeof(float));  //�����ȸ����� 4�ֽ�
	printf("%zu\n", sizeof(double)); //˫���ȸ�����  8�ֽ�

	//������е�λ
	// ����bitΪ��С��λ 0/1 
	// byte �ֽ� һ���ֽ�Ϊ8λ2����   1byte=8bit     kb mb tb pb (��1024�� 2��10�η�)
	// һ�������ֽ� 

	int age = 20;
	double price = 66.6;  //���� ͨ���������� ���ڴ�����ռ�͵�ַ �������
	return 0;
}