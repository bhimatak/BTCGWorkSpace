#include <common.h>

PD* signUp(PD *pd, int *_id)
{
	PD *newNode =NULL;
	PD *head = NULL;
	head = pd;

	newNode = (PD *)malloc(sizeof(PD));
	newNode->next = NULL;
	
	if(head == NULL)
	{
		//no records
		head = newNode;
		pd = newNode;
		printf("\n\tNNPD");
	}
	else
	{
		//records are present
		while(pd->next != NULL)
			pd = pd->next;

		pd->next = newNode;
		pd = pd->next;
		printf("\n\tNoNPD");
	}

	//pd = newNode;

	printf("\n\tEnter ID: ");
	scanf("%d",&newNode->_id);
	printf("\n\tEnter Name: ");
	getchar();
	
	// fgets(pd->_name, 256,stdin);
	// removeTrailing(pd->_name);
	
	scanf("%[^\n]s",newNode->_name);
	printf("\n\tEnter Gender (M/F/O): ");
	getchar();
	scanf("%c",&newNode->_gender);
	*_id = newNode->_id;
	
	return head;
}


LD* signInDetails(LD *ld, int _id)
{
	LD *newNode =NULL;
	LD *head = NULL;
	head = ld;

	newNode = (LD *)malloc(sizeof(LD));
	newNode->next = NULL;
	
	if(head == NULL)
	{
		//no records
		head = newNode;
		ld = newNode;
		printf("\n\tNNPD");
	}
	else
	{
		//records are present
		while(ld->next != NULL)
			ld = ld->next;

		ld->next = newNode;
		ld = ld->next;
		printf("\n\tNoNPD");
	}

	

	// printf("\n\tEnter ID: ");
	// scanf("%d",&newNode->_id);
	newNode->_id = _id;
	printf("\n\tEnter User Name: ");
	getchar();
	
	// fgets(pd->_name, 256,stdin);
	// removeTrailing(pd->_name);
	
	scanf("%s",newNode->_uName);
	printf("\n\tEnter Password: ");
	getchar();
	scanf("%s",newNode->_passwd);
	
	
	return head;
}

void dispPD(PD *pd)
{
	while(pd != NULL){
		printf("\n\tID: ");
		printf("%d",pd->_id);
		printf("\tName: ");
		printf("%s",pd->_name);
		printf("\tGender (M/F/O): ");
		printf("%c",pd->_gender);
		pd = pd->next;
	}
}


void dispLD(LD *ld)
{
	while(ld != NULL){
		printf("\n\tID: ");
		printf("%d",ld->_id);
		printf("\tUser Name: ");
		printf("%s",ld->_uName);
		printf("\tPassword: ");
		printf("%s",ld->_passwd);
		ld = ld->next;
	}
}

int writePD(PD *pd)
{
	FILE *fp = NULL;

	fp = fopen("PD.dat","w+");
	if(fp == NULL)
	{
		perror("\n\tfopen() ");
		return -1;
	}

	//fseek(fp, 0L, SEEK_END);
	if(pd == NULL)
		printf("\n\t NULL Write pd");
	while(pd != NULL){
		fprintf(fp,"%d, %s, %c\n",pd->_id,pd->_name,pd->_gender);
		//fprintf(stdout,"%d, %s, %c\n",pd->_id,pd->_name,pd->_gender);
		pd = pd->next;
	}

	fclose(fp);

	
}

int writeLD(LD *ld)
{
	FILE *fp = NULL;

	fp = fopen("LD.dat","w+");
	if(fp == NULL)
	{
		perror("\n\tfopen() ");
		return -1;
	}

	//fseek(fp, 0L, SEEK_END);
	if(ld == NULL)
		printf("\n\t NULL Write pd");
	while(ld != NULL){
		//printf("\n%d = %c", ld->_passwd[strlen(ld->_passwd)-1],ld->_passwd[strlen(ld->_passwd)-1]);
		fprintf(fp,"%d, %s, %s\n",ld->_id,ld->_uName,ld->_passwd);
		ld = ld->next;
	}

	fclose(fp);

	
}


PD* loadPD()
{
	FILE *fp = NULL;
	PD *newNode = NULL;
	PD *head = NULL;
	PD *pd; 
	int _fSize = 0;
	char tmpBuff[256] = {'\0', };
	
	fp = fopen("PD.dat","r");
	if(fp == NULL)
	{
		perror("\n\tfopen() ");
		return NULL;
	}

	fseek(fp, 0L, SEEK_SET);
	fseek(fp, 0L, SEEK_END);
	_fSize = ftell(fp);
	// printf("\n\tFile Size: %d\n",_fSize);

	if(_fSize == 0) /* No records */
	{
		head = NULL;
	}
	else
	{
		fseek(fp, 0L, SEEK_SET);
		memset(tmpBuff,'\0', 256);
		// head = newNode;
		while(fgets(tmpBuff, 256, fp)){
			
			if(head == NULL) /* first record */
			{
				newNode = (PD *)malloc(sizeof(PD));
				newNode->next = NULL;
				head = newNode;
				pd = newNode;
				tokenizePD(newNode, tmpBuff);
						
			}
			else /* rest of the records */
			{
				newNode = (PD *)malloc(sizeof(PD));
				newNode->next = NULL;
				pd->next = newNode;
				tokenizePD(newNode, tmpBuff);
				pd = pd->next;	
			}
			

		}

	}

	fclose(fp);
	// printf("\n\tHead : %u\nlast node: %u\n", head, pd);
	return head;

}


