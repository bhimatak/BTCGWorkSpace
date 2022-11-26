/****************************************************************************************************
 * FILE NAME    : user.c
 *
 * DESCRIPTION  : This file contains function to perform user call forwarding operation
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


/*******************************************************************
 * FUNCTION NAME: cfsActivation()
 *
 * DESCRIPTION  : This function is for Call Forwarding Activation
 *
 * RETURNS      :  returns SUCCESS or FAILURE
 *******************************************************************/
void cfsActivation(CFSS *cfss, UPD *upd, int refID)
{
	int cfsActive=0;
	int cfsNumber=0;
	int flag = 0;
	int cfs =0;

	while(upd != NULL)
	{
		if(upd->_id == refID)
		{
			flag++;
			upd->regFlag = 1;
			break;
		}
		upd = upd->next;
	}

	


	while(cfss != NULL)
	{
		if(cfss->_id == refID)
		{
			flag++;
			cfss->regFlag = 1;
			break;
		}
		cfss = cfss->next;
	}

	printf("\n\tDo you want to activate Call Forwarding services(0/1) : ");
	scanf("%d",&cfsActive);
	if(cfsActive)
	{
		flag=1;
		cfss->cfsActive = 1;
		printf("\n\tEnter the call forwarding number :");
		scanf("%d",&cfsNumber);
		cfss->cfsNumber = cfsNumber;
		printf("\n\tPress \n\t1.Unconditional \n\t2.No Reply \n\t3.Busy ");
		printf("\n\tChoice :");
		scanf("%d",&cfs);
		switch(cfs)
		{
			case 1:
				printf("\n\t Call has been forwarded to Unconditional type ");
				strcpy(cfss->status, "Unconditional");
				break;
			case 2:
				printf("\n\t Call has been forwarded to No Reply type ");
				strcpy(cfss->status, "No Reply");
				
				break;

			case 3:
				printf("\n\t Call has been forwarded to Busy type ");
				strcpy(cfss->status, "Busy");
				break;
			default:
				printf("\n\tEnter a Correct Choice");
		}
	}
	
	else
	{
		printf("\n\tCall forwarding has not been activated");
	}

}

/*******************************************************************
 * FUNCTION NAME: cfsDeactivation
 *
 * DESCRIPTION  : This function is used for deactivating 
 *                Call Forwarding Services
 *
 * RETURNS      :  returns SUCCESS or FAILURE
 *******************************************************************/
void cfsDeactivation(CFSS *cfss)
{
	int cfsActive=0;
	
	printf("\n\tDo you want to deactivate the call(0/1):");
	scanf("%d",&cfsActive);
	if(cfsActive==0)
	{
		printf("\n\t User has not activated Call forwarding services ");
	}
	else
	{
		printf("\n\tDeactivation Successful");
		cfsActive = 0;
	}

}

/*******************************************************************
 * FUNCTION NAME: makeCall
 *
 * DESCRIPTION  : This function is used for making a call
 * 
 * RETURNS      :  returns SUCCESS or FAILURE
 *******************************************************************/
void makeCall(UPD *hupd, CFSS *hcfss, int phno)
{
	int refID = 0, flag =0;

	while(hupd != NULL)
	{
		if((hupd->_phNo == phno)&&(hupd->regFlag == 1))
		{
			flag++;
			refID = hupd->_id;
			break;

		}
		hupd = hupd->next;/*pointing to the next element*/
	}

	if(flag == 1)
	{
		while(hcfss != NULL)
		{
			if((hcfss->_id == refID)&&(hcfss->cfsActive == 1))
			{
				flag++;
				break;
			}
			hcfss = hcfss->next;/*pointing to the next element*/
		}

		
		
	}
	if(flag>=2){
		printf("\n\tUser has reg for %s", hcfss->status);
		printf("\n\tCall has been forwarded to %d \n\n", hcfss->cfsNumber);
	}
	else{
		printf("\n\tCall has been established\n\n");
	}
}
