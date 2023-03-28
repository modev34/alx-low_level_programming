#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0, i;
	int start = (length - 1) / 2 + 1;

	while (str[length] != '\0')
		length++;

	for (i = start; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
