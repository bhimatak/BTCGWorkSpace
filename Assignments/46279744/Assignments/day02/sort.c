#include<stdio.h>
int main()
{
	int i,c0=0,c1=0,c2=0,n,a;
	printf("Enter the no of elements : \n");
	scanf("%d",&n);
	printf("Enter array elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(a==0)
		        c0++;
		else if(a==1)
			c1++;
		else
			c2++;
	}
	printf("Array after sorting :\n");
	while(c0!=0)
	{
		printf("0 \n");
		c0--;
	}
	while(c1!=0)
	{
		printf("1 \n");
		c1--;
	}
	while(c2!=0)
	{
		printf("2 \n");
		c2--;
	}
	while(c2!=0)
	{
		printf("2 \n");
		c2--;
	}
}
