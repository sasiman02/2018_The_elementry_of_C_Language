#include<stdio.h>
#define PI 3.141592
double cal_area(double radius)
{
	return PI*radius*radius;
}
int main()
{
	double r,c_a;
	printf("원의 반지름을 입력하시오.:");
	scanf("%lf",&r);
	c_a=cal_area(r);
	printf("원의 면적은 %lf입니다.",c_a);
	return 0;
}
