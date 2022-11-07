/**************************************************************************************************************
 * *FILE NAME : assign3b.c
 * *
 * *DESCRIPTION :This file defines the functions to perform some operations on input array.
 * *
 * *REVISION HISTORY:
 * * DATE         NAME                 REFERENCE                                            REASON
 * ************************************************************************************************************
 * 05 OCT 2022   AKSHYARIKA MOHARANA    NEW                                        NEW CODE TO PERFORM FUNCTION
 * ************************************************************************************************************/
#include<common.h>
#include<ctype.h>
#define MAX_LEN 20

char *swap_elements(char a[][MAX_LEN],int i)
{
	char *s=(char *) malloc(20);
	strcpy(s,a[i]);
	strcpy(a[i],a[0]);
	strcpy(a[0],s);
	s=a[i];
	return s;
}
int isVowel(char u)
{
	if(u=='a' || u=='e' || u=='i' || u=='o' || u=='u')
		return 1;
	else
		return 0;
}
char*remove_vowel(char a[][MAX_LEN],int i)
{
	char *s=(char *)malloc(20);
	/*char d[30]="";*/
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
char* mystrcat(const char* str1, const char* str2)
{
	 int i = 0, j = 0;
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
void display(char a[][MAX_LEN])
{
	printf("\nThe Contents in the Array are:");
	for(int i=0;i<strlen(a[0])-1;i++)
	{
		printf("%s\n",a[i]);
	}
}
/********************************************************************************************************
 * *FUNCTION NAME:main()
 * *DESCRIPTION:This function calls the required function to perform  operations on input array.
 * *RETURNS:SUCCESS and in case of failure ERROR
 * *****************************************************************************************************/
int main()
{
	 int l;
	 char arr[][MAX_LEN]={"user1","user2","user3","user4"};
	 char *s1;
	 while(1)
	 {
		 int c;
		 int i;
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
					    printf("Consonant");
				    else
					    printf("Vowel");
				    break;
			 case 3:
				    // int l;
				     printf("Enter the Index:");
				     scanf("%d",&l);
				     if(l>=strlen(arr[0]))
				     printf("Out of Range");
				     else{
				     s1=remove_vowel(arr,l);
				     printf("Element at Index %d is:%s",l,s1);
				    // // arr[i]=s1;
				     }
				     break;
			 case 4:
				     char str1[MAX_LEN], str2[MAX_LEN];
				      char * s1 = str1;
				       char * s2 = str2;
				        
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

