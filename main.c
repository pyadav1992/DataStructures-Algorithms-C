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
typedef enum
{
  MAIN_MENU = 0, // MAIN MENU
  SORTING,       // SORTING sub menu        
  BUBBLE_SORT,
  SELECTION_SORT,  
  SEARCHING,     // SEARCHING sub menu
  BINARY_SEARCH,
  LINEAR_SEARCH,  
  STACK_ARR,
  STACK_LL,
  QUEUE_ARR,
  QUEUE_LL,
  MENU_EXIT
} AppMenu_t;

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

/* ==================================================================== */
/* ==================== function prototypes =========================== */
/* ==================================================================== */

/* Function prototypes for extern functions go here --------------------*/

/* Function prototypes for local (static) functions go here ------------*/
static int display_menu(int);
static void do_menu_1_submenu_1_function();
static void do_menu_2_submenu_1_function();
static void do_menu_2_submenu_2_function();

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
	AppMenu_t menu_option = MAIN_MENU;
	do 
  {
		switch(menu_option) 
    {
      case MAIN_MENU:
      {
        menu_option = display_menu(menu_option);
        break;
      }

      case SORTING:
      {
        menu_option = SORTING;
        break;
      }

      case SEARCHING:
      {
        menu_option = SEARCHING;
        break;
      }

      case STACK_ARR:
      {
        menu_option = STACK_ARR;
        break;
      }

      case STACK_LL:
      {
        menu_option = STACK_LL;
        break;
      }

      case QUEUE_ARR:
      {
        menu_option = QUEUE_ARR;
        break;
      }

      case QUEUE_LL:
      {
        menu_option = QUEUE_LL;
        break;
      }

      default:
      {
        return MENU_EXIT;
      }
    }
	} while (menu_option != MENU_EXIT);

	return 0;
}



/* ==================================================================== */
/* ==================== function definitions ========================== */
/* ==================================================================== */

/* Function definition for local (static) functions go here ------------*/

/* Function definition for public functions go here --------------------*/
int display_menu(int StartMenu)
{
	int user_choice = -1;
	char CarRet;
	switch(StartMenu) 
  {
	  case MAIN_MENU:
	  case MENU_EXIT:
		  // display main menu
		  printf("============================\n");
      printf("MAIN MENU\n");
      printf("============================\n");
		  printf( "1. Sorting\n2. Searching\n3. Stack(Array)\n4. Stack(Linked List)\n5. Queue(Array)\n6. Queue(Linked List)\n7. Exit\n" );
      printf("============================\n");
		  while(1) 
      {
			  user_choice = -1;
        printf( "Please choose an option (%d-%d): ", SORTING, MENU_EXIT);
		    scanf( " %d", &user_choice );

		    if((user_choice>=SORTING) && (user_choice<=MENU_EXIT))
				   break;
		  }

		  // process user choice
		  switch(user_choice) 
      {
			  case SORTING:
			  {
				  return display_menu(SORTING);
			  }

			  case SEARCHING:
			  {
				  return display_menu(SEARCHING);
			  }

			  case STACK_LL:
			  {
				  return STACK_LL;
			  }

        default:
        {
          return MENU_EXIT;
        }
		  }

		  // we should never come to this point
		  assert(0);

	  case SORTING:
		  // display submenu 1
		  printf( "SORTING\n");
		  printf( "1. Bubble sort\n2. Selection sort\n3. Exit\n\n" );
		  while(1) 
      {
			  user_choice = -1;
        printf( "Please choose an option (%d-%d): ", SORTING, MENU_EXIT);
		    scanf( " %d", &user_choice );

		    if((user_choice>=BUBBLE_SORT) && (user_choice<=MENU_EXIT))
				   break;
		  }
		  // process user choice
		  switch(user_choice)
      {
		    case BUBBLE_SORT: 
        {
          return BUBBLE_SORT;
        }

		    case SELECTION_SORT: 
        {
          return SELECTION_SORT;
        }

        default:
        {
          return MAIN_MENU;
        }
		  }

		  // we should never come to this point
		  assert(0);

	    case SEARCHING:
		    // display submenu 2
	  	  printf( "SEARCHING\n");
	    	printf( "1. Bianry search\n2. linear search\n3. Exit\n" );
		  while(1) 
      {
			  user_choice = -1;
        printf( "Please choose an option (%d-%d): ", SORTING, MENU_EXIT);
		    scanf( " %d", &user_choice );

		    if((user_choice>=BINARY_SEARCH) && (user_choice<=MENU_EXIT))
				   break;
		  }

		    // process user choice
        switch(user_choice) 
        {
          case BINARY_SEARCH: 
          {
            return BINARY_SEARCH;
          }

          case LINEAR_SEARCH: 
          {
            return LINEAR_SEARCH;
          }

          default:
          {
            return MAIN_MENU;
          }
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

/* @prog __ApplicationName ***********************************************
**
** __ShortDescription__
**
*************************************************************************/
