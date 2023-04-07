#include "main.h"

/**
 * _puts_recursion - prints a string using recursion
 * @s: pointer to the string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (!s || !*s) /* check for null pointer or end of string */
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}

