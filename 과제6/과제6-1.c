#include<stdio.h>
#define PI 3.141592
double cal_area(double radius)
{
	return PI*radius*radius;
}
int main()
{
	double r,c_a;
	printf("���� �������� �Է��Ͻÿ�.:");
	scanf("%lf",&r);
	c_a=cal_area(r);
	printf("���� ������ %lf�Դϴ�.",c_a);
	return 0;
}
