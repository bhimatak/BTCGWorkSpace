/* Array of Structures */

#include <common.h>
#include <EmpStruct.h>

int main()
{
	//struct EmpStruct E[SIZE];
	struct EmpStruct *ePtr = NULL;
	struct EmpStruct *head = NULL;

	char tmpName[20];
	int NoOfEmps;

	printf("\n\tEnter the No of Employee Required: ");
	scanf("%d",&NoOfEmps);
	
	head = (struct EmpStruct *)malloc(NoOfEmps*sizeof(struct EmpStruct));
	ePtr = head;
	getEmpDetails(ePtr, NoOfEmps);
		
	dispEmp(ePtr, NoOfEmps);

	printf("\n\tEnter the Name of the Employee to be searched: ");
	scanf("%s", tmpName);
	if(findEmpDetails(ePtr,tmpName, NoOfEmps) == 0)
		printf("\n\tEmployee Not Found\n");
	else
		printf("\n\tEmployee Found");
	
	printf("\n\n");
	return 0;
}


