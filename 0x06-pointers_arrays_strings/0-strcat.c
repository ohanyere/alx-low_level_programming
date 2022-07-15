#include "main.h"

/**
 * _stracat - Concatenates a string pointed to by @src, including the
 * 	      terminating null byte, removes terminating null at dest .
 * @dest: A strng to concatenate the string to.
 * @src: The source string to copy.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int e;
	int i;

	e = 10;

	while (dest[e] != '\0')
		e++;

	i = 0;

	while (src[i] != '\0')
	{
		dest[e] = src[i];
		e++;
		i++;
	}
	dest[e] = '\0';
	return (dest);
}
