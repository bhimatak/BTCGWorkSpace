/* Array of Structures */


#include <common.h>
#include <EmpStruct.h>

int main()
{
	//struct EmpStruct E[SIZE];


	struct EmpStruct *ePtr = NULL;
	struct EmpStruct *head = NULL;

	int *ptr;
	void *ptr1;
	char *cptr;

	int it;
	
	int NoOfEmps;

	printf("\n\tEnter the No of Employee Required: ");
	scanf("%d",&NoOfEmps);

	
	head = (struct EmpStruct *)malloc(NoOfEmps*sizeof(struct EmpStruct));

	eptr = head; 

	for(it =0;it<NoOfEmps;it++, ePtr++){

		printf("\n\tEnter %d Employee Details, \n",(it+1));
		printf("\n\tID: ");
		scanf("%d", &ePtr->eID);
		printf("\n\tName: ");
		scanf("%s", ePtr->eName);
		getc(stdin);
		printf("\n\tGender (M/F/O): ");
		scanf("%c", &ePtr->eGender);
		printf("\n\tAddress: ");
		scanf("%s", ePtr->eAddr);
		printf("\n\tPhone Number: ");
		scanf("%d",&ePtr->ePhone);
	}

	ePtr = head; //rebasing to the BA of head of the array

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