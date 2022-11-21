#include <common.h>
#include <configMenu.h>

int main()
{
	PD *pd = NULL;
	PD *headpd = NULL;
	LD *ld = NULL;
	LD *headld = NULL;

	int ch = 0, _id=0;
	headpd = loadPD(pd);
	/*if(headpd == NULL)
	{
		//headpd = (PD *)malloc(sizeof(PD));
		//headpd->next = NULL;
		
		printf("\n\tNULLPD\n");
	}*/
	pd = headpd;
	
	headld = loadLD(ld);
	/*if(headld == NULL)
	{
		//headld = (LD *)malloc(sizeof(LD));
		//headld->next = NULL;
		printf("\n\tNULLLD\n");
	}*/
	ld = headld;

	while(1){

		system("clear");
		printf("%s", WelCome);
		printf("%s", MainMenu);
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				headpd = signUp(headpd,&_id);
				headld = signInDetails(headld, _id);
				//dispPD(headpd);
				//dispLD(headld);
				// writePD(headpd);
				// writeLD(headld);
				//headpd = pd;
				//headld = ld;
				printf("\n\tSuccessfully Registered\n");
				sleep(2);
				break;

			case 2:
				//readPD(headpd);
				if(signIn(headld) == 0){
					printf("\n\tUser/password does not match db\n");

				}
				else{
					printf("\n\tLogged In\n");
				}
				sleep(2);
				break;

			case 3:
				dispPD(headpd);
				sleep(2);
				break;

			case 4:
				dispLD(headld);
				sleep(2);
				break;

			case 5:
				writePD(headpd);
				writeLD(headld);
				exit(EXIT_SUCCESS);
			default:
				printf("\n\tEnter the correct choice\n");

		}

	}


	printf("\n\n");

	return 0;
}

