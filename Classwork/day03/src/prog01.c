/*

strings => collection of chars
each char is of 1 byte

string => "bhima"

2002 + 2 = 2004

"2002" + 2 illegal


int a[100] = { 0, };

a[0] = 1;
..

char eName[5] = "bhima";

printf("\n %s", eName);
=> seg core dump


null char => '\0'

*/


#include <common.h>

int main()
{

	char eName[10] = { '\0', };

	int iv;
	eName[0] = 'B';
	eName[1] = 'H';
	eName[2] = 'I';
	eName[3] = 'M';
	eName[4] = 'A';
	eName[5] = '\0';



	for(iv=0;iv<10;iv++)
		printf("\n%c = %d",eName[iv], eName[iv]);


	printf("\nName = %s", eName);

	printf("\n");

	return 0;

}