/* Array of Structures */

#include <common.h>
#include <EmpStruct.h>

int main()
{
	struct EmpStruct *ePtr = NULL;
	struct EmpStruct *head = NULL;

	char tmpName[20];
	int NoOfEmps;

	printf("\n\tEnter the No of Employee Required: ");
	scanf("%d",&NoOfEmps);
	
	head = (struct EmpStruct *)malloc(NoOfEmps*sizeof(struct EmpStruct));
	ePtr = head;
	/*
	printf("\nsize: %lu",malloc_usable_size(ePtr)/sizeof (*ePtr) );
	printf("\nsize: %lu",(ePtr+NoOfEmps)-(ePtr));

	printf("\nSize: %ld", sizeof(E)/sizeof(E[0]));
	printf("\nSt: %ld", sizeof(struct EmpStruct));
	*/
	getEmpDetails(ePtr, NoOfEmps);
		
	dispEmp(ePtr, NoOfEmps);

	printf("\n\tEnter the Name of the Employee to be searched: ");
	scanf("%s", tmpName);
	if(findEmpDetails(ePtr,tmpName) == 0)
		printf("\n\tEmployee Not Found\n");
	else
		printf("\n\tEmployee Found");
	
	
	printf("\n\n");

	return 0;
}


