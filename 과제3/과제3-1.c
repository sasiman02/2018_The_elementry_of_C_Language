#include<stdio.h>
int main()
{
	int t,a;
	
	printf("���� �ð��� ���̸� �Է��Ͻÿ�(�ð�,����):");
	scanf("%d %d",&t,&a);
	
	if(t<17){
		if(((a>=3)&&(a<=12))||(a>=65))
		{
			printf("����� 25000�� �Դϴ�.");
		}
		else
		{
			printf("����� 34000�� �Դϴ�.");
		}
	}
	else{
	printf("����� 10000�� �Դϴ�.");
}
	return 0; 
}
