#include <common.h>

PD* signUp(PD *pd)
{
	pd = (PD *)malloc(sizeof(PD));
	printf("\n\tEnter ID: ");
	scanf("%d",&pd->_id);
	printf("\n\tEnter Name: ");
	getchar();
	
	//fgets(pd->_name, 256,stdin);
	// pd->_name[strlen(pd->_name)-1] = '\0';
	scanf("%[^\n]s",pd->_name);
	printf("\n\tEnter Gender (M/F/O): ");
	getchar();
	scanf("%c",&pd->_gender);

	return pd;
}

void dispPD(PD *pd)
{
	printf("\n\tID: ");
	printf("%d",pd->_id);
	printf("\n\tName: ");
	printf("%s",pd->_name);
	printf("\n\tGender (M/F/O): ");
	printf("%c",pd->_gender);
}

int writePD(PD *pd)
{
	FILE *fp = NULL;

	fp = fopen("PD.dat","r+");
	if(fp == NULL)
	{
		perror("\n\tfopen() ");
		return -1;
	}

	fseek(fp, 0L, SEEK_END);
	fprintf(fp,"%d, %s, %c\n",pd->_id,pd->_name,pd->_gender);

	fclose(fp);


}

int readPD(PD *pd)
{
	FILE *fp = NULL;
	char tmpBuff[256] = {'\0', };
	PD tmppd;

	fp = fopen("PD.dat","r");
	if(fp == NULL)
	{
		perror("\n\tfopen() ");
		return -1;
	}

	fseek(fp, 0L, SEEK_SET);
	//fprintf(fp,"%d, %s, %c\n",pd->_id,pd->_name,pd->_gender);
	memset(tmpBuff,'\0', 256);
	while(fgets(tmpBuff, 256, fp)){
	
		printf("\n\tRead Buff: %s", tmpBuff);
		//memset(tmpBuff,'\0', 256);
		tokenizePD(&tmppd, tmpBuff);
	}

	fclose(fp);


}

int tokenizePD(PD *pd, char *tmpBuff)
{
	char *tokens;
	int i, count;

	tokens = strtok(tmpBuff, ",");
	printf("\n\t%s", tokens);
	pd->_id = atoi(tokens);
	tokens = strtok(NULL, ",");
	printf("\n\t%s", tokens);
	
	printf("\n\tLenght: %d", strlen(tokens));
	for(i=0, count=0;i<strlen(tokens); i++)
	{
		if(tokens[i]!=32){
			pd->_name[count]=tokens[i];
			count++;
		}
		else
			continue;
	}
	pd->_name[count]='\0';
	printf("\n\tMod Name: %s\n",pd->_name);
	//strcpy(pd->_name, tokens);
	//printf("\n\tName : %c = %d\n", pd->_name[0], pd->_name[0]);
	
	tokens = strtok(NULL, ",");
	printf("\n\t%s", tokens);
	pd->_gender = tokens[0];

	dispPD(pd);
}