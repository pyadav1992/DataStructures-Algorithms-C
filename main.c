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
#include "main.h"
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


/* ==================================================================== */
/* ==================== function prototypes =========================== */
/* ==================================================================== */

/* Function prototypes for extern functions go here --------------------*/

/* Function prototypes for local (static) functions go here ------------*/
static int display_menu(void);

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
        menu_option = display_menu();
        break;
      }

      case SORTING:
      {
        menu_option = sorting_sub_menu();
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
        printf("Command not supported.\r\n");
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
int display_menu(void)
{
	int user_input = -1;

  // display main menu
  printf("\n");
  printf("============================\n");
  printf("MAIN MENU\n");
  printf("============================\n");
  printf( "%d. Sorting\n%d. Searching\n%d. Stack(Array)\n%d. Stack(Linked List)\n%d. Queue(Array)\n%d. Queue(Linked List)\n%d. Exit\n",    SORTING, SEARCHING, STACK_ARR, STACK_LL, QUEUE_ARR, QUEUE_LL, MENU_EXIT);
  printf("============================\n");
  while(1) 
  {
    user_input = -1;
    printf( "Please choose an option (%d-%d): ", SORTING, MENU_EXIT);
    scanf( " %d", &user_input );

    if((user_input>=SORTING) && (user_input<=MENU_EXIT))
        break;
  }

  // process user choice
  switch(user_input) 
  {
    case SORTING:
    {
      user_input = SORTING;
      break;
    }

    case SEARCHING:
    {
      user_input = SEARCHING;
      break;
    }

    case STACK_LL:
    {
      user_input = STACK_LL;

      break;
    }

    case MENU_EXIT:
    {
      user_input = MENU_EXIT;
      break;
    }

    default:
    {
      printf("Command not supported.\r\n");
      user_input = MAIN_MENU;
      break;
    }
  }

/*    
    case SEARCHING:
      // display submenu 2
      printf( "SEARCHING\n");
      printf( "1. Bianry search\n2. linear search\n3. Exit\n" );
      while(1) 
      {
        user_input = -1;
        printf( "Please choose an option (%d-%d): ", SORTING, MENU_EXIT);
        scanf( " %d", &user_input );

        if((user_input>=BINARY_SEARCH) && (user_input<=MENU_EXIT))
          break;
      }

      // process user choice
      switch(user_input) 
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
      break;
	}
*/
	return user_input;
}

/* @prog __ApplicationName ***********************************************
**
** __ShortDescription__
**
*************************************************************************/
