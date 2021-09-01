/*************************************************************************
** @source MAIN
**
** main function to find the execution time of a given function
**
** @author Copyright (C) 2021  Pratik Y
**
**  This program is free software: you can redistribute it and/or modify
**  it under the terms of the GNU General Public License as published by
**  the Free Software Foundation, either version 3 of the License, or
**  (at your option) any later version.
**
**  This program is distributed in the hope that it will be useful,
**  but WITHOUT ANY WARRANTY; without even the implied warranty of
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

#include <stdio.h>
#include <assert.h>
#include <time.h>       // including for clock_t, clock(), CLOCKS_PER_SEC
// #include <unistd.h>     // including for sleep()

#include "BigO/finding_nemo.h"  // O(n) example
#include "BigO/log_all_pairs.h" // O(n^2) example
#include "Sorting/sorting.h"    // Sorting algorithms

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

// O(n) - finding_nemo test case
// char *test_char_str[5] = {"abc", "bc", "   ", "cdef", "Nemo"};
// O(n^2) - log_all_pairs test case
// char *test_char_array[5] = {"a", "b", "c", "d", "e"};
// Sorting test array
int unsorted[] = {100, 5, 90, 20, 65, 1, 2, 3, 5, 1, 7, 23};

#define MENU_MAIN        1
#define MENU_1           2
#define MENU_1_SUBMENU_1 3
#define MENU_2           4
#define MENU_2_SUBMENU_1 5
#define MENU_2_SUBMENU_2 6
#define MENU_EXIT        7

/* ==================================================================== */
/* ==================== function prototypes =========================== */
/* ==================================================================== */

/* Function prototypes for extern functions go here --------------------*/

/* Function prototypes for local (static) functions go here ------------*/
int displayMenu(int);
void do_menu_1_submenu_1_function();
void do_menu_2_submenu_1_function();
void do_menu_2_submenu_2_function();

/* ==================================================================== */
/* ==================== MAIN ========================================== */
/* ==================================================================== */

/* main ******************************************************************
**
** main function to find the execution time of a given function
**
*************************************************************************/
//int main()
//{
//    // total execution time of code
//    double time_spent = 0.0;
//
//    // Begining for the test function
//    clock_t begin = clock();
//
//    // Add the testing function
//    // finding_nemo(test_char_str, 5);
//    //log_all_pairs( test_char_array, 5);
//    //brute_selection_sort(unsorted, 3, 9, false);
//    brute_bubble_sort(unsorted, 3, 9, false);
//
//    // End of the testing function
//    clock_t end = clock();
//
//    // calculate elapsed time = (end - begin)/CLOCKS_PER_SEC seconds
//    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
//
//    printf("Function execution time is %f seconds", time_spent);
//
//    return 0;
//}

int main()
{
	int menuOption = MENU_MAIN;
	do {
		menuOption = displayMenu(menuOption);
		switch(menuOption) {
		case MENU_1_SUBMENU_1:
			do_menu_1_submenu_1_function();
			menuOption = MENU_1;
			break;
		case MENU_2_SUBMENU_1:
			do_menu_2_submenu_1_function();
			menuOption = MENU_2;
			break;
		case MENU_2_SUBMENU_2:
			do_menu_2_submenu_2_function();
			menuOption = MENU_2;
			break;
		}
	} while (menuOption != MENU_EXIT);

	return 0;
}

int displayMenu(int startMenu)
{
	int userChoice;
	userChoice = -1;
	char carRet;
	switch(startMenu) {
	case MENU_MAIN:
	case MENU_EXIT:
	//case MENU_1_EXIT:
	//case MENU_2_EXIT:
		// display main menu
		printf("-- Main Menu --\n");
		printf( "1. Menu - 1\n2. Menu - 2\n3. Exit\n\n" );
		while(1) {
			userChoice = -1;
		   scanf( " %d", &userChoice );

		   if((userChoice<=3)&&(userChoice>=1))
				   break;
		}
		// process user choice
		switch(userChoice) {
			case 1:
			{
				return displayMenu(MENU_1);
			}
			case 2:
			{
				return displayMenu(MENU_2);
			}
			case 3:
			{
				return MENU_EXIT;
			}
		}
		// we should never come to this point
		assert(0);
	case MENU_1:
		// display submenu 1
		printf( "\t-- Menu 1 --\n");
		printf( "\t1. Menu 1 : SubMenu - 1\n\t2. Exit\n\n" );
		while( userChoice<1 || userChoice>2 ) {
		   printf( "\tPlease choose an option (1-2): " );
		   scanf( "%d", &userChoice );
		}
		// process user choice
		switch(userChoice) {
		case 1: return MENU_1_SUBMENU_1;
		case 2: return MENU_MAIN;
		}
		// we should never come to this point
		assert(0);
	case MENU_2:
		// display submenu 2
		printf( "\t-- Menu 2 --\n");
		printf( "\t1. Menu 2 : SubMenu - 1\n\t2. Menu 2 : SubMenu - 2\n\t3. Exit\n\n" );
		while( userChoice<1 || userChoice>3 ) {
		   printf( "\tPlease choose an option (1-3): " );
		   scanf( "%d", &userChoice );
		}
		// process user choice
		switch(userChoice) {
		case 1: return MENU_2_SUBMENU_1;
		case 2: return MENU_2_SUBMENU_2;
		case 3: return MENU_MAIN;
		}
		// we should never come to this point
		assert(0);
	}

	return 0;
}

void do_menu_1_submenu_1_function()
{
}
void do_menu_2_submenu_1_function()
{
	printf("\n\t... executing routine 1 from submenu 2 ...\n\n");
}
void do_menu_2_submenu_2_function()
{
}

/* ==================================================================== */
/* ==================== function definitions ========================== */
/* ==================================================================== */

/* Function definition for local (static) functions go here ------------*/

/* Function definition for public functions go here --------------------*/

/* @prog __ApplicationName ***********************************************
**
** __ShortDescription__
**
*************************************************************************/
