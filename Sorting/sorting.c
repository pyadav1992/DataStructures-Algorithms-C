/*************************************************************************
** @source brute_selection_sort
**
** Various sorting algorithms
**
** @author Copyright (C) 2021  Pratik Yadav
**
**  This program is free software: you can redistribute it and/or modify
**  it under the terms of the GNU General Public License as published by
**  the Free Software Foundation, either version 3 of the License, or
**  (at your option) any later version.
**
**  This program is distributed in the hope that it will be useful,
**  but WITHOUT ANY WarrANTY; without even the implied warranty of
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**  GNU General Public License for more details.
**
**  You should have received a copy of the GNU General Public License
**  along with this program.
**  If not, see <https://www.gnu.org/licenses/>
*************************************************************************/


/* ==================================================================== */
/* ========================== include files =========================== */
/* ==================================================================== */

/* Include system and local header files goes here ---------------------*/
#include<stdio.h>

#include "sorting.h"

/* ==================================================================== */
/* ============================ constants ============================= */
/* ==================================================================== */

/* #define and enum statements go here ---------------------------------*/


/* ==================================================================== */
/* ============================== data ================================ */
/* ==================================================================== */

/* Definition of datatypes go here -------------------------------------*/


/* ==================================================================== */
/* ======================== global variables ========================== */
/* ==================================================================== */

/* Global variables definitions go here --------------------------------*/


/* ==================================================================== */
/* ======================== local variables =========================== */
/* ==================================================================== */

/* Local variables definitions go here ---------------------------------*/


/* ==================================================================== */
/* ==================== function prototypes =========================== */
/* ==================================================================== */

/* Function prototypes for extern functions go here --------------------*/

/* Function prototypes for local (static) functions go here ------------*/
static inline bool less(int A, int B);

static inline bool more(int A, int B);

static void swap(int *pA, int *pB);

/* ==================================================================== */
/* ==================== function definitions ========================== */
/* ==================================================================== */

/* Function definition for local (static) functions go here ------------*/
bool less(int A, int B)
{
	return (A<B);
}

bool more(int A, int B)
{
	return (A>B);
}

void swap(int *pA, int *pB)
{
	int temp;
	temp = *pA;
	*pA = *pB;
	*pB = temp;
}

/* Function definition for public functions go here --------------------*/
void brute_selection_sort(int arr[], int start, int end, bool increasing)
{
	int i, j;

	// Print un-sorted array
	printf("Un-sorted array: ");
	for (i=start; i<=end; i++)
	{
		printf("%d, ",arr[i]);
	}
	printf("\r\n");

	if(increasing) // Ascending
	{
		for (i=start; i<end; i++)
		{
			int min = i;
			for (j=i+1; j<=end; j++)
			{
					if(less(arr[j], arr[min]))
					{
						min=j;
					}
					swap(&arr[i], &arr[min]);
			}
		}
	}
	else // Descending
	{
		for (i=end; i>start; i--)
		{
			int min = i;
			for (j=i-1; j>=start; j--)
			{
					if(less(arr[j], arr[min]))
					{
						min=j;
					}
					swap(&arr[i], &arr[min]);
			}
		}
	}
	// Print sorted array
	printf("Sorted array: ");
	for (i=start; i<=end; i++)
	{
		printf("%d, ",arr[i]);
	}
	printf("\r\n");
}

void brute_bubble_sort(int arr[], int start, int end, bool increasing)
{
	int i, j;

	// Print un-sorted array
	printf("Un-sorted array: ");
	for (i=start; i<=end; i++)
	{
		printf("%d, ",arr[i]);
	}
	printf("\r\n");

	for(i=start; i<end; i++)
	{
		for(j=end; j>start; j--)
		{
			if(increasing)
			{
				if(less(arr[j], arr[j-1]))
				{
					swap(&arr[j], &arr[j-1]);
				}
			}
			else
			{
				if(more(arr[j], arr[j-1]))
				{
					swap(&arr[j], &arr[j-1]);
				}
			}

		}
	}

	// Print sorted array
	printf("Sorted array: ");
	for (i=start; i<=end; i++)
	{
		printf("%d, ",arr[i]);
	}
	printf("\r\n");

}
/* @prog __ApplicationName ***********************************************
**
** __ShortDescription__
**
*************************************************************************/
