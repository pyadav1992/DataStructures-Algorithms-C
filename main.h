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


#ifdef __cplusplus
extern "C"
{
#endif

#ifndef MAIN_H
#define MAIN_H


/* ==================================================================== */
/* ========================== include files =========================== */
/* ==================================================================== */

/* Include system and local header files goes here ---------------------*/
#include <stdio.h>
#include <assert.h>
#include <time.h>       // including for clock_t, clock(), CLOCKS_PER_SEC
// #include <unistd.h>     // including for sleep()

/* ==================================================================== */
/* ============================ constants ============================= */
/* ==================================================================== */

/* #define and enum statements go here ---------------------------------*/
typedef enum
{
  MAIN_MENU = 0, // MAIN MENU
  SORTING, 
  // SORTING sub menu              
  BUBBLE_SORT,
  SELECTION_SORT,  
  SEARCHING,
  // SEARCHING sub menu     
  BINARY_SEARCH,
  LINEAR_SEARCH,  
  STACK_ARR,
  STACK_LL,
  QUEUE_ARR,
  QUEUE_LL,
  MENU_BACK,
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
/* ==================== function prototypes =========================== */
/* ==================================================================== */

/* Function prototypes for public functions go here --------------------*/


#endif //MAIN_H
#ifdef __cplusplus
}
#endif