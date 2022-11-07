/**************************************************************************************************************
 *  * *FILE NAME : assign3b.c
 *  * *
 *  * *DESCRIPTION :This file defines the functions to perform some operations on input array and test the application.
 *  * *
 *  * *REVISION HISTORY:
 *  *  DATE              NAME                 REFERENCE                                            REASON
 *  * *****************************************************************************************************************
 *  * 05 OCT 2022   AKSHYARIKA MOHARANA         NEW                                        NEW CODE TO PERFORM FUNCTION
 *  *
 *  *Cpoyright @2022 Altran Group All Rights Reserved
 *  * *****************************************************************************************************************/
#include<common.h>
#define MAX_LEN 80
#define ROW 4

char first[ROW][MAX_LEN];
char last[ROW][MAX_LEN];
char arr[ROW][MAX_LEN]={"Antony:Joseph","Lata:Mary","Rajesh:Kumar","Joly:Akbar"};
int*getFirstNames(char arr1[][MAX_LEN],int rowcount,char str1[][MAX_LEN])
{
	for(int i=0;i<ROW;i++)
	{
		const char s[2]=":";
		char *token;
		token = strtok(arr1[i],s);
		strcpy(str1[i],token);
	}
	for(int i=0;i<ROW;i++)
	{
		printf("%s\n",str1[i]);
	}
	return EXIT_SUCCESS;
}
char*getLastNames(char arr1[][MAX_LEN],int rowcount,char str2[][MAX_LEN])
{
	char*las;
	char arr[ROW][MAX_LEN]={"Antony:Joseph","Lata:Mary","Rajesh:Kumar","Joly :Akbar"};/**Save the length of the String**/
	for(int i=0;i<ROW;i++)
	{
		las=strrchr(arr[i],':');/**Find the last character with the string**/
		
		printf("%s\n",++las);
	}
		return EXIT_SUCCESS;
}

/**********************************************************************************************************************
 *  * *FUNCTION NAME:main()
 *  * *DESCRIPTION:This function calls the required function to perform  operations on input array and show the results.
 *  * *RETURNS:SUCCESS and in case of failure ERROR
 *  * ****************************************************************************************************************/
int main()
{
	int rowcount=4;
	printf("FirstNames:\n");
	getFirstNames(arr,rowcount,first);
	printf("\n\n");
	printf("LastNames:\n");
	getLastNames(arr,rowcount,last);
	return EXIT_SUCCESS;
}

