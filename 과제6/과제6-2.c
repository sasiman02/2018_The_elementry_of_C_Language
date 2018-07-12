#include<stdio.h>
int get_tax(int income)
{
	int r;
	if(income<=1000)
	{
		r=income*0.08;	
	}
	else
		r=income*.1;
	return r;	
} 
int main()
{
	int income,g_tax;
	printf("소득을 입력하시오(만원):");
	scanf("%d",&income);
	g_tax=get_tax(income);
	printf("소득세는 %d만원입니다.",g_tax);
	return 0;
}
