#include <stdio.h>
#define Size 100

int Sort(char arr[])
{
	char temp;
	int id;
	int ind;
	for(id=0;id<Size-1;id++)
	{
		for(ind=id+1;ind<Size;ind++)
		{
			if (((int)arr[id])>((int)arr[ind]))
			{
				temp=arr[id];
				arr[id]=arr[ind];
				arr[ind]=temp;
			}
		}

	}
	for(id=0;id<Size;id++)
		printf("%c  ",arr[id]);
}
int main()
{
	char array[Size];
	int i;
	printf("Enter a name");
	fgets(array,Size,stdin);
	Sort(array);
	return 0;
}