LD* loadLD()
{
	FILE *fp = NULL;
	LD *newNode = NULL;
	LD *head = NULL;
	LD *ld; 
	int _fSize = 0;
	char tmpBuff[256] = {'\0', };
	
	fp = fopen("LD.dat","r");
	if(fp == NULL)
	{
		perror("\n\tfopen() ");
		return NULL;
	}

	fseek(fp, 0L, SEEK_SET);
	fseek(fp, 0L, SEEK_END);
	_fSize = ftell(fp);
	// printf("\n\tFile Size: %d\n",_fSize);

	if(_fSize == 0) /* No records */
	{
		head = NULL;
	}
	else
	{
		fseek(fp, 0L, SEEK_SET);
		memset(tmpBuff,'\0', 256);
		// head = newNode;
		while(fgets(tmpBuff, 256, fp)){
			
			if(head == NULL) /* first record */
			{
				newNode = (LD *)malloc(sizeof(LD));
				newNode->next = NULL;
				head = newNode;
				ld = newNode;
				tokenizeLD(newNode, tmpBuff);
						
			}
			else /* rest of the records */
			{
				newNode = (LD *)malloc(sizeof(LD));
				newNode->next = NULL;
				ld->next = newNode;
				tokenizeLD(newNode, tmpBuff);
				ld = ld->next;	
			}
			

		}

	}

	fclose(fp);
	// printf("\n\tHead : %u\nlast node: %u\n", head, pd);
	return head;

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
	memset(tmpBuff,'\0', 256);
	while(fgets(tmpBuff, 256, fp)){
	
		// printf("\n\tRead Buff: %s", tmpBuff);
		tokenizePD(&tmppd, tmpBuff);
		memset(tmpBuff,'\0', 256);
	}

	fclose(fp);


}

int tokenizePD(PD *pd, char *tmpBuff)
{
	char *tokens;
	int i, count;
	char *tmpBuff1;

	tokens = strtok(tmpBuff, ",");
	pd->_id = atoi(tokens);

	tokens = strtok(NULL, ",");
	removeLeading(tokens,pd->_name);
	
	tokens = strtok(NULL, ",");
	removeLeading(tokens,tokens);
	removeTrailing(tokens);
	pd->_gender = tokens[0];

	//dispPD(pd);
}


int tokenizeLD(LD *ld, char *tmpBuff)
{
	char *tokens;
	int i, count;
	char *tmpBuff1;

	tokens = strtok(tmpBuff, ",");
	ld->_id = atoi(tokens);

	tokens = strtok(NULL, ",");
	removeLeading(tokens,ld->_uName);
	
	tokens = strtok(NULL, ",");
	removeLeading(tokens,ld->_passwd);
	removeTrailing(ld->_passwd);
	//dispPD(pd);
}

void removeLeading(char *str, char *str1)
{
    int idx = 0, j, k = 0;
 
    // Iterate String until last
    // leading space character
    while (str[idx] == ' ' || str[idx] == '\t' || str[idx] == '\n')
    {
        idx++;
    }
 
    // Run a for loop from index until the original
    // string ends and copy the content of str to str1
    for (j = idx; str[j] != '\0'; j++)
    {
        str1[k] = str[j];
        k++;
    }
 
    // Insert a string terminating character
    // at the end of new string
    str1[k] = '\0';
 
    // Print the string with no whitespaces
    //printf("%s", str1);
}

void removeTrailing(char *str)
{
	if((str[strlen(str)-1] == ' ' || str[strlen(str)-1] == '\t' || str[strlen(str)-1] == '\n'))
    {
    	str[strlen(str)-1] = '\0';
    }

}

int signIn(LD *head)
{
	LD _ld;
	int flag = 0;
	
	printf("\n\tEnter User Name: ");
	scanf("%s", _ld._uName);
	printf("\n\tEnter Password: ");
	scanf("%s",_ld._passwd);
	while(head != NULL)
	{
		if((strcmp(head->_uName, _ld._uName)==0)&&(strcmp(head->_passwd, _ld._passwd)==0))
		{
			flag = 1;
			break;
		}
		head = head->next;
	}

	if(flag == 1)
		return 1;
	return 0;
}