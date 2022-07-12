#include "main.h"

/**
 * rev_string - reverse a sring
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int leng = 0;
	int g = 0;
	char c;

	while (s[g++])
	{
		leng++;
	}

	for (g = leng - 1; g >= leng / 2; g--)
	{
		c = s[g];
		s[g] = s[leng - g - 1];
		s[leng - g - 1] = c;
	}
}
