/* Array of Structures */

#include <common.h>
#include <EmpStruct.h>

int main()
{
	struct EmpStruct E[SIZE];
	char tmpName[20];
	int NoOfEmps;

	printf("\n\tEnter the No of Employee Required: ");
	scanf("%d",&NoOfEmps);

	getEmpDetails(E, NoOfEmps);
		
	dispEmp(E, NoOfEmps);

	printf("\n\tEnter the Name of the Employee to be searched: ");
	scanf("%s", tmpName);
	if(findEmpDetails(E,tmpName) == 0)
		printf("\n\tEmployee Not Found\n");
	else
		printf("\n\tEmployee Found");
	
	printf("\n\n");
	return 0;
}


