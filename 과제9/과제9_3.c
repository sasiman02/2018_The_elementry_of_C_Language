#include<stdio.h>
void get_sum_diff(int x,int y,int* p_sum,int* p_diff);
int main()
{
	int x,y,diff,sum;
	
	scanf("%d %d",&x,&y);
	
	get_sum_diff(x,y,&sum,&diff);

	printf("Че = %d Тї = %d\n",sum,diff);
	
	return 0;
}
void get_sum_diff(int x,int y,int* p_sum,int* p_diff)
{
	*p_sum = x+y;
	*p_diff = x-y;
}
