/* Array of Structures */


#include <common.h>
#include <EmpStruct.h>

int main()
{
	struct EmpStruct E[SIZE];
	int iv;
	for(iv =0 ;iv<3;iv++){

		printf("\n\tEnter %d Employee Details, \n",(iv+1));
		printf("\n\tID: ");
		scanf("%d", &E[iv].eID);
		printf("\n\tName: ");
		scanf("%s", E[iv].eName);
		getc(stdin);
		printf("\n\tGender (M/F/O): ");
		scanf("%c", &E[iv].eGender);
		printf("\n\tAddress: ");
		scanf("%s", E[iv].eAddr);
		printf("\n\tPhone Number: ");
		scanf("%d",&E[iv].ePhone);
	
	}

	for(iv=0;iv<3;iv++){
		printf("\n\t%d Employee Details, \n",(iv+1));
		printf("\n\tID: ");
		printf("%d", E[iv].eID);
		printf("\n\tName: ");
		printf("%s", E[iv].eName);
		printf("\n\tGender (M/F/O): ");
		printf("%c", E[iv].eGender);
		printf("\n\tAddress: ");
		printf("%s", E[iv].eAddr);
		printf("\n\tPhone Number: ");
		printf("%d",E[iv].ePhone);
	}

	printf("\n\n");
	return 0;

	
}