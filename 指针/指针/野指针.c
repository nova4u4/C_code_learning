#define _CRT_SECURE_NO_WARNINGS
//
//
//
//
//// ��� Ұָ�����ָ��ָ���λ���ǲ���֪�ģ�����ġ�����ȷ�ġ�û����ȷ���Ƶģ�
//
//
#include <stdio.h>
//
//int main21()
//{
//    int* p;//�ֲ�����ָ��δ��ʼ����Ĭ��Ϊ���ֵ
//    *p = 20;
//    return 0;
//}
//
//
//int main22()
//{
//    int arr[10] = { 0 };
//    int* p = arr;
//    int i = 0;
//    for (i = 0; i <= 11; i++)
//    {
//        //��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
//        *(p++) = i;
//    }
//    return 0;
//}
//
//
//
//int* test()
//{
//    int a = 10;   //�����a����ʱ���� ��test������������
//    return &a;     //��Ȼ��Ȼ�������ַ ���ǲ�һ������������ (�粻������0
//}
//
//int main23()
//{
//    int* p = test();
//
//    return 0;
//}
//
//
//
//
// // ��α���Ұָ�� 
//
//int main24()
//{
//    int a = 10;
//    int b = 0;
//    int* p = &a;
//
//  //  int* p2 = NULL;   //  (�����Ͼ���0)
//  //   *p2 = 100;      //err ��0��ַ���ܷ��� û��ָ����Ч�ռ�
//
//    // ���һ���÷�����
//
//    int* p3 = NULL;
//
//    if (p3 != NULL)
//    {
//        *p3 = 100;
//    }
//
//
//}
//
//
//
//// һ.ָ��Ӽ�����
//
//#define N_VALUES 5
//int main25()
//{
//    float values[N_VALUES];
//    float* vp;   //û�н����� Ұָ��û��ϵ
//
//    //ָ��+-������ָ��Ĺ�ϵ����
//    for (vp = &values[0]; vp < &values[N_VALUES];)
//    {
//        *vp++ = 0;   // *vp = 0   vp++
//    }
//
//}
//
//int main26()
//{
//    int arr[10] = { 0 };
//    int i = 0;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//
//   /* for (i = 0; i < sz; i++)   //����д��
//    {
//        arr[i] = 1;
//    }*/
//
//
//    int* p = arr;    //ָ��д��1
//    for (i = 0; i < sz; i++)
//    {
//        *p = 1;
//        p++;
//    }
//    
//    int* p = arr;   //ָ��д��2
//    for (i = 0; i < sz; i++)
//    {
//        *(p + i) = 1;
//    }
//}
//
//
//
//
//// ��. ָ��-ָ��
//
//// ָ�� - ָ�� �õ��ľ���ֵ��ָ���Ԫ�ظ��� 
//
//// ָ��ͬһ��ռ��ָ�������������
//
//int main27()
//
//{
//    int arr[10] = { 0 };
//    printf("%d\n", &arr[9] - &arr[0]);
//    // ����� 9  9��Ԫ��
//    return 0;
//}


int my_strlen(char *str)
{
    char* start = str;
    while (*str != '\0')
    {
        str++;
    }
    return (str - start);

}


int main28()
{
    int len = my_strlen("abcdef");
    printf("%d\n",len);

    return 0;
}

int main29()
{
#define N_VALUES 5
    float values[N_VALUES];
    float* vp;
    for (vp = &values[N_VALUES]; vp > &values[0];)
    {
        *--vp = 0;
    }
}

// �涨 ����ָ������Ԫ�ص�ָ�� �����һ��Ԫ�غ��λ�ñ� 
// ���ܺ͵�һ��Ԫ��֮ǰ�ı�




// ��. ����ָ��

// ָ�����Ҳ�Ǳ������Ǳ������е�ַ�����ڶ���ָ�������

int main210()
{
    int a = 10;
    int* pa = &a;
    int** ppa = &pa;

    ** ppa = 20;
    printf("%d\n", a);
    return 0;
}



// ��. ָ������
// ���ָ�������



int main31312()
{
    int a = 0;
    int b = 0;
    int c = 0;
    
    int arr[10];

    int* pa = &a;
    int* pb = &b;
    int* pc = &c;

    int* parr[10] = { &a,&b,&c };   //ָ������
    

    int arr1[4] = { 1,2,3,4 };
    int arr2[4] = { 2,3,4,5 };
    int arr3[4] = { 3,4,5,6 };

    int* parr1[3] = { arr1,arr2,arr3 };  // ͨ��ָ�����һά����
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        int j = 0;
        for (j = 0; j < 4; j++)
        {
            printf("%d ", parr1[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}