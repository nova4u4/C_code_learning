#define _CRT_SECURE_NO_WARNINGS

int Add(int x, int y)          // 自定义函数 Add  可以解决程序臃肿的问题
{                                 // 输入值 x y 为整形 返回值为z int Add说明返回值也为整形
    int z = x + y;
    return z;               // 其实直接  return(x+y);
}

int main05()
{
    int num1 = 0;   // 尽量初始化
    int num2 = 0;
    int sum = 0;
    printf("输入两个操作数:>");
    scanf("%d %d", &num1, &num2);
    sum = Add(num1, num2); // 自定义函数Add
    printf("sum = %d\n", sum);
    return 0;
}