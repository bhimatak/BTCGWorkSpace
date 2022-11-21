/*******************************************************************************************************************
 ** FILENAME        : assign1b.c
 ** DESCRIPTION     : This file contains required function to prompt and read a number of 
                      units of length from user and print out the area of a circle of that radius 
 ** REVISION HISTORY:
 ** DATE              NAME                       REFERENCE                       REASON
 ** -----------------------------------------------------------------------------------------------------------------
 **  03 Nov 2022    POOJA NATH                   NEW                          NEW CODE TO PERFORM GIVEN OPERATION
 **
 ********************************************************************************************************************/


/*header files*/
#include<common.h>
#define PI 3.14159 /*defining pi value as 3.14159 using MACRO*/

/**********************************************************************
 ** FUNCTION NAME : cal_area()
 ** DESCRIPTION   : This function calculates the area of the circle
 ** RETURNS       : Area of the circle and incase of failure ERROR
 *********************************************************************/

static float cal_area(float radius)
{	     
	float temp = 0.0;
	temp = (PI * radius * radius);
	return temp;
}

/*******************************************************************
 ** FUNCTION NAME : main
 ** DESCRIPTION   : This function contains other defined function
                    to calculate the area of the circle taking 
		    radius from user
 ** RETURNS       : SUCCESS incase of failure ERROR
 ********************************************************************/
int main()
{
	float radius = 0.0;
	printf("Enter radius of circle: \n");
	scanf("%f", &radius);

	if (radius < 0)
	{
		printf("Error:Negative values not permitted.\n");
	}
	else
	{
		printf("The area of a circle of radius %.2f units is %.2f units: \n", radius, cal_area(radius));
	}	 
	return 0;
}




