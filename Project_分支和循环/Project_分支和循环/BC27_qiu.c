#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define pi 3.1415926
int main61() {

	//float r = 0.0f;//���Ȳ��� ��Ϊdouble
	//float v = 0.0f;
	double r = 0.0;
	double v = 0.0;
	scanf("%lf", &r);       // % lf 
	v = 4 / 3.0 * pi * r * r * r;       // 4����3 Ҫ��һ���Ǹ����� �Ż����С��
	printf("%.3f\n", v);


	return 0;
}
