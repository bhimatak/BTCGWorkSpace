#include "common.h"
#include "EmpStruct.h"

int main()
{
	struct EmpStruct E1;
	printf("\n\tEnter Employee details: ,\n");
	printf("\n\tID: ");
	scanf("%d",&E1.eID);
	printf("\n\tName: ");
	scanf("%s",E1.eName);
	getc(stdin);
        printf("\n\tGender (M/F/O): ");
	scanf("%c",&E1.eGender);
	printf("\n\tAddress: ");
	scanf("%s",E1.eAddr);
	printf("\n\tPhone Number: ");
	scanf("%d",&E1.ePhone);


	printf("\n\tEmployee Details, \n");
	scanf("\n\tID: ");
	printf("%d",E1.eID);
	printf("\n\tName: ");
	printf("%s",E1.eName);
	printf("\n\tGender (M/F/O): ");
	printf("%c",E1.eGender);
	printf("\n\tAddress: ");
	printf("%s",E1.eAddr);
	printf("\n\tPhone Number: ");
	printf("%d",E1.ePhone);

	printf("\n\n");
	return 0;
}

