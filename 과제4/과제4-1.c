#include<stdio.h>
int main()
{
	int i,n;
	
	for(;;){
	printf("������ ����(����:-1):"); 
	scanf("%d",&n);
	if(n==-1)
		{
		break;
	}
	for(i=0;i<n-1;i++)
	{
		printf("*\n");
	}
}
	return 0;
}	
