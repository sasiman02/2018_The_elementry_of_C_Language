#include<stdio.h>
int main()
{
	char var;
	
	printf("문자를 입력하시오:");
	scanf("%c",&var);
	
	switch(var){
		case 'R':
			printf("Rectangle");
			break;
		case 'C':
			printf("Circle");
			break;
		case 'T':
			printf("Triangle");
			break;
		default :
			printf("Unknown");
			break;			
	}
	return 0;
 } 
