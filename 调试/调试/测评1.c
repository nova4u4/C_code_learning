#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//  1. ����С������


void min_bei(int a, int b)
{
	// a * i = b * j = x   ���ǹ�����
	// �ô��*j j++ ֱ�� j���Ա�a����
	int tmp = 0;
	if (b > a)
	{
		tmp = a;
		a = b;
		b = tmp;
	}

	int i = 1;
	while ((a * i) % b)
	{
		i++;
	}
	printf("%d ",i*a);
}

int main21()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
    min_bei(a, b);

	return 0;
}





// 2.�� ��һ�仰�ĵ��ʵ��� ���Ǳ�㲻���� �� i like beijing.  beijing. like i
#include<string.h>
#include<assert.h>

// Ϊ��reverse������ȫ�� Ҳ�����ڵ�����
// �������ֱ�Ӷ���Ϊ ʼĩ��ַ
void reverse(char *left, char *right)
{
	
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

int main321()
{
	// ˼·���Է�����  1.�ַ������� 2.ÿ����������  

	// i love you.   .uoy evol i     you. love i

	//1. ����
	char arr[101] = {0};  //�����пո� ������gets���ַ���
	gets(arr);  // ����arr��

	//2. ȫ��   
	char* left = arr;
	int n = strlen(arr);
	char* right = arr + n - 1;
	reverse(left,right);
	

	//3. ����ÿ������  ���һ�����ʽ�����־��\0

	char* start = arr;

	while (*start != '\0')
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')
		{
			end = end + 1;    //�ҵ��ո��ʱ�� ֹͣwhileѭ�� ���һ���ַ���endǰ�� ������Ҫ-1
		}

		reverse(start, end - 1);
		// ��һ������
		if (*end != '\0');
		end++;
		start = end;

	}

	printf("%s\n", arr);

	
	return 0;
}