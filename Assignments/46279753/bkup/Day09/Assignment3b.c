/********************************************************************************** ** FILENAME : assignment3b.c
 **
 ** DESCRIPTION: This file find the vowel and takes input of index and swap the 
                        user
 ** 
 ** REVISION HISTORY :
 **
 ** DATE           NAME         REFERENCE                 REASON
 * --------------------------------------------------------------------------------
 ** 06-11-2022    SRIVANI        NEW       To print EXIT_SUCCESS&FAILURE for vowels
 **
 **
 ** Copyright @ 2022 Altran Group All Rights Reveresed
 * ******************************************************************************/
#include<stdio.h>/* header file */
#include<stdlib.h>/* header file*/
#include<string.h>/* header file*/ 
#define MAX_LEN 20 /* macro */
char arr[] [MAX_LEN]={"user1","user2","user3","user4"};
char * swap_elements (char arr1[] [MAX_LEN],int index)

{
	char temp[20];
	strcpy(temp, arr1[0]);/* string copy */
	strcpy(arr1[0], arr[index]);
	strcpy(arr1[index],temp);
	for(int p=0;p < 4; p++) /*for loop*/
	{
		printf("%s\n", arr1[p]); /* printf statement*/
	}
	return *arr1;/* return statement*/
}
int isVowel (char x)
{
	if( x == 'a' || x == 'e' || x == 'i' || x == 'o' ||  x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U' )
	{
		return EXIT_SUCCESS;/* return exit_success*/
	}
	else
	{
		return EXIT_FAILURE;/* return exit_failure*/
	}
}
char *remove_vowel (char arr1[] [MAX_LEN], int index)
{
	char large[MAX_LEN];
	int d= 0;
	for (int p=0; arr1[index][p] !='\0'; p++)
	{
		if(isVowel (arr1[index] [p]) ==1)
		{
			large[d] = arr1[index][p];
			d++;
		}
	}
	large[d] ='\0';
	printf("After removing  vowels %s\n",large);
}
int display() /*display function*/
{
	int p=0;
	for(p=0;p<4;p++)
	{
		printf("%s\n",arr[p]);
	}
	        return EXIT_SUCCESS;
}
int main()/*main function*/
{
	int n;
	char a;
	printf("Enter any letter: \n");
	scanf("%c", &a );
	int d = isVowel(a);
	if(d==EXIT_SUCCESS)
	{
		printf("\n The entered letter is a vowel\n");
	}
else
        {
                printf("\n The entered letter is not  a vowel\n");
        } 
        printf("The contents of array before swapping:\n");
        display();
        printf("enter the index number: \n");
        scanf("%d",&n);
        printf("The swapped element at given index is %s\n",swap_elements(arr,n));
        remove_vowel (arr,n);
        return EXIT_SUCCESS;
}





