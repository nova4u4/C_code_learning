#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
// 1. ͨ������������ʽ дһ�����룺��ӡ100~200֮�������

int is_prime(int n)
{
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)
	{
		if (n % j == 0)
			return 0;     //�������� ����0 �������Ӱ��ѭ���� ����Ҳ����Ҫ�ж���
	}
	return 1;
}

int main31()
{

	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount=%d", count);
	return 0;
}


//  2.���ô�ӡ1000-2000������


is_leap_year(int y)   // �������ֺ������ܵ�һ   ���ھ� �����
{
	if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
		return 1;
	else
		return 0;
}


int main32()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (is_leap_year(year))
			printf("%d ", year);
	}
	return 0;
}


// 3.���ֲ���


int binary_search(int arr[], int k, int sz)  // arr��������ָ�� ���������Ҫ�ں����ڲ�
{
	int left = 0;
	int right = sz - 1;
	
	
	while(left<=right)
	{
		int mid = left + (right - left) / 2;//����д����ֹ���
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}

}

int main33()  //�βκ�ʵ�ε����ֿ�����ͬҲ���Բ�ͬ
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };  
	int k = 7;

	int sz = sizeof(arr) / sizeof(arr[1]);
	// ���Ҫ������������  ���鴫�β������ ֻ����Ԫ�ص�ַ�Ź�ȥ ��ֹ�ڴ��˷�
	// arr���������Ϊָ�����

	int ret = binary_search(arr, k, sz);  // ȥarr�в�k ������
		// �ҵ��˷����±�
		// �Ҳ��� ����-1 ��Ϊ0�������±�
	if (ret == -1)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ��ˣ��±���%d\n", ret);   //��д�꺯������ ����������� ��д������
	}
	return 0;
}


//  c99���� bool���� ��ʾ���   ��Ҫͷ�ļ� stdbool.h
//   true / false


// 4.дһ������ ÿ����һ�� num����1
void Add1(int* p)
{
	(*p)++;
}

int main34()
{
	int num = 0;
	Add(&num);  //�ı�������� ȡ��ַ
	printf("%d\n", num);
	return 0;
}