#include "main.h"

/**
 *  print_diagonal - prints a diagonals line
 *@n:character to printed out
 *
 *  Return:void
 */
void print_diagonal(int n)
{
	int u, i;

	if (n <= 0)
		_putchar('\n');
	for (u = 0; u < n; u++)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
