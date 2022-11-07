/***********************************************************
 * FILENAME : assign3b.c
 * 
 * DESCRIPTION: This file content application of character Array
 *   
 * Revision History :
 * DATE                NAME            REFERENCE          REASON
 * ----------------------------------------------------------------------
 * 05 NOV 2022         ANNAYASHA       DAY09      	 ARRAY OPERATION
 *    
 *       
 * Copyright 2010, Aricent Technologies (Holdings) Ltd
 *    
 ***********************************************************/

#include <common.h>

char arr[][MAX_LEN]={"user1", "user2", "user3", "user4"};

/*****************************************************
 * FUNCTION NAME: swap_elements
 * DESCRIPTION: this function swapping array elements
 * 
 * RETURNS: Success
 *****************************************************/

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

/*****************************************************
 * FUNCTION NAME: isVowel
 * DESCRIPTION: this function search vowel
 * 
 * RETURNS: Success
 *****************************************************/

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

/*****************************************************
 * FUNCTION NAME: removeVowels
 * DESCRIPTION: this function removeVowels
 *  
 * RETURNS: Success
 ******************************************************/

char *removeVowels (char arrl[][MAX_LEN], int index)
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

/*****************************************************
 * FUNCTION NAME: mystrcat
 * DESCRIPTION: this function concat two string array element
 * 
 * RETURNS: Success
 ******************************************************/

void mystrcat(char s1[], char s2[]) 
{
	char s3[100];
	int i = 0;
	int j = 0;
	while (s1[i] != '\0') 
	{
		s3[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0') 
	{		       
	   	s3[j] = s2[i];	
		i++;
		j++;
					       
       	}
	s3[j] = '\0';
	printf("concatenate string: %s\n",s3);
	
}

/*****************************************************
 * FUNCTION NAME: display
 * DESCRIPTION: traverse and display contents of array
 *    
 * RETURNS: Success
 *****************************************************/
int display()
{
	int i = 0; 
	for(i = 0; i < 4; i++) 
	{
		 printf("%s\n", arr[i]);
	}
	return EXIT_SUCCESS;
}

/**********************************************************
 * FUNCTION NAME: main
 * DESCRIPTION: this is main method where the program starts
 *    
 * RETURNS: Success
 ************************************************************/

int main()
{
	int n;
	char a; 
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
	removeVowels(arr, n);
	mystrcat(arr[0],arr[1]);
	return 0;
}
