#include "main.h"
/**
* swap_int - swaps the values
* @a: Pointer to the first integer.
* @b: Pointer to the second integer.
* Return 0
*/

void swap_int(int *a, int *b)
{
		int temp;

		temp = *a;
		*a = *b;
		*b = temp;
}
