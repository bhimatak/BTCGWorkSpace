/***************************************************************************
 * *FILE NAME : day6-1b.c
 * *
 * * DESCRIPTION : This program is used to print the radius of the circle.
 * *
 * * REVISION HISTORY :
 * * DATE	NAME		REFERENCE	REASON
 * * -----------------------------------------------------------------
 * * 12-11-2022		RUJITHA		ABC@1234	Employee Reference
 * *
 * *Copyright @2022 ,Employee referencelmtd.
 * * ***************************************************************/

#include<stdio.h>
/***************************************************************
 * * FUNCTION NAME : main
 * *
 * * DESCRIPTION : To display the radius of circle
 * *
 * * RETURN : SUCCESS or FAILURE
 * * **************************************************************/

#define PI 3.14159 //PI is a pi operator used for constant value
static float cal_area (float radius)
{
	float temp = 0.0;
	temp = (PI * radius * radius);
	return temp;
}
int main()
{
	float radius = 0.0;
	printf("Enter radius of circle\n"); 
	scanf("%f", &radius);
	if (radius < 0)
	{
		printf("Error: Negative values not permitted\n");
	}
	else
	{
		printf("The area of a circle of radius %f units is %f units", radius, cal_area (radius));
	}
	return 0;
}
