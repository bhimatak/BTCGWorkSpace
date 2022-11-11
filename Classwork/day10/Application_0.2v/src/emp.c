#include <emp.h>

int addEmpDetails(EMP *e)
{
	printf("\n\t=========Enter the Details of the Employee=========\n");
	printf("\n\tID: ");
	scanf("%d", &e->eID);
	printf("\n\tName: ");
	scanf("%s", e->eName);
	getchar();
	printf("\n\tGender: ");
	scanf("%c",&e->eGender);
	printf("\n\tPhone: ");
	scanf("%d",&e->ePhone);
	printf("\n\tSalary: ");
	scanf("%f",&e->eSalary);
	e->eActive = '1';  // '1' -> Active, '0'-> inactive

	return 1;
}


void dispEmpAll(EMP *e, int Cap, int flag)
{
	int i;
	printf("\n\t=========Employee Details are=========\n");
	if(e == NULL)
		printf("\n\tError");
	if(flag == 1)
		Cap = 1;
	for(i=0;i<Cap;i++,e++)
	{
		if(e->eActive == '1'){
			printf("\n\t=====================================\n");
			printf("\n\tID: %d", e->eID);
			printf("\n\tName: %s", e->eName);
			printf("\n\tGender: %c", e->eGender);
			printf("\n\tPhone: %d", e->ePhone);
			printf("\n\tSalary: %f",e->eSalary);
			printf("\n\t=====================================\n");
		}
	}
}

void dispEmpIDs(EMP *e, int Cap)
{
	int i;
	printf("\n\t=========Employee IDs are=========\n");
	if(e == NULL){
		printf("\n\tError");
		return;
	}
	for(i=0;i<Cap;i++,e++)
	{
		if(e->eActive == '1')
			printf("\n\tID: %d", e->eID);
	}
}


int findEmpID(EMP *e, int Cap, int _id)
{
	int i, flag=0;
	
	for(i=0;i<Cap;i++,e++)
	{
		if(e->eActive == '1'){

			if(e->eID == _id)
			{
				flag = 1;
				break;
			}
		}
	}

	if(flag == 1)
		return i;

	return -1;
}


int findEmpName(EMP *e, int Cap, char *_name)
{
	int i, flag=0;
	if((e == NULL) || (_name == NULL))
		return -1;
	for(i=0;i<Cap;i++,e++)
	{
		if(e->eActive == '1'){

			if(strcmp(e->eName,_name)==0)
			{
				flag = 1;
				break;
			}
		}
	}

	if(flag == 1)
		return i;

	return -1;
}


/*int delEmpID(EMP *e, int Cap, int _id)
{
	
	int pos = findEmpID(e, Cap, _id);

	if(pos == -1)
	{
		//printf("\n\tNo such employee exists\n");
		return 0;
	}
	e[pos].eActive = '0'; // if found make it inactive

	return 1;
}
*/

int updateEmpName(EMP *e, char *_name)
{
	if((e==NULL) || (_name==NULL))
		return -1;
	strcpy(e->eName, _name);

	return 1;
}

int updateEmpPhone(EMP *e, int _phone)
{
	if(e==NULL)
		return -1;
	if(_phone <=0)
		return -1;
	e->ePhone = _phone;

	return 1;
}

int updateEmpSalary(EMP *e, float _sal)
{
	if(e==NULL)
		return -1;
	if(_sal <=0)
		_sal = 0;
	e->eSalary = _sal;

	return 1;
}

int delEmpID(EMP *e)
{
	if(e==NULL)
		return -1;
	e->eActive = '0';

	return 1;
}