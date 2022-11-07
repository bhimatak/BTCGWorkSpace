#include <common.h>
/*******************************************************************************
 ** FILE NAME  : Prog.c
 **
 ** DESCRIPTION : This file defines the function which send external message for Refer.
 **
 ** Revision History :
 ** DATE            NAME              REFERENCE            REASON
 ** ----------------------------------------------------------------------
 ** 04 NOV 2022    TEJA SRI           ARRAY                 NEW CODE
 **
 **
 ** Copyright @ 2022 Capgemini All Rights Reserved
 **
 *****************************************************************************************/

/********************************************************************************************  
 ** FUNCTION NAME : SWAP_ELEMENTS , ISVOWEL , MYSTRCAT ,REMOVE_STRING AND PRINTARRAY
 ** 
 ** DESCRIPTION : This function return the "ARRAY"
 **
 ** RETURN : This function return swap values, checking vowel ,removing vowel and print array
 **
 **
 *******************************************************************************************/
#define MAX 100
#define MAX_LEN 20
int isVowel(char c);
void printarray(int *arr,int n);
char *mystrcat(char *s1, char *s2);
char *swap_elements(int arr[],int index);  /*Header file*/
char *remove_string(char str);
char arr[][MAX_LEN]={"user1","user2","user3","user4"};
int main()
{

	int arr[10];/*int data type of array*/
	char *ivwl; /*int data type to store result for function*/
	int index;  /*int data type to store index*/
	char *swap; /*char data type with pointer*/
	char s;     /*char data type*/
	char c;     /*char data type to get character*/
	int isvwl;  /*int data type to store result for function*/
	int size;   /*int data type to specify size*/
	char str1[50],str2[50];/*char data type to store string*/
	isvwl = isVowel(c);
	swap = swap_elements(arr,index);  /*calling swap function*/
	ivwl = remove_string(c);
	mystrcat(str1,str2);
	printf("Enter size\n");
	scanf("%d",&size);
	int arr1[size];
	printf("Enter elements:\n");
	for(int i=0;i<size;i++)
		scanf("%d",&arr1[i]);
	int n = sizeof(arr1) / sizeof(arr1[0]);
	printarray(arr1, n);
	return 0;
}

char *swap_elements(int arr[10],int index)
{
	int temp =0;  /*int data type initilize to zero*/
	int i=0;      /*int data type initilize to zero*/
	int n;        /*int data type used for length*/
	int *ptr = &arr[index];
	printf("\n This is swaoing function\n");
	printf("Enter the number of elements: \n");
	scanf("%d", &n);
        printf("\nEnter elements\n");	
      	for(int i=0;i<n;i++)			
	{	
	        scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("The elements are: %d\n",arr[i]);
	}
	printf("Enter index :\n");
	scanf("%d", &index);
	if(index > n-1)
	{
		printf("\nenter valid index.\nShould not be more then size\n");
	}
	else if(index !=0 && index > 0)
	{
		temp =arr[i];            /*for interchanging we declared it*/
		arr[i]= arr[index];
		arr[index]=temp;
		printf("After swaping arr[i]:%d \n",arr[0]);
		printf("arr[index] %d\n",arr[index]);
	}
	else
	{
		printf("Invalid Index");
	}
	printf("\nThe pointer value is: %p\n",(int *) &ptr);
}

int isVowel(char c)
{

	int s=0;   /*int data type*/
	int l_vowel, u_vowel;  /*int data type to specify vowel*/
	printf("checking character is vowel or not\n");
	printf("Enter an alphabet: ");
	scanf("%c",&c);
	l_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
	u_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
	if( l_vowel || u_vowel)
	{
		printf("%c is a vowel.",c);
		printf("\nEXIT_SUCCESS\n");
	}
	else
	{
		printf("%c is a constant.",c);
		printf("\nEXIT_FAILURE\n");
	}
	return 0;
}


int is_Vowel(char str)
{


	if(str == 'a' || str == 'e' || str == 'i' || str == 'o' || str == 'u' || 
			str == 'A' || str== 'E' || str== 'I' || str== 'O' || str== 'U')
		return 1;
	return 0;
}
char *remove_string(char ch)
{
	char c[1000];   /*char data type with c array*/
	char str[1000]; /*char data type with string array*/
	int s=0;        /*int data type */
	int d=0;        /*int data type*/
	printf("To remove vowels in string\n");
	printf("Enter a string\n");
	scanf("%s",c);
	for(s=0;c[s]!='\0';s++)
	{
		if(is_Vowel(c[s]) == 0)
		{
			str[d] = c[s];
			d++;
		}
	}
	str[d] = '\0';
	strcpy(c,str);
	printf("\nfinalstring:%s\n",c);
	return 0;
}

char *mystrcat(char *s1, char *s2 ) 
{
	char str1[50], str2[50], i, j;/*char data type*/
	printf("\n swaping string 1 and string 2\n");
	printf("Enter first string:");
	scanf("%s",str1);
	printf("Enter second string: ");
	scanf("%s",str2);
	printf("Address of string1: %p\n",&str1);
       	for(i=0; str2[i]!='\0'; ++i); 
	for(j=0; str1[j]!='\0'; ++j, ++i)
	{
		str2[i]=str1[j];
	}
	str2[i]='\0';
	printf("Output: %s\n",str2);
	return 0;
}

void printarray(int* arr, int n)
{
	    int i;/*int data type*/
	    printf("\n Array display\n");
	    printf("Array: ");
	    for (i = 0; i < n; i++) 
	    {
		    printf("%d ", arr[i]);
	    }
	    printf("\n");
}
 

