/*************************************************************************
 *
 * FILE NAME    : assign1b.c
 * 
 * DESCRIPTION  : Finds out Area of a Circle
 * 
 * DATE     		 NAME   	 REFERENCE          REASON
 * 
 * 06-NOV-2022  	ANNAYASHA	  DAY06   	Area of Circle
 * 
 * Copyright 2010, Aricent Technologies (Holdings) Ltd
 * 
 **************************************************************************/

/*************************************************************************
 *                               HEADER FILES
 **************************************************************************/
#include <common.h>

/*************************************************************************
 *                                MACROS
 **************************************************************************/
#define PI 3.14

/******************************************************************************
 * 
 * Function Name   : cal_area
 * Description     : this function calculate area of circle
 * Returns         : area
 * 
 * *******************************************************************************/
float cal_area(float radius)
{
	float area;
	area= PI*radius*radius;
	
	return area;
}

/******************************************************************************
 *  
 * Function Name   : main
 * Description     : this is main function where program starts
 * Returns         : Success
 *  
 *******************************************************************************/
int main()
{
	float radius;

	printf("Enter radius of circle: \n");
	scanf("%f",&radius);
	
	if(radius<0)
	{
		printf("Error: Negative values not permitted");
	}
	else
	{
		printf("Area of circle : %.2f", cal_area(radius));
	}

	printf("\n");
	return 0;
}
