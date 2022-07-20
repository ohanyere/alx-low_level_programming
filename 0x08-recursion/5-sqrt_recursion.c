#include "main.h"

/**
 * isSqrt - helper function for _sqrt_recursion
 * @n: input number
 * @a: iteratotr
 * Return: square root of number
 */

int isSqrt(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);
	return (isSqrt(n, a + 1));
	{

/**
 *  _sqrt_recursion - returns the natural square root of a number
 *   @n: input number
 *   Return: square root of number, -1 if false
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (isSqrt(n, 1));
}
