#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//  1.�ݹ�: �ں��������� ֱ�ӻ����������
//  ����������ж���ظ�����
//  ˼����ʽ �Ǵ��»�С 



// 1.ջ�� : �ֲ����� �����β�  (ÿһ�κ������ö�����ջ������ռ�)
//          ����ݹ鲻�� ��stack overflow ջ���


// һ .���������������������������������ʱ�򣬵ݹ�㲻�ټ����� �������ݹ�
// �� .ÿ�εݹ����֮��Խ��Խ�ӽ��������������


// 1. ����һ���޷������� ��˳���ӡ��ÿһλ

// (1) ����д ˼·��ȡģ

// (2) �����ݹ�д �Ƚ���������ת��Ϊ�ظ�С����

// 1234 -- 123 4 ----12 3 4  ---1 2 3 4

void print1(unsigned int n)
{
	if (n > 9)     // ��Ҫ��������
	{
		print1(n / 10);
	}
	printf("%d ", n % 10);   // ��ӡ���һλ   
}

// ���� 1234    1234 > 9   n/10 ��Ϊ 123 123>9 ���� 12 > 9   ��Ϊ1 1<9  printf 
// ������ײ��print1���ý��� �ص� n=12��ʱ�� ��ӡ���һλΪ2 �ٻ�һ�� 3 4 ��ӡ����

int main231321()
{
	unsigned int num = 0;
	scanf("%u", &num);   // %u���޷�������
	print1(num);
	return 0;
	

	//while (num)
	//{
	//	printf("%d", num % 10);          // ȡģ �����һλ
	//	num = num / 10;                 // /10����λ��
	//}                                   // ����˳�򲻶�

}



// 2 .��д��������������ʱ���������ַ����ĳ��ȡ�(ģ��ʵ��strlen)

#include<string.h>


int my_strlen1(char *str)      //������ַ������ڴ����������� ��˴��������Ԫ�ص�ַ Ҳ����Ҫָ�����
{
    //ָ��a ���� ֱ��\0
	int count = 0;                 //���Ǵ�������ʱ���� ������Ҫ��
	while (*str != '\0')
	{
		count++;
		str++;  //������һ���ַ� 
	}

	return count;
}


// �ݹ����  len_abc = 1+len_bc = 2+len_c =3 +len \0 = 1+1+1+0;
int my_strlen2(char *str)
{ 
	if (*str != '\0')    //�ݹ�����ѭ���� ��Ϊ�����ڵ��úͻع�
	{
		return 1 + my_strlen2(str + 1);  //����++ �����ȴ����
	}
	else
		return 0;
	// ��ͼ���   ����a�ĵ�ַ a������\0 ����1+my_strlen �ݹ����my_strlen(str+1)
	// 2 .... 3.... ���һ�ε��� ��ַ��Ϊ\0 return 0 
	// ����return 0 1 1 1 ���return3


}

int main5_2()
{
	char arr[] = "abc";     // [a b c \0]
	int len = my_strlen2(arr);   //�ַ������ڴ���Ҳ��������� ��˴����Ҳ�����ַ���ַ
	printf("%d\n", len);

	return 0;
}




// 3.��n�Ľ׳ˡ��������������

//(1)����д

int main5_3_1()
{
	int n = 0;
	int res = 1;
	scanf("%d", &n);
	int i = n;
	for (i = n; i >= 2; i--)
	{
		res = res * i;
	}
	printf("%d", res);
	return 0;
}


// (2) �ݹ� 

//���� n�Ľ׳��� 4�Ľ׳� ���� 4*3�Ľ׳� =4*3*2�Ľ׳�
// ��һ���������� ��if
int fac(int n)
{
	if (n > 1)
	{
		return n * fac(n - 1);
	}
	else
		return 1;
}

int main_5_3()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fac(n);
	printf("%d", ret);
	return 0;
}




// 4.쳲��������� (�ݹ鲻һ����)   1 1 2 3 5 8 13 21

// ���n��쳲�������  Fib(n) = Fib(n-1)+Fib(n-2);

int Fib1(int n)
{
	if (n > 2)
		return Fib1(n - 1) + Fib1(n - 2);   //˫�ݹ� ����Ч�ʼ��� ����ʱ�䳤 (ָ�������)
	else               // ��Ϊû�д洢�õ������� �����ظ�����   40 - 39 38 --38 37  36 35--
		return 1;


}

