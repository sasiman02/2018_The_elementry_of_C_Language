#include<stdio.h>
int main()
{
	int t,a;
	
	printf("현재 시간과 나이를 입력하시오(시간,나이):");
	scanf("%d %d",&t,&a);
	
	if(t<17){
		if(((a>=3)&&(a<=12))||(a>=65))
		{
			printf("요금은 25000원 입니다.");
		}
		else
		{
			printf("요금은 34000원 입니다.");
		}
	}
	else{
	printf("요금은 10000원 입니다.");
}
	return 0; 
}
