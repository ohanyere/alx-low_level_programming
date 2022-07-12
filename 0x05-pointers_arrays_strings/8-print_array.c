#include "main.h"
#include "stdio.h"
/**
 * print_array - Prints an inserted number of elements
 * of an array of integers
 * @a: The array of integers
 * @n: the number of to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
		{
			continue;
		}

		printf(", ");
	}

	printf("\n");
}
