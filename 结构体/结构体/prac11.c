#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



// 1.��ӡ���� 1 -- 13  ��Ϊ��������

int main02()
{
	// �ȴ�ӡ�ϰ벿��  ֻҪ��Ϊ �ո� *�ż��� ���治�ÿո���

	int line = 7;
	int i = 0;

	for (i = 0; i < line; i++)
	{
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}


	//�°벿��

	int line2 = 6;

	for (i = 0; i < line2; i++)
	{
		int j = 0;
		for (j = 0; j <i+1; j++)
		{
			printf(" ");
		}

		for (j = 0; j<11-2*i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}



int main03()
{
	//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ

	int mon = 0;
	scanf("%d", &mon);
	int sum = 0;
	int empty = 0;

	sum = mon;
	empty = mon;

	while (empty > 1)
	{
		sum = empty / 2 + sum;
		empty = empty / 2 + empty % 2;   // ���������Ҫ���� (�������п�ƿ)
	}
	printf("%d", sum);

	return 0;
}





// 3. �ַ������� (ʹ��ָ���±�)

void Reverse(char *str, int l)   // ��������������Ԫ�ص�ַ ��*��ʾ
{
	char* left = str;
	char* right = str + l - 2; // ��ȥ/0 ����һ��  �����strlen ��-1
	while (left < right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}

int main()
{
	char str[] = "hello bit";
	// ���������� scanf %s �����ո�ͽ���
	// ���Ӧ����gets()
	int length = (sizeof(str) / sizeof(str[0]));  // ����/0
	Reverse(str,length);
	/*int i = 0;
	for (i = 0; i < length; i++)
	{
		printf("%c", str[i]);
	}*/

	printf("%s\n",str);
	return 0;
}


// oj ���ܵ�ѭ������ д���ο�
//int main()
//{
//	char str[101] = { 0 };
//	while (gets(str))
//	{
//		Reverse1(str);
//		printf("%s\n", str);
//		memset(str, 0, sizeof(str) / sizeof(str[0]));
//	}
//	return 0;
//}