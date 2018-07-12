#include<stdio.h>

int main()
{
	int age,height;
	
	printf("나이:");
	scanf("%d",&age);
	printf("키:");
	scanf("%d",&height);
	
	if((age>=10)&&(height>=140)){
		printf("타도 좋습니다");
	}
	else{
		printf("죄송합니다");
	}
 } 
