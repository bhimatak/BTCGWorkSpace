/***************************************************
 * * FILE NAME:day9-3b.c
 * *
 * *
 * *DESCRIPTION: Stores first name in one place and last name in another and gives output separately.
 * *REVISION HISTORY:
 * *DATE               NAME                   REFERENCE                  REASON
 * --------------------------------------------------------------------------------------------------------------------
 * *6OCT2022          Jasmeet                 CAPG1234                 giving output for first and last name separately
 * *
 * * Copyright @ 2022 Altran Group All Rights Reserved
 * *--------------------------------------------------------------------------------------------------------------------
 * ****************************************************
 * */
 #include "COMMON.H"

char first[ROW][MAX_LEN];
char last[ROW][MAX_LEN];
char arr[ROW][MAX_LEN]={"Anthony:Joseph","Lata:Mary","Rajesh:Kumar","Joly:Akbar"};

int *getFirstNames(char arr1[][MAX_LEN],int rowcount,char str1[][MAX_LEN])
{
	for(int i=0;i<ROW;i++)
	{
		const char s[2]=":";
		char *token;
//get the first token

          token=strtok(arr1[i],s);
	  strcpy(str1[i],token);
	}

	for(int i=0;i<ROW;i++)
	{
		printf("%s\n",str1[i]);
	}
	return EXIT_SUCCESS;
}


char *getLastNames(char arr1[][MAX_LEN],int rowcount,char str2[][MAX_LEN])
{
	char *las;
	//save length of string
      char arr[ROW][MAX_LEN]={"Anthony:Joseph","Lata:Mary","Rajesh:Kumar","Joly:Akbar"};

      for(int i=0;i<ROW;i++)
      {
	      //find the last character
	     las=strrchr(arr[i],':');
	     las++;
	     printf("%s\n",las);
      }
      return EXIT_SUCCESS;
}

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


