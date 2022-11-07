#include<stdio.h>
#include<string.h>
#define MAX 500

int main()
{
	char arr[MAX];
	char longest[30];
	int count =0;
	int max=0,i,j=0,index = 0,length =0;
	printf("\n enter sentence:\n");
        fgets(arr,MAX,stdin);
	printf("\n sentence is : %s\n", arr);
        length = strlen(arr);
	printf("\n length %d\n",length);
	for (i=0;i<length;i++)
	{
		if(arr[i] != ' ')
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
			count =0;
		}
	}
	if(count >max)
	{
		max = count;
		index = length -max;
	}
	for(i=index;i<index+max;i++)
	{
		longest[j] = arr[i];
		j++;
	}
	longest[j] = '\0';
	printf("LOngest word: %s \n ",longest);
	printf("length %d\n",max);
	return 0;
}











