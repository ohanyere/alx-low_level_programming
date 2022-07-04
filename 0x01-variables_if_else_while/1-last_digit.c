#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 * main - Entry point
 * Description - This program will assign a random number to the variable n
 * and print the last digit of the number stored in the variable n
 * Return: 0
 */
int main(void)

{

		int n;

		int ld;



		srand(time(0));

		n = rand() - RAND_MAX / 2;

		ld = n % 10;

		if (ld > 5)

		{
			printf("last digit of %d is %d and is greater than 5\n", n, ld);
		} else if (ld == 0)
		{
			printf("last digit of %d is %d and 0\n", n, ld);
		} else
		{
			printf("last digit of %d is %d and is less than 6 and not 0\n", n, ld);
		}
		return (0);
}


			