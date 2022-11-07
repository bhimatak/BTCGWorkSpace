 /**************************************************************************************
  * ************************************** 
 FILENAME :DAY9.C
 * DESCRAIPTION : This file defines the required operations input array max length
 * * REVISION History :
 * * DATE        NAME              REFERENCE        REASON 
 * * --------------------------------------------------------------------------------
 * *  5 oct 2022   siri             NEW             To print user details
 * *
 *  *
 *  *  Copyright @2022 Altran Group All Rights Reserved
 *  *  **************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_LEN 20
 /*****************************************************************************************
  ** *********************
  ** FUNCTION NAME : MAX LEN OF SWAP ELEMENTS IN ARRAY
  ** DESCRIPTION : This function  takes user1, user2, user3, user4 and swap the elements.
  * * RETURN : SUCCESS
  * * *********************************************************************************
  * * ********************/

 char arr[][MAX_LEN]= { "user1", "user2", "user3", "user4"};
 char* swap_elements(char arrl[] [MAX_LEN], int index)
{
	  char temp[20]; /* this cahr data type  */
	   strcpy(temp, arrl[0]);
	   strcpy(arrl[0], arrl[index]);
	   strcpy(arrl[index],temp);
           for (int i =0; i< 4; i++)
	    {
		  printf("%s\n",arrl[i]); /* prints the content*/
	     }
	 return *arrl;
}
int isVowel (char x)
{
		if (x == 'a' || x =='e'|| x == 'i' || x =='o'|| x == 'u' || x =='A'|| x =='E'|| x =='I'|| x =='O'|| x =='U')
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
		char large[MAX_LEN];/* This is char data type*/
	        int d = 0;/* This is int data type*/
		for(int i =0; arrl[index][i] != '\0'; i++)
		  {
			 if(isVowel (arrl[index] [i]) ==1)
			   {
				 large[d] = arrl[index] [i];
				  d++;
			   }
		}
		large[d] = '\0';
		printf("After removing vowels %s\n ", large);/* prints the content*/
}
int display()
{
   int i = 0;/* This is int data type*/
  for(i =0 ;i< 4; i++)
   {
	printf("%s\n", arr[i]);/*prints the content*/
  }
 return EXIT_SUCCESS;
}
int main()
{
   int n;/* This is int data typr*/
  char a;/* This is char data type*/
  printf ("Enter any letter : \n");/*prints the content*/
 scanf("%c", &a);/* scan the variable*/
 int d = isVowel(a);
 if( d == EXIT_SUCCESS)
  {
	printf("\n The entered letter is  a vowel\n");/*prints the content*/
  }
 else
 {
     printf("\n The entered letter is not  a vowel\n");/*prints the content*/
  }
  printf(" The contents of array before swaping:\n");/*prints the content*/
  display();
  printf(" enter the index number: \n");/*prints the content*/
  scanf(" %d", &n);/*scan the variable*/
  printf("The swapped element at given index is %s\n",swap_elements(arr, n));/*prints the content*/
  remove_vowel (arr, n);
 return EXIT_SUCCESS;
}

