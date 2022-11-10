/**********************************************************************************************************************
 FILE NAME : Array2.c
 DESCRIPTION : In this certain operation are performed on arrays like swapping the 0th index with the given index number,checking whether a character is vowel or not,
 	       removing all the vowels from a string and concatenating 2 strings. Here,main function is also present from which the execution starts.
 REVISION HISTORY :
 DATE                NAME                       REFERENCES                             REASON
 -----------------------------------------------------------------------------------------------------------------------
 5 NOV 2022      Yamabharathi                     new                          certain operations on 2D Array.
 ************************************************************************************************************************/

#include <two_d_array.h>               /*header information*/

char arr[][MAX_LEN]={"user1","user2","user3","user4"};                     /*2 dimensional array of length 20*/

/*********************************************************************************************************************
 *
 * FUNCTION NAME : swap_elements(char arr1[][MAX_LEN], int index)
 * DESCRIPTION : in this function,it swaps the 1st element with the array element with the index provided
 * RETURNS : character
 *
 * *******************************************************************************************************************/
char* swap_elements(char arr1[][MAX_LEN], int index)                       
{
	char swap[20];                                          /*an array of character datatype*/
	strcpy(swap, arr[0]);                                  /*copies the element at arr[0] with swap*/
	strcpy(arr[0],arr[index]);                             /*copies the element at arr[index] with arr[0]*/
	strcpy(arr[index],swap);                               /*copies the element at swap with arr[index]*/
			    
	for(int index = 0; index < 4; index++)
	{
		printf("%s \n", arr[index]);                  /*prints the elements in array*/
	}
			        
	return *arr;
}

/*********************************************************************************************************************
 *
 * FUNCTION NAME : isVowel(char v)
 * DESCRIPTION : in this function,it checks whether the given character is vowel or not.
 * RETURNS : integer
 *
 * *******************************************************************************************************************/
int isVowel(char v)
{
	if (v == 'a' || v == 'e' || v == 'i' || v == 'o' || v =='u' || v == 'A' || v == 'E' || v == 'I' || v == 'O' || v == 'U')  /* if v is equal to vowels,then return exit_success,else exit_failure*/
	{
		return EXIT_SUCCESS;
	}    
	else
	{
		return EXIT_FAILURE;
	}  
}

/*********************************************************************************************************************
 *
 * FUNCTION NAME : remove_vowel(char arr1[][MAX_LEN], int index
 * DESCRIPTION  :  In this function, it prints the string after removing all the vowels.
 * RETURNS : Character
 *
 *********************************************************************************************************************/
char *remove_vowel(char arr1[][MAX_LEN], int index)
{
	char large[MAX_LEN];                                  /*an array of type character*/
	int index1 = 0;                                       /*index1 is used as an indexing for large*/
	for(int x = 0; arr1[index][x] != '\0'; x++)
	{
		if(isVowel(arr1[index][x]) == 1)              /*if the condition satisfies, then array[index] is assigned to large[e]*/
		{
			large[index1] = arr1[index][x];
			index1++;
		}
	}
	large[index1] = '\0';                                  /*large[index1] is terminated here*/
	printf("After removing vowels %s\n",large);
	return '\0';	        
}

/*********************************************************************************************************************
 *
 * FUNCTION NAME :  mystrcat(const char* str1, const char* str2)
 * DESCRIPTION  :  In this function, it prints the concatenated strings. that is str1 is concatenated with str2.
 * RETURNS : Character
 *
 ********************************************************************************************************************/
char* mystrcat(const char* str1, const char* str2)
{
	int i = 0, j = 0;
	char* result = malloc(strlen(str1) + strlen(str2) + 1);         /*result is used to store the concatenated string*/
	while (*str1)                                            
       	{
		result[i++] = *str1++;                                 /*str1 is being stored in result*/
	}
	while (*str2) 
	{
		result[i + j++] = *str2++;                            /*str2 is being stored in result*/
	}
	result[i + j] = '\0';                                        /*if the indexing reaches to the end,then the result will be printed*/
	return result;
}

/*********************************************************************************************************************
 *
 * FUNCTION NAME : int display()
 * DESCRIPTION  :  In this function, it displays all the elements in the array as the way they are stored
 * RETURNS : int
 *
**********************************************************************************************************************/ 

int display()
{
	int x = 0;                                                /*x is used for indexing the array elements */
	for(x = 0; x < 4; x++)
	{
		printf("%s \n", arr[x]);
	}
	return EXIT_SUCCESS;                                    /* After the array elements reaches to the end,it exits successfully.*/
}

/*********************************************************************************************************************
 *
 * FUNCTION NAME : main()
 * DESCRIPTION  :  The program starts from main.
 * RETURNS : int
 *
**********************************************************************************************************************/

int main()
{
	int n;                                                    /*index value used to swap with the 1st element*/
	char a;                                                   /*user input character to see whether it is vowel or not*/
	printf ("Enter any letter:\n");
	scanf ("%c", &a);
	int e = isVowel(a);
	if(e == EXIT_SUCCESS)                                     /*To check whether the entered value is a vowel or nt*/
	{
		printf ("\nThe entered letter is a vowel\n");
	}
	else
	{
		printf ("\nThe entered letter is not a vowel\n");
	}
				        
	printf("The contents of array before swapping:\n");
	display();                                          /*displays all the array elements*/
					        
	printf("enter the index number:\n");    
	scanf("%d", &n);                                                            
	printf("The swapped element at given index is %s\n", swap_elements(arr, n));         /*it swaps the 1st element with the array at a given index*/
							     
	remove_vowel(arr, n);                    /*removes vowels from the given string*/
	 return EXIT_SUCCESS;
}

