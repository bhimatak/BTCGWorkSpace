/******************************************************************************
keywords                :       gdb

File Name               :       gdb_sample_llist_1_0.c

Date of Creation        :       29//2007

Owner                   :       Sibu Cyriac

Date of Modification    :

Reason for modification :

Modifier                :

*******************************************************************************/

#include<stdio.h>
static void display(int i, int *ptr);

int main(void) 
{

      int x = 300;
      int *xptr = &x;

      printf("In main():\n");
      printf("   x is %d and is stored at %p.\n", x, &x);
      printf("   xptr points to %p which holds %d.\n", xptr, *xptr);

      display(x, xptr);
      display(x,xptr);
      return 0;
}
   
void display(int z, int *zptr) 
{
      
      *zptr = 2500;

      printf("In display():\n");
      printf("   z is %d and is stored at %p.\n", z, &z);

      *zptr = 100;

      printf("   zptr points to %p which holds %d.\n", zptr, *zptr);
}

