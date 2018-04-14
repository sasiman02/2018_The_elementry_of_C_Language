#include<stdio.h>

int main()
{
	int x,y,z;
	
	scanf("%d %d %d",&x,&y,&z);
	
	if((x>y)||(x>z)){
		if(y>z){
		printf("%d",z);
	}
		else{
			printf("%d",y);
		}
		
	}
	else{
		printf("%d",x);
	}
	return 0;
}
