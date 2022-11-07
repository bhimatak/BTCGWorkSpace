#include<stdio.h>

int findElement(int A[], int n);
int main()
{
	int A[] = {4, 3, 2, 5, 8, 6, 7};
	int x;
	int n = sizeof(A) / sizeof(A[0]);
	x = findElement(A, n);
	printf("%d \n",x);
	return 0;
}
int findElement(int A[], int n)
{
	for(int i = 0; i < n; i++)
	{
		int flag = 0;
		for(int j =0; j < i; j++)
			if(A[j] >= A[i])
			{
				flag = 1;
				break;
			}
		for(int j = i+1; j < n; j++)
			if(A[j] <= A[i])
			{
				flag = 1;
				break;
			}
		if(flag == 0)
			return A[i];
	}
	return -1;
}
