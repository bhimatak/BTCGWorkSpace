#include<stdio.h>
#include<string.h>
int word_length(string str)
{
   	int len = str.length();
    	int temp = 0;
        int a = 0;
        for (int i = 0; i < len; i++)
       	{
                if (str[i] != ' ')
                           a++;                                
	       	else 
		{
                          temp = max(temp, a);
                          a = 0;
                 }
	}                                                             
return max(temp, a);
}
int main()
{
	char str[100];
	printf("Enter the string :\n");
	scanf("%[^\n]",str);
	printf("Length of longestword is:%d",len);
        return 0;
}	
                                                     
