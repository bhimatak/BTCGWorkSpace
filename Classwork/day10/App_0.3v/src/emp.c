#include <emp.h>

int loadData(EMP *e, int *NoOfEmps, char *fileName)
{
	FILE *fp = NULL;
	char buff[MAXBUFF];
	char *tokens;
	

	int i;

	fp = fopen(fileName, "r");
	
	if(fp == NULL)
	{
		perror("fopen ");
		return 0;
	}

	if(fseek(fp,0L, SEEK_SET)< 0)
	{
		perror("fseek() ");
		return 0;
	}

	i = 0;
	memset(buff,'\0', MAXBUFF);
	while(fgets(buff, MAXBUFF, fp))
	{
		
		tokens = NULL;
		
		
		tokens = strtok(buff, "|");
		e[i].eID = atoi(tokens);
		tokens = strtok(NULL, "|");
		e[i].eActive = tokens[0];
		tokens = strtok(NULL, "|");
		strcpy(e[i].eName, tokens);
		tokens = strtok(NULL, "|");
		e[i].eGender = tokens[0];
		tokens = strtok(NULL, "|");
		e[i].ePhone = atoi(tokens);
		tokens = strtok(NULL, "|");
		e[i].eSalary = atoi(tokens);
		
		i++;
		
	}

	*NoOfEmps = i;

	
	fclose(fp);
	return 1;
}

int addEmpDetails(EMP *e, int pos)
{
	printf("\n\t=========Enter the Details of the Employee=========\n");
	printf("\n\tID: ");
	scanf("%d", &e[pos].eID);
	printf("\n\tName: ");
	scanf("%s", e[pos].eName);
	getchar();
	printf("\n\tGender: ");
	scanf("%c",&e[pos].eGender);
	printf("\n\tPhone: ");
	scanf("%d",&e[pos].ePhone);
	printf("\n\tSalary: ");
	scanf("%f",&e[pos].eSalary);
	e[pos].eActive = '1';  // '1' -> Active, '0'-> inactive

	return 1;
}


