#include <common.h>
#include <EmpStruct.h>

void dispEmp(struct EmpStruct E[], int n)
{
	int iv;
	for(iv=0;iv<n;iv++){
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
}


void getEmpDetails(struct EmpStruct E[], int n)
{
	int iv;
	for(iv =0;iv<n;iv++){

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
}

int findEmpDetails(struct EmpStruct *E, char *Name)
{
	size_t n = malloc_usable_size(E)/sizeof(*E); 
	int iv, flag = 0;
	printf("\n\tN=%ld",n);
	for(iv=0;iv<n;iv++)
	{
		if(strcmp(E[iv].eName, Name)==0)
		{
			flag = 1;
			break;
		}

	}

	if(flag == 1)
		return 1;
	return 0;
}