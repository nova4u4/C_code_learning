#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// goto ���    ������ת�Ĺ��� 
// ��������˵ goto����Ҫ ����ĳЩ���Ϻ��� ����ֹ���Ƕ�׵Ľṹ���������ѭ��

int mainb1() 
{

again:

	printf("hehe\n");
	printf("haha\n");
	goto again;
	// ����goto����������������


	return 0;

}

int mainb2()    //�� ��������ѭ�� �������goto��� break break break̫���� gotoһ����λ
{
    //for (...)
    //    for (...)
    //    {
    //        for (...)
    //        {
    //            if (disaster)
    //                goto error;
    //        }
    //    }
    //��
    //    error :
    //if (disaster)
    //    // ����������

}
	
#include<string.h>

// �ػ����� 
//1.�������������� 1�����ڹػ��������������д��� shutdown -s�ػ�   shutdown -s -t 60 60���ػ�
//2.������� xxx ȡ���ػ�                                         shutdown -a ȡ���ػ�

//ϵͳ���� �⺯�� system
int mainaaa()
{
    char input[20] = { 0 };
    system("shutdown -s -t 60");

again:   //���

    printf("��ע�⣬��ĵ�����60s�ڹػ���������룺xxx��ȡ���ػ�\n");
    scanf("%s", input);
    if (strcmp(input, "xxx") == 0)
    {
        system("shutdown -a");
    }
    else
    {
        goto again;
    }



    return 0;
}