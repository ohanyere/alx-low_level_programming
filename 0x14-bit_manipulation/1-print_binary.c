#include "main.h"
/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		/* recursion, continously shift right by one bit*/
		print_binary(n >> 1);

	/* the bitwise & of the binary with 1 added with 0 */
	_putchar((n & 1) + '0');
}
