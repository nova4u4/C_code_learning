#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int maina1()  //����n�Ľ׳�
{
	int i = 1;  //��1��ʼ
	int n = 0;
	int ret = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) // ��=n����
	{
		ret = ret * i;
	}
	printf("%d", ret);
	return 0;
}




int maina2()   // ���� 1!+ 2!+ 3!+ ���� + 10!
{                        // ˫ѭ��Ƕ�� ʱ���ϸ���
	int j = 1;
	int sum = 0;
	int i = 1;

	for (j = 1; j <= 10; j++)
	{
		int ret = 1;   //ret����ѭ���� ���Ը�λ
		for (i = 1; i <= j; i++)
		{
			ret = ret * i;
		}
		sum = sum + ret;
	}
	printf("%d", sum);
	return 0;
}






int maina3()       // �Ż� 10�Ľ׳˾��� 9�Ľ׳�*10
{
	int i = 1;
	int ret = 1;
	int sum = 0;

	for (i = 1; i <=10; i++)
	{
		ret = ret * i;         //2�Ľ׳�=1�׳�*2  3�׳�=2�׳�*3
		sum = sum + ret;
	}

	printf("%d", sum);
	return 0;
}






int maina4()    //3. ��һ�����������в��Ҿ����ĳ������n����������ֲ��ң�

{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 }; //��������
	int k = 7; //��������7
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	
	for (i = 0; i < sz; i++)
	{
		if (arr[i] == k)
		{
			printf("�ҵ���,�±���%d\n", i);  //����±�
			break;
		}

	}
	  
	if (i == sz)
	{
		printf("�Ҳ���");
	}

	return 0;             //û����������������� ����Ҳ����
}





int maina5()      // ���ַ�����(�۰�) Ч�ʸ� �鿴һ�� ������ȥһ�󲿷�
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 }; //��������
	int k = 7; //��������7
	//����±�left  �ұ�right   �м��±�mid ȡƽ��ֵ����   ��0-9 ȡ�м�4  �±�4����5

	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);

	int left = 0;      //���±�
	int right = sz - 1;  //���±�  =����-1

	while (left <= right)
{
	// int mid = (left + right) / 2;  //�м��±�  ��������������
	// left��right����� ������ӿ������ ��һ�����յķ���

		int mid = left + (right - left) / 2;
		// ֻҪ����һ������� �򲻻����


	if (arr[mid] < k)  //��Ϊ���� �м��С��k ����һ�����Ұ벿�� ��ʱmid+1��Ϊ���±�
	{
		left = mid + 1;
	}

	else if (arr[mid] > k)
	{
		right = mid - 1;
	}
	else
	{
		printf("�ҵ��ˣ��±���%d\n", mid);
		break;
	}
}
	//�ظ�������� д��ѭ�� ��û�ҵ� ֱ��left>right����������ȿ��ܿ����ҵ�)
	if (left > right)
		printf("�Ҳ���");
	return 0;
}



#include<windows.h>
#include<stdlib.h>

int maina6()   // ��д���룬��ʾ����ַ��������ƶ������м��ۡ�
{
	// welcome to bit!
	// **************
	// w************!
	// we**********t!

	char arr1[] = "welcome to bit!!!!";
	char arr2[] = "##################";  //��arr1���ַ��滻arr���� ����ӡ

	// left right �±� left++  right--


	int left = 0;
	
	int right = strlen(arr1)-1;  //����һ ������strlen  �����±��һ

	//int right = sizeof(arr1) / sizeof(arr1[0])-2;

	
	//������ ע���ַ�����\0��β ��sizeof�±����
	
	// ��char buf[]={a b c}  ʵ�����ĸ�Ԫ�� a b c \0
	// ��strlen����Ϊ3         ��sizeof�ý��Ϊ4     ʵ���±�Ϊ2

	while (left<=right) // ���Ҳ����Ҫ������
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);  // ��ֹ��ӡ���� Sleep����(S��д) ��Ϣ1000ms  ͷ�ļ�windows.h
        
		// ֻ��һ�д�ӡ �Ǿ�ÿһ���������Ļ
		// cmd�� dir�г���ǰĿ¼�ļ�
		// ����ʹ��cls���
		system("cls");   //system�ǿ⺯�� ����ִ��ϵͳ����  ͷ�ļ� stdlib.h

		left++;
		right--;
	}

	printf("welcome to bit!!!!");
	return 0;
}



#include<string.h>

//��д����ʵ�֣���ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ��
//��ʾ��¼�ɣ�������ξ�����������˳�����
int mainaa()
{
	int i = 0;
	//�����������ַ���abcdef
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("����������:");
		scanf("%s", password);     //������Բ���Ҫȡ��ַ ��Ϊ��������ƾ��ǵ�ַ
		// if (password == "abcdef") �Ǵ���� �Ƚ��ַ���������==

		if (strcmp(password, "abcdef") == 0)       //strcmp �ַ����Ƚ� ��ȷ���0 ͷ�ļ�string.h
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
			printf("�������\n");
	}

	if (i == 3)
	{
		printf("�����������������˳�����\n");
	}
	return 0;
}