#include <common.h>
#include <emp.h>


int main()
{
	EMP *e = NULL;
	EMP *head = NULL;
	
	int NoOfEmps=0, i;
	int pos = 0;
	int retValue = 0;
	int choice = 0;
	while(1){
		choice = dispMainMenu();
	
		switch(choice)
		{
			case 1:
				printf("\n\tEnter the Number of Employees: ");
				scanf("%d",&NoOfEmps);
				head = (EMP *)malloc(NoOfEmps*sizeof(EMP));
				e = head;
				for(i=0;i<NoOfEmps;i++,e++)
					addEmpDetails(e);
				e = head;
				break;

			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
				dispEmpAll(e, NoOfEmps, 0);
				//pause();
				sleep(5);
				break;
			case 7:
				dispEmpAll(e, NoOfEmps, 1);
				break;
			case 8:
					printf("\n\tThank You for using EMS\n\n");
					exit(EXIT_SUCCESS);
			default:
				printf("\nEnter correct choice\n");
		}
	}

	
	printf("\n\n");

	return 0;

}