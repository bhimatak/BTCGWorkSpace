/**********************************************************************************************************************
 *
 * FILE NAME     : assign10.c
 * 
 * DESCRIPTION   : Lastname Firstname
 *
 * DATE            NAME              REFERENCE              REASON
 * 05-nov-2022     triveni            CG material           2D char array initialization
 *
 * copyright 2010,  Arcient Technologies (Holdings) Ltd
 *
 *******************************************************************************************************************/

 /******************************************************************************************************************
  *                                          HEADER DESCRIPTION
  ****************************************************************************************************/
#include  <common.h>
int getFirstNames(char arr[][MAX_LENGTH], int rowcount, char *firstnames[])
{
	const char temp[4] = ":";
	char* token;
	for(int x = 0; x < rowcount; x++)
       	{
        token = strtok(arr[x], temp);
        firstnames[x]=token;
       	}
        return 1;
}
int getLastNames(char arr[][MAX_LENGTH], int rowcount, char *lastnames[]) {
        const char temp[1] = ":";
        char* token;
        char *saveptr;
	for(int x = 0; x < rowcount; x++)
       	{
        token = strtok(arr[x], temp);
	token = strtok(0,temp);
        lastnames[x]=token;
	}
        return 1;
}   
int main()
{
	 char array1[][MAX_LENGTH]={"Antony:Josep", "Lata:Mar", "Rajesh:Kumar", "Joly:Akbar"};
	 char *firstnames[80];
	 char *lastnames[80];
         int status;
         status=getFirstNames(array1,4,firstnames);
	 if(status==1)
	 {
	 printf("EXIT_SUCCESS\n");
	 printf("First names: ");
	 for(int x = 0; x < 4; x++)
	 {
         printf("%s ",firstnames[x]);
	 }
	 printf("\n");
         }
         else
	 printf("EXIT_FAILURE\n");
	 char array2[][MAX_LENGTH]={"Antony:Josep", "Lata:Mar", "Rajesh:Kumar", "Joly:Akbar"};
	 status=getLastNames(array2,4,lastnames);
	 if(status==1)
	 {
	 printf("EXIT_SUCCESS\n");
	 printf("Last names: ");
	 for(int x = 0; x < 4; x++)
	 {
         printf("%s ",lastnames[x]);
	 }
 }
         else
	 printf("EXIT_FAILURE");
         return 0;
}
