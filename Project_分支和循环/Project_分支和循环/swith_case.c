#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main02()
{
	//����϶� if else�ϸ��� ����switch case
	// �����з�Χ�� switch������

	// switch(���α��ʽ)
    // { ����� }    case 1: ��Ҫð��   if()���ӷֺ�
	// 
	// case��ֻ�ܸ��������ҳ��������ʽ �ַ����� ��Ϊ�ַ�����ascii�� Ҳ������
	// caseֻ�Ǿ�����ڣ���  ��Ҫbreak����  
	// ���� case3��ȥ ��������case5 6 7
	int n = 0;
	scanf("%d", &n);
	switch (n)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("weekday\n");   //case ���Բ�break ���ڶ����ͬһ������ �򻯴���
		break; 
	case 6:
	case 7:
		printf("weekend\n");
		break;       // ��̺�ϰ�� ���Ҳ����break ������д

	default:
		printf("ѡ�����"); // û��caseƥ��� ȫ������default ��һ���Ǻ�ϰ��
	}
	return 0;
}