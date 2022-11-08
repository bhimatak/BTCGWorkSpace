#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#define MAX_LEN 20
char arr[][MAX_LEN]={"user1", "user2", "user3", "user4"};
char* swap_elements (char arr1[][MAX_LEN], int index)
{
	char temp[20];
	    strcpy(temp, arr1[0]); 
	        strcpy(arr1[0], arr[index]);
		    strcpy(arr1[index], temp);
		        for (int i = 0; i < 4; i++)
				    {
				        printf("%s\n", arr1[i]);
						        }
			    return *arr1;
			        
}
int isVowel (char x)
{
	 if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == '0' || x == 'U')
		     {
			             return EXIT_SUCCESS;
				             
				         }
	     else
		         {
				         return EXIT_FAILURE;
					         
					     }
}
char *remove_vowel (char arr1[][MAX_LEN], int index)
{
	    char large[MAX_LEN]; 
	        int d = 0;
		    for(int i = 0; arr1[index][i] != '\0'; i++)
			        {
					        if(isVowel (arr1[index] [i]) == 1)
							        {
									            large[d] = arr[index][i];
										                d++;
												        }
						    }
		        large[d] = '\0';
			    printf("After removing vowels %s\n", large);
			        
}

int display()
{
	    int i = 0; 
	        for(i = 0; i < 4; i++)
			    {
				            printf("%s\n", arr[i]);
					        }
		        return EXIT_SUCCESS;
}
        

int main()
{
	    int n;
	        char a; 
		    printf ("Enter any letter: \n");
		        scanf("%c", &a);
			    int d = isVowel(a); 
			        if(d==EXIT_SUCCESS)
					    {
						            printf("\nThe entered letter is a vowel\n");
							        }
				    else
					        {
							        printf ("\nThe entered letter is not a vowel\n");
								    }
				        printf("The contents of array before swapping:\n"); 
					    display();
					        printf("enter the index number: \n");
						    scanf("%d", &n); 
						        printf("The swapped element at given index is %s\n", swap_elements(arr,n));
							    remove_vowel (arr, n);
							        return EXIT_SUCCESS;
}
