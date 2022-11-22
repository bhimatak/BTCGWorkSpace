/************************************************************************************
 * *
 * * FILE NAME : day61b.c
 * *
 * * DESCRIption: This program to demonstrate the radius of circle
 * *
 * * DATE       NAME            REFERENCE       REASON
 * *
 * *18-11-2022 vasanthi        New              Intial Creation
 * *
 * *Copyright 2022,Altran Group All Rights Reserved
 * ********************************************************************************
 * *   					STANDARD HEADER FILES
 * ********************************************************************************/
#include<stdio.h>
#define PI 3.14159/*macro declaration*/
/********************************************************************************
 * *
 * * FUNCTION NAME:float cal_area(float radius)
 * *
 * * DESCRIPTION  :This function calculates the radius of circle
 * *
 * * RETURNS     : SUCCESS or FAILURE
 * ********************************************************************************/
static float cal_area (float radius)
{
	float temp = 0.0;
	temp = (PI * radius * radius);
	return temp;
}
/***********************************************************************************
 * *
 * * FUNCTION NAME: main
 * *
 * * DESCRIPTION:This function carries out the operations of ara of circle
 * *
 * * RETURNS   :SUCCESS or FAILURE
 * *********************************************************************************/
int main()
{
	float radius = 0.0;//radius declaration
	printf("Enter radius of circle\n"); //reads radius of circle
	scanf("%f", &radius);//reads radius of circle
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

