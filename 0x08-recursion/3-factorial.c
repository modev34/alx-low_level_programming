#include "main.h"

/**
 * factorial - computes the factorial of a given number
 * @n: the number to compute the factorial of
 *
 * Return: the factorial of the given number, or -1 if it's negative
 */
int factorial(int n)
{
	if (n < 0) /* base case */
		return (-1);

	if (n == 0) /* base case */
		return (1);

	return (n * factorial(n - 1));
}
