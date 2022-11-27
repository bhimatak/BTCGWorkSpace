/****************************************************************************
 * FILENAME:prog02
 * DESCRIPTION:program for sorting array
 * REFERENCE:
 * DATE                     NAME
 * ----------------------------------------------
 *  15 Nov 2022            siri
 *  RETURNS: success, in case any error failure
 *  **************************************************************************/
#include "sort.h"
void sort_array(int A[], int n)
{
	int i=0;
	int countzero = 0;
	int countone = 0;
	int counttwo = 0;
	while(i < n)
	{
		if(A[i] == 0)
		{
			countzero=countzero+1;
		}
		else if(A[i] == 1)
		{
			countone=countone+1;
		}
		else
		{
			counttwo=counttwo+2;
		}

		i=i+1;
	}

		for(i = 0; i <countzero; i++)
		{
			A [i] = 0;

		}
		for(i = countzero;i<countzero+countone; i++)
		{
			A[i] = 1;
		}
		for(i =countzero + countone; i<n ; i++)
		{
			A[i] = 2;
		}

}
