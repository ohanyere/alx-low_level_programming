#include "main.h"

/**
 * swap_int - swaps the value of the two file
 * @a: The pointer type
 * @b: the int pointer type
 */

void swap_int(int *a, int *b)
{
	int g;

	g = *a;
	*a = *b;
	*b = *a;
}
