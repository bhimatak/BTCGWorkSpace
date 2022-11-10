#include <common.h>


int main()
{
	char str1[20] = {'\0',};
	char str2[20] = {'\0', };
	char str3[5] = { '\0', };
	int sLength1 = 0, sLength2 = 0;
	int cmpValue = 0;

	printf("\nEnter string 1: ");
	scanf("%s",str1);

	printf("\nEnter string 2: ");
	scanf("%s",str2);

	sLength1 = strlen(str1);
	sLength2 = strlen(str2);

	printf("\nString lenght of str1: %d\n", sLength1);
	printf("\nString lenght of str2: %d\n", sLength2);

	cmpValue = strcmp(str1, str2);

	/*printf("\ncmpValue = %d\n", cmpValue);*/

	if(cmpValue == 0)
		printf("\nBoth str1 and str2 are same\n");
	else if(cmpValue < 0)
		printf("\nstr1 is less than str2\n");
	else
		printf("\nstr1 is greater than str2\n");


	strcpy(str3, str2);

	printf("\nString 3 value: %s\nLength : %d\n\n", str3, strlen(str3));


	return 0;
	
}