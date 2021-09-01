/*************************************************************************
** @source log_all_pairs O(n^2) complexity
**
** Logging all pairs in the given array of single characters
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

#include "log_all_pairs.h"


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


/* ==================================================================== */
/* ==================== function definitions ========================== */
/* ==================================================================== */

/* Function definition for local (static) functions go here ------------*/

/* Function definition for public functions go here --------------------*/

/* log_all_pairs **********************************************************
**
** Logging all pairs in the given array of single characters
**
*************************************************************************/
void log_all_pairs( char **input_chars_array, uintmax_t no_of_chars )
{
  uintmax_t pairs = 0;

  if(input_chars_array == NULL)
  {
    printf("Invalid input\r\n");
  }
  else
  {
    for(uintmax_t i=0; i < no_of_chars; i++)
    {
      for(uintmax_t j=0; j < no_of_chars; j++)
      {
        printf("Pair %ld: %s %s\r\n", ++pairs, input_chars_array[i], 
                                               input_chars_array[j]);
      }
    }  
  } 
}