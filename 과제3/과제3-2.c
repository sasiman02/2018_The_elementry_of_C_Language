#include<stdio.h>
int main()
{
	char var;
	
	printf("���ڸ� �Է��Ͻÿ�:");
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