int Fib2(int n)
{
	int a = 1;
	int b = 1;
	int c = 0;
	int i = 0;

	if (n <= 2)
		return 1;
	else
	{
		for (i = 3; i <= n; i++)
		{
			c = a + b;        //��λ����;
			a = b;
			b = c;
		}
	}
	return c;
}



int main4_1()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib2(n);
	printf("%d\n", ret);

	return 0;
}




// 5.ջ���            �ݹ��в�ι��� ջ��� stack overflow

void yichu(int n)
{
	if (n < 10000)
		yichu(n + 1);
}

int main5_1()
{
	yichu(1);
	return 0;
}     

//����ν�����������⣺
// 
//1. ���ݹ��д�ɷǵݹ顣
//2. ʹ�þ�̬����   �浽��̬�� ����ռ��ջ���ռ�



// 6.��ӡһ������ÿһλ(˳��)

// 1234  123 12 1
void printk(int n)
{
	if (n >= 10)
		printk(n / 10);
	printf("%d ", n % 10);
}
int main6_1()
{
	int num = 0;
	scanf("%d", &num);
	printk(num);
	return 0;
}


// 7. �ַ������򣨵ݹ�ʵ�֣�

//��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��(�浽������)
//Ҫ�󣺲���ʹ��C�������е��ַ�������������

// �ݹ�˼· 
// abcdefg  
// 1.��g��ֵ��a a��ֵ������ʱ���� ��gתΪ\0
// 2. strlen(arr+1)>=2 ��Ҫ���� ��ݹ�(��Ϊÿһ�εݹ�����ʱ���� tmp����Ӱ�� ���Կ��Է����
void reverse_string1(char* arr)
{
	int len = strlen(arr);
	char tmp = *arr;
	*arr = *(arr + len - 1);         // *(arr + len -1)�����һ��Ԫ�� ��Ϊlen������һ�� ����Ҫ��1
	*(arr + len - 1) = '\0';

	if (strlen(arr + 1) >= 2)       //strlen(arr+1) arr����Ԫ�ص�ַ ��arr+1���Ǵ�Ԫ�ص�ַ 
	{                           // ��ô����strlen�ǵ�/0��β ��ô������ʽ�ͻ��strlen(arr)��1
		reverse_string1(arr + 1);
	}
	*(arr + len - 1) = tmp;  // �ݹ���ٸ��� ���򲻻�����
}

#include<string.h>
//�ǵݹ� ��ʹ���±� ��������ָ��(��ָ���˾Ͷ���ָ��)
void reverse_string2(char* arr)
{
	char *left = arr;
	char *right = arr+strlen(arr)-1;   //��Ϊָ���д�ŵ����ַ� �����char
	char change = '0';
	while (left <= right)
	{
		change = *left;
		*left = *right;
		*right = change;

		left++;
		right--;
	}
}
int main7_1()
{
	char arr[10] = {"0"};
	scanf("%s", arr);
	reverse_string1(arr);//�����ǲ��������е��� ����ָ��(������������Ԫ�ص�ַ)
	printf("%s\n", arr);
	return 0;
}



// 8.дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��

// ˼·��֮ǰ���ÿλ��һ�� һ�������
// 1234  ��Ϊ123 sum=4    12 3+4  1 2+3+4

int DigitSum1(int n)
{
	if (n > 9)
		return DigitSum1(n / 10) + n % 10;
	else
		return n % 10;
}

int main8_1()
{
	int num=0;
	scanf("%d", &num);
	int ret = DigitSum1(num);
	printf("%d", ret);
	return;
}



// 9.�ݹ�ʵ��n��k�η�
// �ݹ�˼· n��k�η� = n��k-1�η�*n = n*n*n*n*n*n*n*n

int k_fang(int n, int k)
{
	if (k > 1)
		return k_fang(n, k - 1) * n;
	else
		return n;
}

int main()
{
	int n;
	int k;
	scanf("%d %d", &n,&k);
	int ret = k_fang(n,k);
	printf("%d��%d�η���%d", n,k,ret);

	return 0;
}