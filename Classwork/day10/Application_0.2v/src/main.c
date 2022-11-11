#include <common.h>
#include <emp.h>


int main()
{
	EMP *e = NULL;
	EMP *head = NULL;
	
	int NoOfEmps=0, i, _id;
	int pos = 0;
	//int retValue = 0;
	int choice = 0;
	char _name[BUFF] = {'\0', };
	int _phone = 0;
	float _sal = 0.0;

	while(1){
		e = head;
		pos = 0;
		memset(_name, '\0', BUFF);
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
				choice = dispUpdateMenu();
				switch(choice)
				{
					case 1:
						//update Name
						printf("\n\tEnter the Employee ID(TBU): ");
						scanf("%d",&_id);
						pos = findEmpID(e,NoOfEmps,_id);
						if(pos == -1)
							printf("\n\tNo such employee exists\n");
						else
						{
							printf("\n\tEmployee Found\n");
							dispEmpAll(&e[pos], 1, 1);
							printf("\n\tEnter New Employee Name: ");
							scanf("%s", _name);
							if(updateEmpName(&e[pos], _name)==-1)
								printf("\n\tUnable to Update the Details\n");
							else
							{
								printf("\n\tUpdated Details of Employee\n");
								dispEmpAll(&e[pos], 1, 1);
							}
						}
						break;
					case 2:
						//update phno
						
						printf("\n\tEnter the Employee ID(TBU): ");
						scanf("%d",&_id);
						pos = findEmpID(e,NoOfEmps,_id);
						if(pos == -1)
							printf("\n\tNo such employee exists\n");
						else
						{
							
							dispEmpAll(&e[pos], 1, 1);
							printf("\n\tEnter New Phone Number : ");
							scanf("%d",&_phone);
							if(updateEmpPhone(&e[pos], _phone)==-1)
								printf("\n\tUnable to Update the Details\n");
							else
							{
								printf("\n\tUpdated Details of Employee\n");
								dispEmpAll(&e[pos], 1, 1);
							}
						}
						break;
					case 3:
						//update sal

						printf("\n\tEnter the Employee ID(TBU): ");
						scanf("%d",&_id);
						pos = findEmpID(e,NoOfEmps,_id);
						if(pos == -1)
							printf("\n\tNo such employee exists\n");
						else
						{
							
							dispEmpAll(&e[pos], 1, 1);
							printf("\n\tEnter Updated Salary : ");
							scanf("%f", &_sal);
							if(updateEmpSalary(&e[pos], _sal)==-1)
								printf("\n\tUnable to Update the Details\n");
							else
							{
								printf("\n\tUpdated Details of Employee\n");
								dispEmpAll(&e[pos], 1, 1);
							}
						}
						break;
					case 4:
						printf("\n\tReturning back to Main Menu\n");
						break;
					default:
						printf("\nEnter correct choice\n");
				}
				choice = 0;
				break;
			case 3:
				printf("\n\tEnter the Employee ID: ");
				scanf("%d",&_id);
				pos = findEmpID(e,NoOfEmps,_id);
				if(pos == -1)
					printf("\n\tNo such employee exists\n");
				else
				{
					printf("\n\tEmployee Found\n");
					dispEmpAll(&e[pos], 1, 1);
				}
				break;
			case 4:
				printf("\n\tEnter the Employee Name: ");
				scanf("%s",_name);
				pos = findEmpName(e,NoOfEmps,_name);
				if(pos == -1)
					printf("\n\tNo such employee exists\n");
				else
				{
					printf("\n\tEmployee Found\n");
					dispEmpAll(&e[pos], 1, 1);
				}
				break;
			case 5:
				printf("\n\tEnter the Employee ID(TBD): ");
				scanf("%d",&_id);
				pos = findEmpID(e,NoOfEmps,_id);
				if(pos == -1)
					printf("\n\tNo such employee exists\n");
				else
				{
					
					dispEmpAll(&e[pos], 1, 1);
					if(delEmpID(&e[pos])==-1)
						printf("\n\tUnable to Update the Details\n");
					else
					{
						printf("\n\tEmployee account is now inactive/deleted\n");
						dispEmpAll(&e[0], NoOfEmps, 0);
					}
				}
				break;
			case 6:
				dispEmpAll(e, NoOfEmps, 0);
				//pause();
				sleep(2);
				break;
			case 7:
				printf("\n\tEnter the Employee ID: ");
				scanf("%d",&_id);
				pos = findEmpID(e,NoOfEmps,_id);
				
				if(pos == -1)
					printf("\n\tNo such employee exists\n");
				else
					dispEmpAll(&e[pos], 1, 1);
					
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