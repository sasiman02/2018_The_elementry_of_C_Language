#include<stdio.h>
int main(void)
{
	int i,a[]={10,20,30,40,50};
	int *p;
	p=a;
	for(i=0;i<5;i++)
	{
		printf("%d\n",(p+i));
	}
	return 0;
}
