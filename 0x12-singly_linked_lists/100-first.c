#include <stdio.h>

void __attribute__((constructor)) print_first(void);

/**
 * This program print_first - Prints a string before the
 * main function is executed.
 */

void print_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
