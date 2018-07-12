#include<stdio.h>
void Fibo();
int main()
{
	int n;
	printf("몇 번째 항까지 구할까요?");
	scanf("%d",&n);
	
	Fibo(n);
	return 0;
}
void Fibo(int x)
{
	int i,a=0,b=1,c;
	
	for(i=0;i<=x;i++)
	{
		c=a+b;
		printf("%3d",a);
		a=b;
		b=c;
	}
}
