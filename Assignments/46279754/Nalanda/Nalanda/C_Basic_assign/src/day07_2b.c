/*************************************************************************
* *
* *  FILE NAME    : day07_2b.c
* *
* *  DESCRIPTION  : Program demonstrates that to find longest word in given sentence.
* *
* *  DATE      NAME    REFERENCE          REASON
* *
* *  11-11-22  Suhana    New          Initial Creation.
* *
* *  Copyright 2010, Aricent Technologies (Holdings) Ltd
* *
* **************************************************************************/

/*************************************************************************
*                         HEADER FILES
***************************************************************************/

#include<common.h>
/******************************************************************************
*
* *       Function Name   : main
* *       Description     : 
* *       Returns         : Success or Failure
* *
* *******************************************************************************/
int split(char *str) {


	int count=0;
	char * token = strtok(str, " ");

	while( token != NULL ) {
		printf("%s\n", token ); 
		token = strtok(NULL, " ");
		count++;
	}
	return count;
}
/******************************************************************************
 * *
 * * *       Function Name   : main
 * * *       Description     :
 * * *       Returns         : Success or Failure
 * * *
 * * *******************************************************************************/
char* longestword(char* string,int length)
{
	char longest[30];
	int count = 0, max = 0,i,j,index=0;
	for( i = 0 ; i< length ; i++)
	{
		if(string[i] != ' ')
		{
			count++;
		}
		else
		{
			if(count > max)
			{
				max = count;
				index = i-max;
			}
			count = 0;
		}
	}
	if(count>max)
	{
		max = count;

		index = length-max;
	}
	j=0;
	for(i=index;i< index+max;i++)
	{
		longest[j] = string[i];
		j++;
	}
	longest[j] = '\0';
	printf("longest word is :%s",longest);
}
/******************************************************************************
 * *
 * *       Function Name   : main
 * *       Description     : 
 * *       Returns         : Success or Failure
 * *
 * *******************************************************************************/
char replacews(char* string, char ch){
	for(int i = 0; i < strlen(string); i++){
		if(string[i] == ' ')
			string[i] = ch;
	}
	printf("String after replacing spaces with given character: \n");
	printf("%s", string);
}
/******************************************************************************
 * *
 * *       Function Name   : main
 * *       Description     : function calls all the declared functions to executed
 * *       Returns         : Success or Failure
 * *
 * *******************************************************************************/
int main() {
	char mystr[MAX],mystr2[MAX];
	fgets(mystr,MAX,stdin);
	strcpy(mystr2,mystr);
	int len=strlen(mystr);
	longestword(mystr,len);
	printf("splitting string mystr into words:\n");
	int wordcount=split(mystr2);
	printf("number of words are:%d\n",wordcount);
	char myreplacement='!';
	replacews(mystr,myreplacement);
}
