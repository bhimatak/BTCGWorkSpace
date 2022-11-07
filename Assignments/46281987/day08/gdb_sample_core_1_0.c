/***********************************************************************
keywords		:	gdb core

File Name		:	gdb_sample_core_1_0.c

Date of Creation	:	29/06/2007

Owner			:	Sibu Cyriac

Date of Modification	:	05-NOV-2022

Reason for modification	:

Modifier		:	ANNAYASHA

*******************************************************************************/   

#include<stdio.h>

static void display(int i, int *ptr);

/***********************************************************************
 * 	
 * 	Function to display value and its address
 *
 ************************************************************************/
void display(int z, int *zptr)
{

	*zptr = 2500;
	zptr = NULL;
	printf("In display():\n");
	printf("   z is %d and is stored at %p.\n", z, &z);
	printf("   zptr points to %p which holds %d.\n", zptr, *zptr);
}   

/***********************************************************************
 *
 * 	main function
 *
 * ***********************************************************************/
int main(void) 
{

	int x = 5;
	int *xptr = &x;
	printf("In main():\n");
	printf("   x is %d and is stored at %p.\n", x, &x);
	printf("   xptr points to %p which holds %d.\n", xptr, *xptr);
	display(x, xptr);

	return 0;
}
   

