#include<stdio.h>
#include<string.h>
int main()
{
	char name1[15] = {'\0',};
        char name2[15] = {'\0',};
	char str1[10];
	char str2[10];
	int cmp;
	int cmp1;

	printf("enter name1 : ");
	scanf("%s",name1);
	printf("\nenter name2 : ");
	scanf("%s",name2);
	
	/* to cmp the string using strcpy */
	cmp = strcmp(name2,name1);
	printf("\n cmp is : %d",cmp);
	
	printf("enter string 1 : ");
	scanf("%s\n",str1);
	printf("enter string 2 : " );
	scanf("%s\n",str2);	
	cmp1 = strcmp(str1,str2);
	printf("cmp is %d : ",cmp1);

	return 0;
}
