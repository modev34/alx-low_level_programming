#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse using recursion
 * @s: pointer to the string to print
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (!s || !*s) /* check for null pointer or end of string */
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}

