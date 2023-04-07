#include "main.h"
/**
 * is_divisible - checks number is divisible by any integer in [2, sqrt(n)]
 * @n: the number to check
 * @i: the current integer to test for divisibility
 * Return: 1 if n is not divisible by any integer in [2, sqrt(n)], 0 otherwise
 */
int is_divisible(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_divisible(n, i + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else if (n == 2 || n == 3)
		return (1);
	else if (n % 2 == 0 || n % 3 == 0)
		return (0);
	else
		return (is_divisible(n, 5));
}

