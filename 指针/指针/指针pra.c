#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>




// int i;
int main31()        // �������  int i û�г�ʼ�� Ĭ��ֵΪ0��
//  sizeof������޷�������  ��˱Ƚϵ����ұ���Ҫ�����޷�������
//   -1 ���޷������κܴ�
{
    int i=0;
    i--;
    if (i > sizeof(i))
    {
        printf(">\n");
    }
    else
    {
        printf("<\n");
    }
    return 0;
}




// 2.�������
// ��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�

// ���磺2 + 22 + 222 + 2222 + 22222

int main32()
{
    int a = 0;
    int n = 0;
    int i = 0;
    int sum = 0;
    int tmp = 0;


    scanf("%d%d", &a, &n);

    for (i = 0; i < n; i++)
    {
        tmp = tmp * 10 + a;
        sum = sum + tmp;

    }

    printf("%d\n", sum);
    return 0;
}



// 3.ʹ��ָ���ӡ��������

//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣 arr��һ������һά���顣


int main()

{
    int arr[5] = { 2,3,4,5,6 };

    int* p = arr;

    int i = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < sz; i++)
    {
        printf("%d ", *(p + i));
    }




    return 0;

}