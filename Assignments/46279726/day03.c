#include<stdio.h>
int main()
{
	char eName[10]={ '\0', };
	int iv;
	eName[0]='G';
	eName[1]='O';
	eName[2]='W';
	eName[3]='R';
	eName[4]='I';
	eName[5]='\0';

	for(iv=0;iv<10;iv++)
		printf("\n%c = %d",eName[iv], eName[iv]);
	        printf("\nName=%s", eName);
		printf("\n");
		return 0;
}

