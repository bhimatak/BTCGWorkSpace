#include "Sort.h"
int sorting(int arr[],int size)
{
	int bt;
	int it;
	for(it=0;it<size;it++)
	{
		int flag=0;
		for(bt=0;bt<it;bt++)
		{
			if(arr[bt]>=arr[it])
			{
				flag=1;
				break;
			}
		}
		for(bt=it+1;bt<size;bt++)
		{
			if(arr[bt]<=arr[it])
			{
				flag=1;
				break;
			}
		}
          return -1;
	}
}
