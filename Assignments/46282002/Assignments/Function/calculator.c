#include <stdio.h>
#include <stdlib.h>
int add(int x,int y)
{
	int addition=0;
	addtion=x+y;
	printf("%d\n is addition",addtion);
}
int  subs(int x,int y)
{
	int substraction=0;
	substaction=x-y;
	printf("%d\n is subs",substraction);
}
int multi(int x,int y)
{
	int multiplication;
	multiplication=x*y;
	printf("%d is multi",multiplication);
}
int division(int x,int y)
{
	int div;
	div=x/y;
	printf("\n %d",div);
}
int main()
{
	int a;
	int b;
	printf("Enter number");
	scanf("%d",&a);
	printf("Enter number:");
	scanf("%d",&b);
	add(a,b);
	subs(a,b);
	multi(a,b);
	division(a,b);
	return 0;
}
