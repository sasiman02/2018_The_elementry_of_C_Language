#include<stdio.h>
#include<stdlib.h>
void print_menu();
void check_menu_number();
int main()
{
	print_menu();
	check_menu_number();

	return 0;	
} 
void print_menu()
{
	printf("1.�ܹ���\n");
	printf("2.ġ�����\n");
	printf("3.������ġ\n");
	printf("4.����\n");
	printf("���ϴ� �޴��� �����Ͻÿ�:");
}
void check_menu_number()
{
	int n;
	scanf("%d",&n);
	if(n>5)
	{
		print_menu();
		check_menu_number();
	}
	else if(n<4) 
	{
		printf("%d�� �޴��� ���õǾ����ϴ�.\n",n); 
		print_menu();
		check_menu_number();
	}
	if(n==4)
	{
		exit(1);
	}
}
