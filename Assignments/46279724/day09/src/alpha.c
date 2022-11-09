/***************************************************************************************************
 * FILENAME : alpha.c
 * DESCRPTION :This file defines required function for worker details.
 * REVISION HISTROY:
 * DATE                                NAME                           REFERENCE                                   REASON
 * ----------------------------------------------------------------------------------------------------------------------
 *  6 NOV 2022                       Sireesha                            new                           new code for user
 *  *********************************************************************************************/ 

/*****************************************************************************************
 *
 *
 *                       HEADER INFORMATION
 *
 *
 *******************************************************************************************/                       
#include<alpha.h>

char arr[][MAX_LEN]={"user1","user2","user3","user4"};        /* here we are using arr[][MAX_LEN] functions for array declaration*/
char* swap_elements(char arr1[][MAX_LEN], int index)           /* it swaps the elements in array*/
{
	char temp[20];                                        /*index is used for index of users in array*/
	strcpy(temp, arr1[0]);
	strcpy(arr1[0],arr1[index]);                         /*strcpy is used to copy the index and arr[0]*/
	strcpy(arr1[index],temp);

	for(int x = 0; x < 4; x++)
	{
		 printf("%s \n", arr1[x]);                   /*prints the min element*/
	}
	 return *arr1;
}

int isVowel(char x)                                            /*this function used to print vowels*/
{
	if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x =='u' ||x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U')
	{
		return EXIT_SUCCESS;                           /*if it is vowel exit success*/
	}
	 else
	 {
		 return EXIT_FAILURE;                        /*if it is not vowel exit failure*/
	 }
}
char *remove_vowel(char arr1[][MAX_LEN], int index)
{
	char large[MAX_LEN];                                 /*this function is user to remove vowel*/
	int e = 0;
	for(int x = 0; arr1[index][x] != '\0'; x++)            /*index is used for indexing the array*/
	{                               
		 if(isVowel(arr1[index][x]) == 1)
		 {
			   large[e] = arr1[index][x];         
			   e++;
		 }
	}
	 large[e] = '\0';
	 printf("After removing vowels %s\n",large);
}
char* mystrcat(const char* str1, const char* str2)           /*mystrcat is used to combine the str1 and str2*/
{
	 int i = 0, j = 0;
	 char* result = malloc(strlen(str1) + strlen(str2) + 1); /*allocate memory for str1 and str2*/
	 while (*str1)
	 {
		 result[i++] = *str1++; 
	 }
	  while (*str2) {
		   result[i + j++] = *str2++; 
	  }
	  result[i + j] = '\0';   /* prints the  null */
	  return result;
}
int display()
{
	 int x = 0;
	 for(x = 0; x < 4; x++)
	 {
		  printf("%s \n", arr[x]);     /*print the return success*/
		     }
	  return EXIT_SUCCESS;
}
int main()
{
	 int n;
	 char a;
	 printf ("Enter any letter:\n");     /*print the any letter we can given*/
         scanf ("%c", &a);
         int e = isVowel(a);                 /*it is a vowel gives success*/
	 if(e == EXIT_SUCCESS)
	 {
		 printf ("\nThe entered letter is a vowel\n");
	 }
	 else                                                  /* otherwise prints not a vowel*/
	 {
		  printf ("\nThe entered letter is not a vowel\n");
	 }
	 printf("The contents of array before swapping:\n"); /*before swapping elements*/
	 display();
	 printf("enter the index number:\n");   
	 scanf("%d", &n);                                                              
         printf("The swapped element at given index is %s\n", swap_elements(arr, n));  /*after swapping elements*/
	 remove_vowel(arr, n);
	 return EXIT_SUCCESS;                  /*exit success*/
}
	       

























