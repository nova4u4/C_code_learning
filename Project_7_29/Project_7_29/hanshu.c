#define _CRT_SECURE_NO_WARNINGS

int Add(int x, int y)          // �Զ��庯�� Add  ���Խ������ӷ�׵�����
{                                 // ����ֵ x y Ϊ���� ����ֵΪz int Add˵������ֵҲΪ����
    int z = x + y;
    return z;               // ��ʵֱ��  return(x+y);
}

int main05()
{
    int num1 = 0;   // ������ʼ��
    int num2 = 0;
    int sum = 0;
    printf("��������������:>");
    scanf("%d %d", &num1, &num2);
    sum = Add(num1, num2); // �Զ��庯��Add
    printf("sum = %d\n", sum);
    return 0;
}