void dispEmpAll(EMP *e, int Cap, int flag)
{
	int i;
	printf("\n\t=========Employee Details are=========\n");
	if(e == NULL){
		printf("\n\tError");
		return;
	}
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

int updateEmpRecs(EMP *tmpEmp, char *fileName, int NoOfEmps)
{
	FILE *fp = NULL;
	char buff[MAXBUFF];
	char *tokens;
	EMP e;
	int i, bufflen=0, flag=0;

	fp = fopen(fileName, "r+");
	
	if(fp == NULL)
	{
		perror("fopen ");
		return 0;
	}

	if(fseek(fp,0L, SEEK_SET)< 0)
	{
		perror("fseek() ");
		return 0;
	}
		
	for(i=0;i<NoOfEmps;i++)
	{
		memset(buff,'\0', MAXBUFF);
		tokens = NULL;
		fgets(buff, MAXBUFF, fp);
		bufflen = strlen(buff);
		tokens = strtok(buff, "|");
		e.eID = atoi(tokens);
		tokens = strtok(NULL, "|");
		e.eActive = tokens[0];
		tokens = strtok(NULL, "|");
		strcpy(e.eName, tokens);
		tokens = strtok(NULL, "|");
		e.eGender = tokens[0];
		tokens = strtok(NULL, "|");
		e.ePhone = atoi(tokens);
		tokens = strtok(NULL, "|");
		e.eSalary = atoi(tokens);
		
		if(e.eID == tmpEmp->eID)
		{
			flag = 1;
			break;
		}
		
	}

	if(flag == 1)
	{
		fseek(fp,-1*(bufflen),SEEK_CUR);
		
		if(fprintf(fp,"%d|", tmpEmp->eID)<=0)
			return 0;
		fprintf(fp, "%c|", tmpEmp->eActive);
		fprintf(fp, "%s|", tmpEmp->eName);
		fprintf(fp,"%c|", tmpEmp->eGender);
		fprintf(fp,"%d|", tmpEmp->ePhone);
		fprintf(fp,"%f",tmpEmp->eSalary);
		fprintf(fp,"\n");
		//fputs((char*)tmpEmp, sizeof(tmpEmp), fp);

	}

	
	fclose(fp);
	return 1;
}

/*
int writeToFile(EMP *e, FILE *fp)
{
	if (e == NULL)
		return 0;

	if(fseek(fp,0L, SEEK_END)< 0)
	{
		perror("fseek() ");
		return 0;
	}

	if(fprintf(fp,"%d|", e->eID)<=0)
		return 0;
	fprintf(fp, "%s|", e->eName);
	fprintf(fp,"%c|", e->eGender);
	fprintf(fp,"%d|", e->ePhone);
	fprintf(fp,"%f\n",e->eSalary);

	return 1;
}

*/

int writeToFile(EMP *e, char *fileName)
{
	FILE *fp = NULL;

	fp = fopen(fileName, "r+");
	
	if(fp == NULL)
	{
		perror("fopen ");
		return 0;
	}

	if (e == NULL)
		return 0;
	
	if(fseek(fp,0L, SEEK_END)< 0)
	{
		perror("fseek() ");
		return 0;
	}

	if(fprintf(fp,"%d|", e->eID)<=0)
		return 0;
	fprintf(fp, "%c|", e->eActive);
	fprintf(fp, "%s|", e->eName);
	fprintf(fp,"%c|", e->eGender);
	fprintf(fp,"%d|", e->ePhone);
	fprintf(fp,"%f\n",e->eSalary);

	fclose(fp);
	return 1;
}


int countRecs(char *fileName, int *NoOfEmps)
{
	FILE *fp = NULL;
	char buff[MAXBUFF];
	
	int count = 0;

	fp = fopen(fileName, "r");
	
	if(fp == NULL)
	{
		perror("fopen ");
		return 0;
	}

	if(fseek(fp,0L, SEEK_SET)< 0)
	{
		perror("fseek() ");
		return 0;
	}
	
	while(fgets(buff, MAXBUFF, fp))
	{
		count++;
	}
	*NoOfEmps = count;

	
	fclose(fp);
	return 1;
}



int readDBAll(EMP *e, char *fileName, int NoOfEmps)
{
	FILE *fp = NULL;
	char buff[MAXBUFF];
	char *tokens;
	int i;

	fp = fopen(fileName, "r");
	
	if(fp == NULL)
	{
		perror("fopen ");
		return 0;
	}

	if(fseek(fp,0L, SEEK_SET)< 0)
	{
		perror("fseek() ");
		return 0;
	}
		
	for(i=0;i<NoOfEmps;i++)
	{
		memset(buff,'\0', MAXBUFF);
		tokens = NULL;
		fgets(buff, MAXBUFF, fp);
		
		tokens = strtok(buff, "|");
		e[i].eID = atoi(tokens);
		tokens = strtok(NULL, "|");
		e[i].eActive = tokens[0];
		tokens = strtok(NULL, "|");
		strcpy(e[i].eName, tokens);
		tokens = strtok(NULL, "|");
		e[i].eGender = tokens[0];
		tokens = strtok(NULL, "|");
		e[i].ePhone = atoi(tokens);
		tokens = strtok(NULL, "|");
		e[i].eSalary = atoi(tokens);
		
		
	}

	
	fclose(fp);
	return 1;
}

int writeData(EMP *e, char *fileName, int NoOfEmps)
{
	FILE *fp = NULL;
	char buffer[MAXBUFF] = { '\0', };
	int i;
	fp = fopen(fileName, "w+");
	if(fp == NULL)
	{
		perror("fopen() ");
		return 0;
	}

	for(i=0;i<NoOfEmps;i++)
	{
		memset(buffer, '\0', MAXBUFF);
		sprintf(buffer,"%d|%c|%s|%c|%d|%f\n",e[i].eID,e[i].eActive,e[i].eName, e[i].eGender, e[i].ePhone, e[i].eSalary);
		fputs(buffer, fp);
	}	

	
	fclose(fp);
	return 1;
}