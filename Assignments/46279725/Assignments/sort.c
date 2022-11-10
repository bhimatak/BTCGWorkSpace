#include<stdio.h>
int main()
{
	int index;
	int length;
	scanf("%d",&length);
	int arr[length];
	int head;
	int left;
	int right;
	int value;
	for(index = 0;index < length; index++)
	{
		scanf("%d",&arr[index]);
	}
	for(index = 1;index<length;index++)
	{
		head = arr[index];
		left = index-1;
		right = index+1;
	        while(left >= 0 && arr[left] < head)
		{
			left--;
		}
		while(right < length && arr[right] > head)
		{
			right++;
		}
		if(left == -1 && right == length)
		{
			printf("%d",arr[index]);
			value = 0;
		}
	}
	if(value!= 0)
	{
		printf("-1");
	}
}

