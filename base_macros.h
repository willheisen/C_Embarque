/*******************************************************************************
*
* Filename : base_macros.h
* Purpose  : Definitions of basic macros and operations
*
********************************************************************************
* Versions :
*
*    Version -     Date     -  Reason of Change   
********************************************************************************
*    1.0     -  01/06/2021  -  File Creation 
*
*******************************************************************************/

#ifndef BASE_MACROS_H
#define BASE_MACROS_H

/* ABS(input)                                                               */
/* Returns the absolute on its input and lower limit                        */
/* Warnings : as lower limit of signed data types are larger than upper one */
/*            e.g. sint8 : ABS(-128) => 128 > sint8 (127)                   */
/*           Do not use this macro with MIN values of signed data types     */

#define ABS(input) (((input) < 0) ? (-(input)) : (input))

/* MIN(input_a, input_b)                                                    */
/* Returns the minimum of two inputs                                        */
/* Warnings : input_a and input_b must have the same BinPoint               */

#define MIN(input_a, input_b) (((input_a) < (input_b)) ? (input_a) : (input_b))

/* MAX(input_a, input_b)                                                    */
/* Returns the maximum of two inputs                                        */
/* Warnings : input_a and input_b must have the same BinPoint               */

#define MAX(input_a, input_b) (((input_a) > (input_b)) ? (input_a) : (input_b))

/* LIMIT(input, lower_limit, upper_limit)                                    */
/* Returns the inputs limited between the lower and upper limits             */
/* Warnings : input, lower_limit and upper_limit must have the same BinPoint */

#define LIMIT(input, lower_limit, upper_limit) \
    (((input) < (lower_limit)) ? (lower_limit) : \
    (((input) > (upper_limit)) ? (upper_limit) : (input)))

#endif /* BASE_MACROS_H */


