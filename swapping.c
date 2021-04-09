#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("enter a =");
	scanf("%d",&a);
	printf("enter b =");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nafter swapping now a =%d",a);
	printf("\nafter swapping now b =%d",b);
	getch();
}
