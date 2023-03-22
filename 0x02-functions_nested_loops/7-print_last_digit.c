#include "main.h"

/**
 * print_last_digit - check the code
 * @n: number that will be computed
 * Return: last digit of the computed number of (n)
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
		last *= -1;
	}
	_putchar(last + '0');
	return (last);
}
