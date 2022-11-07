/*************************************************************************************************
 * * FILENAME : assign3b.c
 * *
 * * DESCRIPTION : This file contains the below required functions.
 * *
 * * REVISION HISTORY :
 * * DATE             NAME              REFERENCE                REASON    
 * * ---------------------------------------------------------------------------------------------
 * * 05 Nov 2022     ABHILIPSA SWAIN     NEW                     NEW CODE TO PERFORM OPERATIONS
 * *
 * ***********************************************************************************************/

#include "common.h"
#define MAX_LEN 20

/*************************************************************************************************
 * * FUNCTION NAME : swap_elements()
 * *
 * * DESCRIPTION : This functions returns swapped elements
 * *
 * * RETURNS : SUCCESS and in case of failure ERROR
 * *
 * ***********************************************************************************************/

char *swap_elements(char a[][MAX_LEN],int i)
{
	char *s = (char *)malloc(20);
	strcpy(s, a[i]);
	strcpy(a[i], a[0]);
	strcpy(a[0], s);
	s = a[i];
	return s;
}

/**************************************************************************************************
 * * FUNCTION NAME : isVowel()
 * *
 * * DESCRIPTION : This functions returns if certain character is vowel or not
 * *
 * * RETURNS : SUCCESS and in case of failure ERROR
 * *
 * ***********************************************************************************************/

int isVowel(char u)
{
	if(u == 'a' || u == 'e' || u == 'i' || u == 'o' || u == 'u')
		return 1;
	else
		return 0;
}

/**************************************************************************************************
 * * FUNCTION NAME : remove_vowel()
 * *
 * * DESCRIPTION : This function removes vowel
 * *
 * * RETURNS : SUCCESS and in case of failure ERROR
 * *
 * ************************************************************************************************/

char*remove_vowel(char a[][MAX_LEN], int i)
{
	char *s = (char *)malloc(20);
	int k;
	for(int j = 0;j < strlen(a[i]); j++)
	{
		if(isVowel(a[i][j])==0)
		{
			s[k++]=a[i][j];
		}
	}
	strcpy(a[i],s);
	return s;
}

/**************************************************************************************************
 * * FUNCTION NAME : mystrcat()
 * *
 * * DESCRIPTION : This functions concatenates
 * *
 * * RETURNS : SUCCESS and in case of failure ERROR
 * *
 * ************************************************************************************************/

char* mystrcat(const char* str1, const char* str2)
{
	int i=0,j=0;
	char* result=malloc(strlen(str1) + strlen(str2) +1);
	while (*str1)
	{
		result[i++]=*str1++;
	}
	while(*str2)
	{
		result[i + j++]= *str2++;
	}
	result[i+j] = '\0';
	return result;
}

/**************************************************************************************************
 * * FUNCTION NAME : display()
 * *
 * * DESCRIPTION : This function displays the contents of the array
 * *
 * * RETURNS : SUCCESS and in case of failure ERROR
 * *
 * ************************************************************************************************/

void display(char a[][MAX_LEN])
{
	printf("\nthe contents in the array are:");
	for(int i = 0; i < strlen(a[0])-1; i++)
	{
		printf("%s\n",a[i]);
	}
}

/**************************************************************************************************
 * * FUNCTION NAME : main()
 * *
 * * DESCRIPTION : This function is main function where other functions are called.
 * *
 * * RETURNS : SUCCESS and in case of failure ERROR
 * *
 * ************************************************************************************************/

int main()
{
      int l;
      char arr[][MAX_LEN]={"user1","user2","user3","user4"};
      while(1)
      {
	    int c;
	    int i;
	    char str1[MAX_LEN];
	    char str2[MAX_LEN];
	    char *s1 = str1;
	    char *s2 = str2;
	    char *s;
	    printf("\n1.swap elements\n2.isvowel\n3.remove vowel\n4.mystrcat\n5.display\n6.exit\n");
	    printf("\nenter the choice:");
	    scanf("%d",&c);
	    switch(c)
	    {
		    case 1:
			  //int i;
			  printf("enter the index:");
			  scanf("%d",&i);
			  if(i >= strlen(arr[0])-1)
				printf("out of range");
			  else
			  {
				s1 = swap_elements(arr,i);
			        printf("element at index %d is:%s", i, s1);
			  }
		          break;
		    case 2:
		          printf("\nenter the character:");
		          char u;
		          getchar();
		          scanf("%c",&u);
		          int k = isVowel(u);
		          if(k == 0)
			         printf("consonant");
		          else
			         printf("vowel");
		          break;
		    case 3:
		          //int l;
			  printf("enter the index:");
		          scanf("%d",&l);
		          if(l >= strlen(arr[0]))
			         printf("out of range");
	 		  else
			  {
			         s1 = remove_vowel(arr, l);
		                 printf("element at index %d is:%s", l, s1);
		                 // //   arr[i]=s1;
		          }
	                  break;
	            case 4:
	                  getchar();
	                  printf("Enter 1st string: ");
	                  fgets(str1, MAX_LEN, stdin);
	                  printf("Enter 2nd string: ");
	                  fgets(str2, MAX_LEN, stdin);
	                  s = mystrcat(s1,s2);
	                  printf("the string after concatenation:%s",s);
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
