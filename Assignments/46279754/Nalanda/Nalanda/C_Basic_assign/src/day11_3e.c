/*************************************************************************
* * *
* * *  FILE NAME    : 3e.c
* * *
* * *  DESCRIPTION  : Program to to extract the words, store them in double pointer dynamically allocating memory and perform the given operations.
* * *                
* * *
* * *  Revision History:
* * *  DATE         NAME    REFERENCE          REASON
* * *
* * *  05-11-22    Suhana       New           Initial creation
* *
* * *  Copyright 2022, Altran Group All Rights Reserved
* * *
* * *************************************************************************
* *                    STANDARD HEADER FILES
* * *************************************************************************/
#include<common.h>
/**************************************************************************
* *
* * FUNCTION NAME: wordCount
* *
* * DESCRIPTION:  It prints number of words in a sentence
* *
* * RETURNS:  SUCCESS or FAILURE
* * * **************************************************************************/
extern int wordCount(void);/*declaring function*/
extern int free_memory();/*declaring function*/
extern char* extract(char* word);/*declaring function*/
int wordCount(void) {/*function definition*/
	char str[MAX_LEN];/*declaring an array*/
	char* word;/*declaring a pointer pointing to character data type*/
	int i=0;/*initializing integerto 0*/
	int lenght=0;/*initializing length to 0*/
	printf("Enter a sentence: ");/*printing formatted output*/
	fgets(str, MAX_LEN, stdin);/*prints */
	lenght=strlen(str)-1;/*assigning a value to a variable*/
	if(lenght>MAX_LEN)/*checks condition*/
	{
		lenght=MAX_LEN; /*assigning value*/
	}

	word=strtok(str, " ");/*string token is used*/
	while( word != NULL)/*checks while condition*/
	{
		word=strtok(NULL, " ");/*assigned strtok() to word*/
		printf("%s ", word);/*printing formatted output*/
		i++;/*incrementing i value*/
	}

	printf("%d", i);/*printing formatted output*/
	return EXIT_SUCCESS;/*returns success*/

}
/******************************************************************************
* *
* *       Function Name   : free_memory
* *       Description     : To free all the allocated memory
* *       Returns         : Success or Failure
* *
* *******************************************************************************/
int free_memory()/*declaring function*/
{
	char** str;/*str pointing to values in charater type*/
       	int count=0;/*initializing count to 0*/
	for(int i = 0; i < count; i++)/*traversing each element in array */

	{
		free(str[i]);/*frees memory*/
		str[i] = NULL;/*assigned to null*/
	}

	free(str);/*free string*/
	str = NULL;/*assigned string to null*/
	return EXIT_SUCCESS;/*return success*/
}
/******************************************************************************
* *
* *       Function Name   : extract
* *       Description     : to extract and store words in heap. should allocate memory for each word as per its length.
* *       Returns         : Success or Failure
* *
* *******************************************************************************/
char* extract(char* word)/*declaring function*/
{
	char* temp = NULL;/*intializing temp pointer to null*/
	char* token = NULL;/*initializing token pointer to null*/
	int portNo;/*declared a port number*/
	char* servername = NULL;/*servername pointer initializing to null*/
	temp = (char*)calloc(strlen(word)+1, sizeof(char));/*allocating memory dynamically*/
	strcpy(temp, word);/*copying string*/
	token = strtok(temp, ":");/*assigning*/
	servername= (char*)calloc((strlen(token)+1) , sizeof(char));/*allocating memory dynamically*/
	strcpy(servername, token);/*copying string*/
	printf("\nServer Name : %s", servername);/*printing formatted output*/
	token = strtok(NULL, ":");/*string token*/
	portNo = atoi(token);/*converting char to integer*/
	printf("\nPort Number : %d\n",portNo);/*printing formatted output*/
	free(temp);/*free temporary variable*/
	temp = NULL;/*intializing to null*/
	return servername;/*returns servername*/

}
/******************************************************************************
* *
* *       Function Name   : main
* *       Description     : Takes input through command line 
* *       Returns         : Success or Failure
* *
* *******************************************************************************/
int main(int argc, char* argv[])
{
	char** str;/*str pointer pointing to character data type*/
	str=(char**)calloc(argc,sizeof(char));/*allocating memory dynamically*/
	wordCount();/*calling function*/
	extract(char*);/*calling function*/
	int status=free_memory();/*free memory*/
	if(status==EXIT_FAILURE)/*checks condition in case of failure*/
	{
		printf("memory can't be freed!\n");/*printing formatted output*/
	}
	return EXIT_SUCCESS;/*return in case of success*/
}
