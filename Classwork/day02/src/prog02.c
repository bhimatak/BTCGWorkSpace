/*

if(cond)
{
	if block is executed, consists of multiple sts
}

ex: if(10 == 1)
{
	printf("\nHello");
}

printf("\nWorld");


if(cond)
{
	if block
}
else
{
	else block
}

main block


ex: 
if(10 == 1)
{
	printf("\nHi");	
}
else
{
	printf("\nHello");
}
printf(" Bhima");


else if ladder

if(cond1)
{
	block1
}

else if(cond2)
{
	block 2
}
else if(cond3)
{
	block 3
}
else
{
	else block
}

main block

*/


#include <common.h>


int main()
{
	int a;
	printf("\nEnter the value of a: ");
	scanf("%d",&a);

	if((a>=0)&&(a<=10))
	{
		printf("\na is between 0-10\n");
	}
	else if((a>=11)&&(a<=20))
	{
		printf("\na is between 11-20\n");
	}
	else if((a>=21)&&(a<=30))
	{
		printf("\na is between 21-30\n");
	}
	else if((a>=31)&&(a<=40))
	{
		printf("\na is between 31-40\n");
	}
	else
	{
		printf("\na is out of range\n");
	}

	printf("\nEnd of the Program\n");

	return 0;

}