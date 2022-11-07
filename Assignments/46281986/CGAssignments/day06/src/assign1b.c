/*****************************************************************************************************************
 * * FILENAME : assign1b.c
 * *
 * * DESCRIPTION : This file contains required functions to prompt and read a number of units of length (a float) from user 
 * 		   and print the area of a circle of that radius
 * *
 * * REVISION HISTORY:
 * * DATE              NAME                       REFERENCE                       REASON
 * * --------------------------------------------------------------------------------------------------------------
 * * 2 Nov 2022    Sushree Ranjita Panda              NEW                         New Code To perform given operations
 * *
 * * ***************************************************************************************************/
#include<common.h>
#define PI 3.14159        /*defining PI value using Macro*/
/************************************************************************************************
 * * FUNCTION NAME : cal_area()
 * *   
 * * DESCRIPTION : This function takes radius input as argument to calculate area
 * *
 * * RETURNS : area of circle, in case of failure ERROR
 * * **************************************************************************************************/
static float cal_area(float radius)
{
	     
	float temp = 0.0;
	temp = (PI * radius * radius);
	return temp;
}
/************************************************************************************************
 * * FUNCTION NAME : main()
 * *   
 * * DESCRIPTION : This function prompt and read a float number as radius of circle and validates that number 
 * *
 * * RETURNS : SUCCESS in case of failure ERROR
 * * **************************************************************************************************/
int main()
{
	float radius = 0.0;      /*declaring and initialising variable*/
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

