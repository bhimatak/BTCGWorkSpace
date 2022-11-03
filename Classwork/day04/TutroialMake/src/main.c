#include <common.h>

int main()
{
	char eName[20];
	//int phNo;

	if(geteName(eName)==0)
		printf("\nSuccessful Validation\n");
	else
		printf("\nName entered is not a valid name\n");
	//getphNo(&phNo);

	printf("\nName: %s",eName);
	//printf("\nPhNo: %d",phNo);
	
	printf("\n\n");
	return 0;
}
