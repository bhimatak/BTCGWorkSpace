/*

1. Formated io sts
2. UnFormated io sts

1. -> printf, scanf, fprintf, fscanf, sprintf, sscanf....

printf(control string, args);

printf("%d", 10); 

2. -> gets, fgets, getc, putc, putchar, getchar



*/


#include <common.h>

int main()
{
	char ch;
	int chInt;

	ch = getchar();
	puts("\nValue scaned = ");
	putchar(ch);

	
	/*
	scanf("%d",&chInt);
	printf("\nValue scaned = %d and ", chInt);
	chInt = chInt * chInt;
	printf("Square of Value = %d\n",chInt);
*/

	return 0;
}

