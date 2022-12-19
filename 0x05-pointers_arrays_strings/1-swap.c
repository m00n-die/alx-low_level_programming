#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: input int pointer
 * @b: input int pointer
 */

void swap_int(int *a, int *b);
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
