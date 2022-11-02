#include <common.h>


int main()
{
	char str1[20] = {'\0',};
	char str2[20] = {'\0', };
	int sLength1 = 0, sLength2 = 0;

	printf("\nEnter string 1: ");
	scanf("%s",str1);

	printf("\nEnter string 2: ");
	scanf("%s",str2);

	sLength1 = strlen(str1);
	sLength2 = strlen(str2);

	printf("\nString lenght of str1: %d", sLength1);
	printf("\nString lenght of str2: %d", sLength2);

	return 0;
	
}