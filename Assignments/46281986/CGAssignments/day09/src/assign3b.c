/*****************************************************************************************************************
 ** FILENAME : assign3b.c

 ** DESCRIPTION : This file defines required functions to perform given operations on input array

 ** REVISION HISTORY:
 ** DATE              NAME                       REFERENCE                       REASON
 ** --------------------------------------------------------------------------------------------------------------
 * 3 Nov 2022    Sushree Ranjita Panda              NEW                         New Code To perform given operations
 **
 ** **************************************************************************************************************/
#include<common.h>

/************************************************************************************************
 ** FUNCTION NAME : swap_elements()
 
 ** DESCRIPTION : This function swaps the content of first element with contents of element at  given index

 ** RETURNS : a pointer to the element at given index
 ** **************************************************************************************************/
char *swap_elements(char a[][MAX_LEN],int i)
{
	char *s=(char *)malloc(MAX_LEN);    /*s is a pointer of type char*/
	strcpy(s,a[i]); 
	strcpy(a[i],a[0]);
	strcpy(a[0],s);
	s=a[i];
	return s;
}
/************************************************************************************************
 ** FUNCTION NAME : isVowel()

 ** DESCRIPTION : This function takes a character to check whether its a consonant or a vowel

 ** RETURNS : SUCCESS in case of failure ERROR
 ** **************************************************************************************************/
int isVowel(char u)
{
	if(u=='a' || u=='e' || u=='i' || u=='o' || u=='u') 
		return 1;
	else 
		return 0;
}
/************************************************************************************************
 ** FUNCTION NAME : remove_vowel() 

 ** DESCRIPTION : This function process the string at given index in array, remove all vowel characters, shift the remaining non-vowel characters

 ** RETURNS : The pointer to the updated string in case of failure ERROR
 ** **************************************************************************************************/
char*remove_vowel(char a[][MAX_LEN],int i)
{
	char *s=(char *)malloc(MAX_LEN);         /*s is a pointer of type char*/
	int k;
	for(int j=0;j<strlen(a[i]);j++)
	{
		if(isVowel(a[i][j])==0)
		{
			s[k++]=a[i][j];
		}
	}
	strcpy(a[i],s); 
	return s;
}
/************************************************************************************************
 ** FUNCTION NAME : mystrcat() 

 ** DESCRIPTION : This function concating str2 with str1

 ** RETURNS : return the address of str1 , in case of failure ERROR
 ** **************************************************************************************************/
char* mystrcat(const char* str1, const char* str2)
{
	int i = 0;         /*declaring variable*/
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
/************************************************************************************************
 ** FUNCTION NAME : display()

 ** DESCRIPTION : This function traverse and display the contents of array

 ** RETURNS : contents of array in case of failure ERROR
 ** **************************************************************************************************/
void display(char a[][MAX_LEN])
{
	printf("\nThe contents in the array are: "); 
	for(int i=0;i<strlen(a[0])-1;i++)
	{
		printf("%s\n",a[i]);
	}
}

/************************************************************************************************
 ** FUNCTION NAME : main()

 ** DESCRIPTION : This function calls other defined functions to perform the given operations

 ** RETURNS : SUCCESS in case of failure ERROR
 ** **************************************************************************************************/
int main()
{
	int l;
	char arr[][MAX_LEN]={"user1","user2","user3","user4"}; 
	while(1)
	{
		int c;                    /*declaring variable*/ 
		int i;
		char str1[MAX_LEN];
		char str2[MAX_LEN];
		char *s1 = str1;
		char *s2 = str2;
		char *s;
		printf("\n1.swap elements\n2.isvowel\n3.remove vowel\n4.mystrcat\n5.display\n6.exit\n");
		printf("\nEnter your choice:"); 
		scanf("%d",&c);
		 
		switch(c)
		{
			case 1:
		       		printf("Enter the index: "); 
				scanf("%d",&i); 
				if(i>=strlen(arr[0])-1)
					printf("Out of range!!");
				else
				{
					s1=swap_elements(arr,i); 
					printf("Element at index %d is:%s",i,s1);
				}
				break;
			case 2:
				printf("\nEnter the character: "); 
				char u;
				getchar(); 
				scanf("%c",&u); 
				int k=isVowel(u); 
				if(k==0)
				         printf("consonant");
				else
					printf("Vowel");
				break;
			case 3:
				printf("Enter the index:"); 
				scanf("%d",&l); 
				if(l>=strlen(arr[0]))
					printf("Out of range!!");
				else
				{
					s1=remove_vowel(arr,l); 
					printf("Element at index %d is:%s",l,s1);
				}
				break;
			case 4:
				getchar();
				printf("Enter 1st string: "); 
				fgets(str1,MAX_LEN,stdin);
				printf("Enter 2nd string: "); 
				fgets(str2,MAX_LEN,stdin); 
				s=mystrcat(s1,s2);
				printf("The string after concatnation:%s",s);
				break;
			case 5:
				display(arr);
				break;
			case 6:
				return 0;
			default:
				printf("Wrong");
		}
	}
	return 0;
}
				                
				
