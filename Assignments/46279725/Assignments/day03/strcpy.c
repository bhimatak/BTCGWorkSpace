#include<stdio.h>
#include<string.h>
int main()
{
	char name1[15] = {'\0',};
        char name2[15] = {'\0',};
	char name3[6] = {'\0'};
	
	printf("enter name1 : ");
	scanf("%s",name1);
	printf("\nenter name2 : ");
	scanf("%s",name2);
	
	/* to copy the string using strcpy */
	strcpy(name3,name1);
	printf("\nname3 is : %s",name3);

	/*to copy only 4 characters from name2 into name3 */
	strncpy(name3,name2,4);
	printf("\nname3 copied from name2 is : %s",name3);

	/*to copy all the characters of name3 to name1 */
	strcpy(name1,name3);
	printf("\nthe copied name1 is %s\n",name1);

	strncpy(name1,name2,sizeof(name3));
	printf("The modified name1 is : %s",name1);
	return 0;
}
