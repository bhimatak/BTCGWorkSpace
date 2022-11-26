/****************************************************************************************************
 * FILE NAME       : main.c
 *
 * DESCRIPTION     : This file contains main function which calls all other function to
 *                   perform required operation
 *                
 *
 * Revision History:
 *
 * DATE         NAME                REFERENCE          REASON
 ********************************************************************************************************
 * 24-11-22    GROUP 04                New           Changes Committed
 *********************************************************************************************************
 * Copyright 2022, Altran Group All Rights Reserved
 *
 *******************************************************************************************************/

/***************************************************************************
*                           HEADER FILES
*****************************************************************************/
#include <common.h>
#include <configMenu.h>

/*******************************************************************
 * FUNCTION NAME: main()
 * DESCRIPTION  : main function which calls all other function to
 *                perform required operation
 * RETURNS      :  returns SUCCESS or FAILURE
 *******************************************************************/

int main()
{	
	UPD *upd = NULL;
	UPD *headupd = NULL;
	LD *ld = NULL;
	LD *headld = NULL;
	CFSS *cfss = NULL;
	CFSS *headcfss= NULL;

	//int login=0;
	int ch1=0;
	int user=0;
	int ch = 0, _id=0;
	int regFlag=0;
	int PhoneNo;
	int refId = 0;

	headupd = loadUPD();
	upd = headupd;
	headcfss = loadCFSS();
	
	cfss = headcfss;
	
	headld = loadLD(ld);
	ld = headld;

	while(1){

		system("clear");
		printf("%s",style);
		printf("%s", WelCome);
		printf("%s",style);
		printf("%s", MainMenu);
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				headupd = signUp(headupd,&_id);
				headld = signInDetails(headld, _id);
				headcfss = initCFSS(headcfss, _id);
					
				//dispPD(headpd);
				//dispLD(headld);
				// writePD(headpd);
				// writeLD(headld);
				//headpd = pd;
				//headld = ld;
				//writeCFSS(headcfss);
				printf("\n\tSuccessfully Registered\n");
				sleep(2);
				break;

			case 2:
				//readPD(headpd);

				printf("\n\t*****************************LOGIN PAGE ****************************");
		printf("%s",style);
				/*printf("\n\tPress \n\t1.Login as Admin \n\t2.Login as User \n\tChoose :");
				scanf("%d",&login);
				switch (login)
				{
					case 1:
						AdminLogin();
						printf("\n\tSUCCESSFULLY LOGGED IN\n");
						printf("\n\nPress \n\t1.Update \n\t2.Delete \n\tChoose :");
						scanf("%d",&admin);
						switch(admin)
						{
							case 1:
								UpdateDetails(headupd);
								writeUPD(headupd);
								break;
							case 2:
								DeleteUser(headupd);
								writeUPD(headupd);
								break;
							default:
								printf("\n\tEnter a correct choice ");
								break;
						}

						admin=0;
						break;
					case 2:*/
						if(signInUser(headld, &refId) == 0)
						{
							printf("\n\tUser/password does not match db\n");
							break;
						}
						else
						{

							printf("\n\tSUCCESSFULLY LOGGED IN\n");
							
						}

						printf("\n\tPress \n\t1.Register for CFSS \n\t2.Unregister for CFSS \n\t3.Make	a call \n\t4.Exit ");
						printf("\n\tEnter your Choice : ");
						scanf("%d",&user);
						
						switch(user)
						{
							case 1 :
								printf("\n\t**************************CFSS REGISTRATION PAGE*********************");
								printf("%s",style);
								printf("\n\tPress \n\t1.Activate Call Forwarding");
								printf("\n\t2.Deactivate Call Forwarding ");
								printf("\n\t3.Return to previous menu");
								printf("\n\tEnter your Choice : ");
								scanf("%d",&ch1);
								switch(ch1)
								{
									case 1 :
										printf("\n\tCALL FORWARDING ACTIVATION PAGE");
										printf("%s",style);
										cfsActivation(headcfss,headupd, refId);
										break;
									case 2 :
										//printf("\n\t3.Return to deactive menu");
										cfsDeactivation(headcfss);
										break;
									case 3 :
										printf("\n\tReturning to previous menu");
										break;

									default :
										printf("\n\tEnter a correct Choice");
								}
								user=0;
								break;

							case 2 :

								printf("\n\t************************CFSS DEREGISTRATION PAGE**********************");
								printf("%s",style);
								if(regFlag==1)
								{
									printf("\n\tDeregistered Successfully");
									break;
								}
								else
								{
									printf("\n\tYou are not registred");
								}
								break;





							case 3:
								//int PhoneNo;
								printf("\n\tEnter the number You want to make a call: ");
								scanf("%d",&PhoneNo);
								makeCall(headupd , headcfss, PhoneNo);
							case 4 :
								exit(EXIT_SUCCESS);
							default :
								printf("\n\tPlease Enter a Correct Choice ");
						}
						break;

					/*default:
						printf("\n\tEnter a Correct Choice");
				}
				login=0;
				break;*/

			case 3:
				writeUPD(headupd);/*function calling to store in the database PD.dat*/
				writeLD(headld);/*function calling to store in the database LD.dat*/
				writeCFSS(headcfss);/*function calling to store in the database CFSS.dat*/
				printf("\n\t*******Thankyou for using CFSS*******\n\n");
				exit(EXIT_SUCCESS);
			default:
				printf("\n\tEnter the correct choice\n");

		}

	}


	printf("\n\n");

	return 0;
}

