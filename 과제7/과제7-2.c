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
	printf("1.햄버거\n");
	printf("2.치즈버거\n");
	printf("3.샌드위치\n");
	printf("4.종료\n");
	printf("원하는 메뉴를 선택하시오:");
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
		printf("%d번 메뉴가 선택되었습니다.\n",n); 
		print_menu();
		check_menu_number();
	}
	if(n==4)
	{
		exit(1);
	}
}
