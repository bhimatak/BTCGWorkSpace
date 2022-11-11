/*************************************************************************
 * *
 * *  FILE NAME    : 3b.c
 * *
 * *  DESCRIPTION  : Finds out the swap elements,isvowel,removevowel,stringcat,display strings
 * *
 * *  DATE            NAME          REFERENCE            REASON
 * *
 * *  03 NOV 2022     Lavanya         New             Initial Creation.
 * *
 * *  Copyright@2022, Aricent Technologies (Holdings) Ltd
 * **********************************************************************/
/**********************************************************************
 *  *             HEADER FILES  & MACROS                            * *
 *  *****************************************************************/
#include <3b.h>
#include<stdio.h>
#include<stdlib.h>
#define MAX_LEN 20
#include<string.h>

/******************************************************************************
 * *
 * *       Function Name   : Main
 * *       Description     : Demonstration of arrays
 * *       Returns         : Success or Failure
 * *
 * *******************************************************************************/ 
char arr[][MAX_LEN]={"user1", "user2", "user3", "user4"}; 
char* swap_elements (char arrl[][MAX_LEN], int index)
{
	char temp[20];
	strcpy(temp, arrl[0]);
	strcpy(arrl[0],arrl[index]); 
	strcpy(arrl[index],temp);
	for (int i = 0; i < 4; i++)
	{ 
		 printf("%s\n", arrl[i]);
	}
	return *arrl;
}
int isVowel (char x)
{
	if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == '0' || x == 'U')
	{
		 return EXIT_SUCCESS;
	}
	 else
		  {
			   return EXIT_FAILURE;
			    }
}
char *remove_vowel (char arrl[][MAX_LEN], int index)
{
	char large[MAX_LEN]; 
	int d = 0;
	for(int i = 0; arrl[index][i] != '\0'; i++)
	{
		 if(isVowel (arrl[index] [i]) == 1)
			  { 
				   large[d] = arrl[index][i];
				    d++;
				     }
	}
	large[d] = '\0';
	printf("After removing vowels %s\n", large);
}
int display()
{
	int i = 0; 
	for(i = 0; i < 4; i++) 
	{
		 printf("%s\n", arr[i]);
	}
	return EXIT_SUCCESS;
}
int main()
{
	int n;
	char a;
        char mystrcat;	
	printf ("Enter any letter: \n");
	scanf("%c", &a);
	int d = isVowel(a); 
	if(d == EXIT_SUCCESS)
	{ 
		 printf("\nThe entered letter is a vowel\n");
	}
	else
	{
		 printf ("\nThe entered letter is not a vowel\n");
	}
	printf("The contents of array before swapping:\n"); 
	display();
	printf("enter the index number: \n");
	 scanf("%d", &n); 
	 printf("The swapped element at given index is %s\n", swap_elements(arr, n));
	 remove_vowel (arr, n);
	 printf("the address of character is %p\n",&mystrcat);
	 return EXIT_SUCCESS;
}
