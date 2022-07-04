#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main-prints whether a random number stored in variable n
 * each time is executed
 * Return: 0
 */

int main(void)

{

		int n;



		srand(time(0));

		n = rand() - RAND_MAX / 2;

		if (n > 0)
		{
			printf("%d is positive\n", n);
		} else if (n < 0)
		{
			printf("%d is negative\n", n);
		}else
		 {
			printf("%d is zero\n", n);
		}
		return (0);
 }	
