#include <common.h>
#include <configMenu.h>

int main()
{
	PD *pd = NULL;
	LD *ld = NULL;
	int ch = 0;

	while(1){
		printf("%s", WelCome);
		printf("%s", MainMenu);
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				pd = signUp(pd);
				//dispPD(pd);
				writePD(pd);

				break;
			case 2:
				readPD(pd);
				break;
			case 3:
				exit(EXIT_SUCCESS);
			default:
				printf("\n\tEnter the correct choice\n");

		}

	}


	printf("\n\n");

	return 0;
}

