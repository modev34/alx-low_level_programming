#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the int to check
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	switch (n) {
		case (n == 0):
			_putchar('0');
			return 0;
		case (n > 1):
			_putchar('+');
			return 1;
		default:
			_putchar('-');
			return -1;
	}
}