#include<stdio.h>
void Fibo();
int main()
{
	int n;
	printf("�� ��° �ױ��� ���ұ��?");
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
