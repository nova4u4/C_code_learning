#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// һ.����ˮ�ɻ��Լ������� ����
int is_lily(int n)
{
    int x11 = 0;  //��λ�� 14 23 32 41
    x11 = n / 10000;
    int x12 = 0;
    x12 = n % 10000;

    int x21 = 0;  //��λ�� 14 23 32 41
    x21 = n / 1000;
    int x22 = 0;
    x22 = n % 1000;

    int x31 = 0;  //��λ�� 14 23 32 41
    x31 = n / 100;
    int x32 = 0;
    x32 = n % 100;

    int x41 = 0;  //��λ�� 14 23 32 41
    x41 = n / 10;
    int x42 = 0;
    x42 = n % 10;

    int product = x11 * x12 + x21 * x22 + x31 * x32 + x41 * x42;
    if (product == n)
        return 1;
    else return 0;
}


int mainkl1()
{

    int i = 0;
    for (i = 10000; i <= 99999; i++)
    {
        int ret = is_lily(i);
        if (ret == 1)
        {
            printf("%d ", i);
        }
    }
    return 0;
}


#include<math.h>

int maink12()
{
    int i = 0;
    
    for (i = 10000; i <= 99999; i++)
    {
        int sum = 0;
        int j = 0;
        for (j = 1; j <= 4; j++)
        {
            int k = (int)pow(10, j);    // pow�Ǵη����� ͷ�ļ�math.h  ����double ǿ������ת��Ϊint
            sum = sum + (i % k) * (i / k);

        }
        if (sum == i)
            printf("%d ", i);
    }

    return 0;
}





// 2.���������������в�ͬλ�ĸ���

// ���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ�� 

int maink22()
{
    int num1 = 0;
    int num2 = 0;
    scanf("%d %d", &num1, &num2);
    // �����λ��ͬ x86  ��� ͬ0 ��1
    int res = num1 ^ num2;
    // ͳ��res��1�ĸ��� ���ǲ�ͬλ������

    int sum = 0;
    int i = 0;
    for (i = 0; i < 32; i++)
    {
         //��λ���
        if ((res &(1 << i)))
            sum++;
    }
    printf("%d", sum);
    return 0;

}




// 3.ͳ�Ƹ�������һ���� ����ѭ��

int main3213()
{
    int num = 0;
    scanf("%d", &num);
    int i = 0;
    int count = 0;//����
    while (num)
    {
        count++;
        num = num & (num - 1);

        // ��  5:101    101 & 100     ֻ
    }
    printf("��������1�ĸ��� = %d\n", count);
    return 0;
}



// 4. ��ӡ���������Ƶ�����λ��ż��λ

// ��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������

void printji(int n)
{
    int i = 0;  //����λ��1/0�ʹ�ӡ1/0
    for (i = 31; i >= 1; i = i - 2)
    {
        printf("%d ", 1 & (n >> i));
    }
    printf("\n");
}

void printou(int n)
{
    int i = 0;  //����λ��1/0�ʹ�ӡ1/0
    for (i = 30; i >= 0; i = i - 2)
    {
        printf("%d ", (n >> i) & 1 );
    }
    printf("\n");
}

int main()
{
    int num = 0;
    scanf("%d", &num);
    printf("����λ\n");
    printji(num);
    printf("ż��λ\n");
    printou(num);
    
}