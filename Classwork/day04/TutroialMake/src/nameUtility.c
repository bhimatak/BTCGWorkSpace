#include <common.h>

int geteName(char *Name)
{
	char temp[256];
	int flag = 0, i;

	bzero(Name,20);
	printf("\nEnter Name: ");
	fgets(temp, 1024, stdin);

	//printf("\nTemp=%s",temp);
	
	for(i=0;i<strlen(temp);i++)
	{
		if(temp[i] == 10)
			temp[i] = '\0';
	}

	for(i=0;i<strlen(temp);i++)
	{
		//printf("\n%c = %d",temp[i],temp[i]);
		if(temp[i] == 32)
			continue;
		if(((temp[i] >=65)&&(temp[i] <= 90)) || ((temp[i]>=97)&&(temp[i]<=122)))
				continue;
		else
		{
			flag = 1;
			break;
		}
		
	}

	if(flag == 1)
		return 1;
	
	strcpy(Name, temp);	
	return 0;
}
