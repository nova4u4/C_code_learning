#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



//  ���ԵĻ�������
//  1.���ִ���
//  2.�Ը��롢�����ķ�ʽ�Դ�����ж�λ
//  3.ȷ�����������ԭ��
//  4.����������

// release �� debug ����     ���԰汾�ͷ��а汾
// debug�е�����Ϣ releaseû�� ���Ż��� �ڴ�С



int main01()
{
    int a = 0;
    printf("%d", a);

    // f9 �����ϵ� ���f5 ������������ѭ�� 
    // f10�����  f11���Խ��뺯��

    return 0;
}



// ����ʱ arr,10 ���Կ�arr��10��Ԫ��
// ���ڴ�ʱ ���Ե����ڴ����ʾ��Χ ����   ��Ķ����� ��ʾ��ʱ��ʮ������

//�鿴���ö�ջ(˭������˭)


//  �ֲ���������ջ���� 
//  ջ��ϰ����ʹ�øߵ�ַ ��ʹ�õ͵�ַ
//  �����������±����� ��ַ�ӵ͵���
// ���Խ�����ʱ ���ܷ�����ı�ԭ�ȶ������ 


void test2()
{
    printf("kkk\n");
}

void test1()
{
    test2();
}

void test()
{
    test1();
}



int main24()
{
    test();
    return 0;
}


int main232()
{
    int a = 10;
    int b = 20;
    int c = a + b;
    printf("%d\n", c);
    return 0;
}


#include<assert.h>

// �����Խ�void��Ϊchar* 
// ����Ŀ��ռ�ĵ�ַ 
// ������ʽ����  printf("%s",my_strcpy());
void my_strcpy(char* dest,const char *src) //const ��ֹԴ�ַ������ı�
{
    char* ret = dest;
    assert(src != NULL);   // ���� ����ʧ�ܻᱨ�� �ܺö�λ
    assert(dest != NULL);
    while (*dest++ = *src++)   //���
    {
        ;
    }
    return ret;
}

int main23112()
{
    char arr1[20] = "XXXXXXXXXXXX";
    char arr2[]   = "hello bit";
    // strcpy (Ŀ�ĵ� Դ) ���Դ�ַ�����\0һ�𿽱���ȥ
    // �����󴫿�ָ�� �����û����
    char* p = NULL;
    my_strcpy(arr1, arr2);
    printf("%s", arr1);
    
     return 0;
}



int maindsa1()
{
    const int num = 10;
    // num =20;  const���εĳ�������ֱ���޸�

   // int* p = &num;
   // *p = 20;      // ���������޸� ����


    //1.const�����Ǻ����
    
    // int const*p 
    const int* p = &num;  // ����const��ָ��Ҳ����

    // p = &n  pָ��Ķ�����ͨ��p���ı��� ��p���������ֵ���Ա�
    // Ҳ���Ƕ�����num��


    //2.const����*�ұ�

    //int * const p : ����ͨ��p�ı�pָ��Ķ��� û������num
    // ����p������ֵ���ܸı� ֻ��ָ��num

    printf("%d\n", num);
    return 0;

}





#include<assert.h>
int my_strlen(const char* str)  //��ֹstr���ı�
{
    int count = 0;
    assert(str);
    while (*str != '\0')   //��ֹ�����ÿ�ָ��
    {
        count++;
        str++;
    }
    return count;
}

int main()
{
    char arr[] = "hello bit";
    int len = my_strlen(arr);
    printf("%d\n", len);

    return 0;
}