#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define pi 3.1415926
int main61() {

	//float r = 0.0f;//精度不够 改为double
	//float v = 0.0f;
	double r = 0.0;
	double v = 0.0;
	scanf("%lf", &r);       // % lf 
	v = 4 / 3.0 * pi * r * r * r;       // 4除以3 要有一边是浮点数 才会输出小数
	printf("%.3f\n", v);


	return 0;
}
