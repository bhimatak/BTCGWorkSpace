#include <stdio.h>
#include<stdlib.h>
int main()
{
	int a[10];
	int i,n,temp;
	printf("How many elements ....\n");
        scanf("%d", &n);
        printf("Enter elements  \n");
        for( i=0;i<n;i++)
        {
	       	scanf("%d",a+i);
	}
	for(i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i] >a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j]=temp;
			}
		}
	}
	printf("After arranged  \n");
	for(i=0;i<n;i++)
		printf("%d\n", a[i]);

}
