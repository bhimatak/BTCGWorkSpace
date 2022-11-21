/********************************************************************************************************************************************************
 ** FILENAME        : assign3b.c
 **
 ** DESCRIPTION     : This files defines required function to perform given operations on input array
 **
 ** REVISION HISTORY:
 ** DATE              NAME                       REFERENCE                       REASON
 ** -----------------------------------------------------------------------------------------------------------------------------------------------------
 **  03 Nov 2022    POOJA NATH                   NEW                          NEW CODE TO PERFORM GIVEN OPERATION
 **
 **
 **
 ** *****************************************************************************************************************************************************/


/******header files***/
#include"common.h"


/************************************************************************************
 *FUNCTION NAME : swap_element()
 *DESCRIPTION   : This function swap the content of first element with 
                  element at given index
 *RETURNS       : Return a pointer to the element at given index
                  and in case of failure ERROR
 * *********************************************************************************/

char *swap_elements(char a[][MAX_LEN],int i)
{
	char *s=(char *) malloc(MAX_LEN);
	strcpy(s,a[i]);
	strcpy(a[i],a[0]);
	strcpy(a[0],s);
	s=a[i];
	return s;
}


/************************************************************************************
 *FUNCTION NAME : isVowel()
 *DESCRIPTION   : This function takes a character and check whether 
                  its a vowel or consonant
 *RETURNS       : SUCCESS and in case of failure ERROR
 * *********************************************************************************/
int isVowel(char u)
{
	if(u=='a' || u=='e' || u=='i' || u=='o' || u=='u')
		return 1;
	else
		return 0;
}


/******************************************************************************************
 *FUNCTION NAME : remove_vowel()
 *DESCRIPTION   : This functionprocess the string at given index in array, 
                  remove all vowel character and shift the remaining non-vowel characters
 *RETURNS       : Return the pointer to the updated string and in 
                  case of failure ERROR
 * *********************************************************************************/
char *remove_vowel(char a[][MAX_LEN],int i)
{
	char *s=(char *)malloc(MAX_LEN);
	int k;
	for(int j=0;j<strlen(a[i]);j++)
	{
		if(isVowel(a[i][j])==0){
			s[k++]=a[i][j];
		}
	}
	strcpy(a[i],s);
	return s;
}


/************************************************************************************
 *FUNCTION NAME : mystrcat()
 *DESCRIPTION   : This function will concat S2 with S1 
 *RETURNS       : Address of s1 and in case of failure ERROR
 * *********************************************************************************/
char *mystrcat(const char* str1, const char* str2)
{
	int i = 0;
	int j = 0;
	char* result = malloc(strlen(str1) + strlen(str2) + 1); 
	while (*str1) {
		result[i++] = *str1++; 
	}
	while (*str2) {
		result[i + j++] = *str2++; 
	}
	result[i + j] = '\0'; 
	return result;
}


/************************************************************************************
 *FUNCTION NAME : display()
 *DESCRIPTION   : This function will traverse and display the content of array
 *RETURNS       : Returns the array and in case of failure ERROR
 * *********************************************************************************/
void display(char a[][MAX_LEN])
{
	printf("\nThe Contents in the Array are:");
	for(int i=0;i<strlen(a[0])-1;i++)
	{
		printf("%s\n",a[i]);
	}
}


/************************************************************************************
 *FUNCTION NAME : main()
 *DESCRIPTION   : This function calls other defined function to 
                  perform the given operation 
 *RETURNS       : SUCCESS and in case of failure ERROR
 * *********************************************************************************/

int main()
{
	/*variable declaration*/
	int l;
	char arr[][MAX_LEN]={"user1","user2","user3","user4"};
	
	
	while(1)
	{
		/*variable declaration*/
		int c;
		int i;
		char str1[MAX_LEN];
		char str2[MAX_LEN];
		char *s1=str1;
		char *s2=str2;

		printf("\n1.swap elements\n2.isvowel\n3.remove_vowel\n4.mystrcat\n5.display\n6.exit\n");
		printf("\nEnter the Choice:");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				printf("Enter the Index:");
				scanf("%d",&i);
				if(i>=strlen(arr[0])-1)
					printf("out of range");
				else{
					s1=swap_elements(arr,i);
					printf("Element at Index %d is:%s",i,s1);
				}
				break;
			case 2:
				printf("\nEnter the Character:");
				char u;
				getchar();
				scanf("%c",&u);
				int k=isVowel(u);
				if(k==0)
					printf("CONSONANT");
				else
					printf("VOWEL");
				break;
			case 3:
				printf("Enter the Index:");
				scanf("%d",&l);
				if(l>=strlen(arr[0]))
				       	printf("Out of Range");
				else
				{
				       	s1=remove_vowel(arr,l);
					printf("Element at Index %d is:%s",l,s1);
				}
			       	break;
			case 4:
				getchar();
				printf("Enter 1st String: ");
				fgets(str1,MAX_LEN,stdin);
				printf("Enter 2nd String: ");
				fgets(str2,MAX_LEN,stdin);
				char *s;
				s=mystrcat(s1,s2);
				printf("The String after Concatnation:%s",s);
				break;
			case 5:
				display(arr);
				break;
			case 6:
				return 0;
			default:
				printf("wrong");
		}
	}
	return 0;
}
