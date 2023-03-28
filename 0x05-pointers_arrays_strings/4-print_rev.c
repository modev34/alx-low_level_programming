#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: A pointer to the string to print.
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (len - 1 >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
