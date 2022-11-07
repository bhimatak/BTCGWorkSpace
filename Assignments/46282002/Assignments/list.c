#include <stdio.h>
#include "list.h"
int arrange(int arr[],int size)
{
	int k;
	k=0;
	int another_array[10];
	int cnt=0;
	int it;
	while(k<3)
	{
	for(it=0;it<size;it++)
	{
		if(arr[it]==k)
		{
		    another_array[cnt]=k;
	    	    cnt++;
		}
	}		
	k++;
	}
	for(cnt=0;cnt<size;cnt++)
	{
		printf("%d\t",another_array[cnt]);
	}
	return 0;


}


