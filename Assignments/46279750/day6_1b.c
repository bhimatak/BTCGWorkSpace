/***************************************************************************
* *
* * FILE NAME: day6_1b.c
* *
* * DESCRIPTION : program to demonstrate the area of circle.
* *
* * Revision History:
* * DATE          NAME            REFERENCE              REASON
* *
* * 19-11-12      SAAHERA            New                  Initial creation
* *
* * Copyright 2022, Altran Group All Rights Reserved 
* *
* *****************************************************************************
*                       STANDARD HEADER FILE
********************************************************************************/
#include<stdio.h>
/*********************************************************************************
*                        MACRO
*********************************************************************************/
#define PI 3.14159
/*******************************************************************************
* *
* * FUNCTION NAME : Read number of units of length and for area of circle
* *
* * DESCRIPTION : by using if else finding area of circle
* *
* * RETURN : SUCCESS or FAILURE
* */
static float cal_area (float radius)
{
float temp = 0.0;
temp = (PI * radius * radius);
return temp;
}
/********************************************************************************
* *
* * FUNTION NAME : main
* *
* * DESCRIPTION : This calls all functions the required in its operations
* *
* * RETURN :SUCCESS or FAILURE
* */
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

