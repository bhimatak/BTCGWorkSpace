#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define MAX_LEN 20
char *swap_elements(char a[][MAX_LEN],int i)
{
	char *s=(char *)malloc(20);
	strcpy(s,a[i]);
	strcpy(a[i],a[0]);
	strcpy(a[0],s);
	s=a[i];
	return s;
}
int isVowel(char v)
{
	if(v=='a' || v=='e' || v=='i' || v=='o' || v=='u' )
		return 1;
	else
		return 0;
}
char*remove_Vowel(char a[][MAX_LEN],int i)
{
	char *s=(char *)malloc(20);
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
char* mystrcat(const char* str1, const char* str2)
{
	int i=0;
	int j=0;
	char* res=malloc(strlen(str1)+strlen(str2)+1);
	while(*str1)
	{
		res[i++]= *str1++;
	}
	while(*str2)
	{
		res[i+j++]= *str2++;
	}
	res[i+j]='\0';
	return res;
}
void display(char a[][MAX_LEN])
{
	printf("\n The contents in the array arev:");
	for(int i=0;i<strlen(a[0]-1);i++)
	{
		printf("%s\n",a[i]);
	}
}
int main()
{
	int b;
	char arr[][MAX_LEN]={"user1" ,"user2" ,"user3" ,"user4"};
	char *s1;
	while(1)
	{
		int d;
		int i;
		char str1[MAX_LEN];
		char str2[MAX_LEN];
		char *s1 = str1;
		char *s2 = str2;
		printf("\nswap elements\nisVowel\nremove_Vowel\nmystrcat\ndisplay\nexit\n");
		printf("\n Enter the choice:");
		scanf("%d",&d);
		switch(d)
		{
			case 1:
			printf("Enter the Index Range:");
			scanf("%d",&i);
			if(i>=strlen(arr[0])-1)
				printf("Out of Index Size");
			else
			{
				s1=swap_elements(arr,i);
				printf("Element After Swapping at Index %d is :%s",i,s1);
			}
			break;
			case 2:
			printf("Enter the Character :");
			char v;
			getchar();
			scanf("%c",&v);
			int k=isVowel(v);
			if(k==0)
				printf("Consonant");
			else
				printf("Vowel");
			break;
			case 3:
			printf("Enter the Index no:");
			scanf("%d",&b);
			if(b>=strlen(arr[0]))
				printf("Out of Index Range");
			else{
				s1=remove_Vowel(arr,b);
				printf("Elements ata Index %d is:%s",b,s1);
			}
			break;
			case 4:
			getchar();
			printf("Enter the first string : ");
			fgets(str1,MAX_LEN,stdin);
			printf("Enter the second string: ");
			fgets(str2,MAX_LEN,stdin);
			char *s;
			s=mystrcat(s1,s2);
			printf("The string after concatination is%s",s);
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



		
