#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: A pointer to the string to print.
 */

void print_rev(char *s)
{
	int len, i;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
