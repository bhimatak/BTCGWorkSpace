#include "Sort.h"
int sorting(int arr[],int size)
{
	int bt;
	int it;
	int mid;
	mid=1;
        int flag;
	while(mid!=size)
	{
	for(it=0,bt=(mid+1);(it<mid)&&(bt<size);it++,bt++)
	{
		if((arr[it]<arr[mid])&&(arr[bt]>arr[mid]))
	
			continue;
		else
			break;
	flag=1;
	}
	mid++;
	}
	if(flag==1)
		printf("%d",mid);
	else
		printf("-1");

}
