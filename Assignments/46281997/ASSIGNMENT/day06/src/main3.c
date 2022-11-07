/* Array of Structures */


#include <common.h>
#include <EmpStruct.h>

int main()
{
	struct EmpStruct E[SIZE];
	struct EmpStruct *ePtr;
	int it;
	int iv;
	int NoOfEmps = 2;

	//EPTR should point to the BA of emp
	printf("\nSize of the EmpStruct=%ld\n", sizeof(struct EmpStruct));
	ePtr = E;

	for(it =0;it<NoOfEmps;it++, ePtr++){

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

	for(it=0;it<NoOfEmps;it++, ePtr++){
		printf("\n\t%d Employee Details, \n",(it+1));
		printf("\n\tID: ");
		printf("%d", ePtr->eID);
		printf("\n\tName: ");
		printf("%s", ePtr->eName);
		printf("\n\tGender (M/F/O): ");
		printf("%c", ePtr->eGender);
		printf("\n\tAddress: ");
		printf("%s", ePtr->eAddr);
		printf("\n\tPhone Number: ");
		printf("%d",ePtr->ePhone);
	}

	printf("\n\n");
	return 0;

	
}
