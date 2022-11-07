/*****************************************************************************************************************
 * * FILE NAME : arr3d.c
 * *
 * * DESCRIPTION : Find out the first and last names
 * * 
 * * RETURN HISTORY :
 * *  DATE                  NAME               REFERENCE                  REASON
 *----------------------------------------------------------------------------------------------------------------
 *  5 NOV 2022          YAMINI TALLA             NEW                      INITIAL CREATION
 * *
 * *  copyright@2022 ,Aricient Technologies (holdings) Ltd
 * ***************************************************************************************************************/

/*****************************************************************************************************************
 *                                               HEADER FILE        
 *****************************************************************************************************************/                                               
#include<common.h>
/******************************************************************************************************************
 * * FUNCTION NAME     :  getFirstNames,getLastNames
 * *
 * * DESCRIPITION      :  First name and alst name of the user
 * *
 * * RETURN            :  Success or Failure   
 * ****************************************************************************************************************/  
char first[ROW][MAX_LEN];                         /*first name MAximum lenght*/
char last[ROW][MAX_LEN];                            /*last name Maximum length*/
char arr[ROW][MAX_LEN]={"antony:Joseph","Lata:Mary","Rajesh:Kumar","Joly:Akbar"};           /* first and last names */
int* getFirstNames(char arr[][MAX_LEN],int rowcount,char str1[][MAX_LEN])
{
	for(int i=0;i<ROW;i++)                                   
	{
		const char s[2]=":";
		char*token;

		token = strtok(arr[i],s);
		strcpy(str1[i],token);
	}
	for(int i=0;i<ROW;i++)
	{
		printf("%s\n",str1[i]);                     
	}
	return EXIT_SUCCESS;
}


char* getLastNames(char arr1[][MAX_LEN],int rowcount,char str2[][MAX_LEN])        /*getLastNAmes is the functionname of the code*/
{
	char* las;
	char arr[ROW][MAX_LEN]={"Antony:Joseph","Lata:Mary","Rajesh:Kumar","Joly:Akbar"};

	for(int i=0;i<ROW;i++)
	{
		las =strrchr(arr[i],':');
		las++;
		printf("%s\n",las);
	}
	return EXIT_SUCCESS;                             /*return the string cpoy name*/
}



int main()
{
	int rowcount = 4;
	printf("FIRST NAMES:\n");                     /* first name of the user*/
	getFirstNames(arr,rowcount,first);
	printf("\n\n");
	printf("LAST NAMES:\n");                           /* last name of the user*/
	getLastNames(arr,rowcount,last);
	return EXIT_SUCCESS;
}
