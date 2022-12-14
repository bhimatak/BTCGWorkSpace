/****************************************************************************************************************
 *
 * FILE NAME    : Assign11.c
 *
 * DESCRIPTION  :  Application to read a line of text of max length 80bfrom user
 *
 * DATE                          NAME                 REFERENCE                      REASON
 * 05 NOV 2022         GOWRILATHA CHOPPA           CG MATERIAL                        NEW
 *
 * Copyright 2010 Capgemini Aricent Technologies (Holding) Ltd
 *
 *************************************************************************************************************************/
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int displaywordcount(char *s) {
	    const char temp[4] = " ";
	    char* token;
	    int count=0;
	    token = strtok(s, temp);
	    while (token != 0) {
	        token = strtok(0, temp);
	        count=count+1;
	   }
	   return count;

}
void storewords(char *s) {
	    const char temp[4] = " ";
	    char* token;
	    int i=0;
	    token = strtok(s, temp);
	    char** words;
	    words[i]=(char *)malloc(strlen(token));
	    words[i]=token;
		  while (token != 0) {
		  token = strtok(0, temp);
		  i++;
		  words[i]=(char *)malloc(strlen(token));
		  words[i]=token;
	   }
}
void replace(char s[][80], int n,char *oldstring, char *newstring) {
	    for(int x=0;x<n;x++) {
	    if(s[x]==oldstring)
	    strcpy(s[x],newstring);
	   }
}
void traverse(char s[][80], int n) {
	    printf("words are : ");
	    for(int x=0;x<n;x++) {
	    printf("%s " ,s[x]);
	   }
	    printf("\n");
}
void freememory() {
	    char* ptr = (char*)malloc(20);
	        free(ptr);
		    printf("allocated memory removed\n");
}
int main() {
	    char sen[1000];
	    int choice;
	    char arr[][80]={"one", "two", "three", "four","five"};
	    char *oldstring,*newstring;
            while(1) {
 printf("Enter ur choice 1.Display word count 2.store words 3. replace old string with new string in text 4. traverse words 5. free allocated memory 6.exit : ");
	    scanf("%d",&choice);
	    switch(choice) {
		   case 1:
		        printf("Enter Sentence:");
		        scanf("%[^\n]s", sen);
		        printf("No. of words : %d\n",displaywordcount(sen));
		        break;
		   case 2:
		        printf("Enter Sentence:");
		        scanf("%[^\n]s", sen);
		        storewords(sen);
		        break;
		   case 3:
																			                                        printf("Enter serach string :");
		        scanf("%s",oldstring);
		        printf("Enter replasable string : ");
		        scanf("%s",newstring);
		        replace(arr,5,oldstring,newstring);
		        break;
		   case 4:
		        traverse(arr,5);
		        break;
                   case 5:
	                freememory();
		        break;
	           case 6:
	                exit(0);
		        default:
	                printf("Please Enter valid choice");																																									                     
	   }
       }
       return 0;
}
