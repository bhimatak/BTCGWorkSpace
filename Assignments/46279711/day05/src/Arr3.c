#include<stdio.h>
#include<string.h>
#define MAX 500

int main()
{
	        char arr[MAX];
	 	int length;
		int i;
		char repchar;
		printf("\n enter sentence :");
	       	fgets(arr,MAX,stdin);
		printf("\n sentence is : %s\n", arr);
		length = strlen(arr);
		printf("\n length %d\n",length);
		printf("ENter char:");
		repchar=getchar();
		for (i=0;i<length;i++)
		{
			if(arr[i] = ' ')
			{
				arr[i]=repchar;
			}
		}
		arr[i] = '\0';
		printf("\n senctence after replace %s\n",arr);
		return 0;
}
																
