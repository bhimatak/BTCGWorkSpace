#include <stdio.h>

#define square(x)  x*x



int main()
{
	int a[5] = {5,1,15,20,25};

	int i,j,m;

	i = ++a[1];
	j = a[1]++;
	m = a[i++];

	printf("\n %d %d %d\n",i,j,m);

	printf("\n %d %d %d %d %d",a[0],a[1],a[2],a[3],a[4]);



	return 0;
}