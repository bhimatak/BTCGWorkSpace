/* FILE NAME: prog02.c
 *
 * DESCRIPTION : check whether the given output is vowel or not and prints the name of index value
 *
 * HISTORY :
 *
 * DATE               NAME                    REFERENCE                REASON
 * ----------------------------------------------------------------------------
 *  05 NOV 2022     Charishma                  Sp101               new code
 *  
 *  ******************************************************************************/



#include "common.h"
char arr[][MAX_LEN]={"user1","user2","user3","user4"};
char* swap_elements(char arr1[][MAX_LEN],int index)
{
	char temp[20];
	strcpy(temp,arr1[0]);

	strcpy(arr1[0],arr1[index]);
	
	strcpy(arr1[index],temp);

	for(int x = 0; x < 4; x++)
	{
		printf("%s \n",arr1[x]);
	}
	return *arr1;
}
int isVowel(char x)
{
	if( x == 'a' || x == 'e' ||x == 'i' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U')
	{
		return EXIT_SUCCESS;
	}
	else
	{
		return EXIT_FAILURE;
	}
	
}
char* remove_vowel(char arr1[][MAX_LEN],int index)
{
	char large[MAX_LEN];
	int e ='0';

for(int x = 0;arr1[index][x]!='\0'; x++)
{
	if(isVowel(arr1[index][x]) == 1)
	{
		large[e] = arr1[index][x];
		e++;
	}
}
large[e] = '\0';

printf("After removingf vowels %s\n",large);
}

char* mystrcat(const char* str1,const char* str2)
{
	int i = 0;
	int j = 0;
	char* result = malloc(strlen(str1) + strlen(str2) + 1);

	while(*str1)
	{
		result[i++] = *str1++;
	}
	while(*str2)
	{
		result[i + j++] = *str2++;
	}
	result[i + j] = '\0';

	return result;

}
int display()
{
	int x = 0;
	for(x = 0;x < 4; x++)
	{
		printf("%s \n", arr[x]);
		return EXIT_SUCCESS;
	}
}

/*FUNCTION NAME : main
 *
 * DESCRIPTION : takes the user input and return SUCCESS if the requirements
 * 
 * *********************************************/
int main()
{
	int n;
	char a;
	printf("Enter any letter:\n");
	scanf("%c",&a);
	int e = isVowel(a);

	if(e == EXIT_SUCCESS)
	{
		printf("\n the entered letter is a vowel\n");
	}
	else
	{
		printf("\n The enetered letter is not a vowel\n");
	}
	printf("the contents of array before swapping: \n");
	display();

	printf("enter the index number :\n");
	scanf("%d", &n);
	printf("the swapped element at given index is %s\n",swap_elements(arr,n));
	remove_vowel(arr,n);
	return EXIT_SUCCESS;
}

