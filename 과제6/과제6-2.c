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
	printf("�ҵ��� �Է��Ͻÿ�(����):");
	scanf("%d",&income);
	g_tax=get_tax(income);
	printf("�ҵ漼�� %d�����Դϴ�.",g_tax);
	return 0;
}
