#include "main.h"

/**
 * _strlen_recursion - returns the length of a string using recursion
 * @s: pointer to the string to get the length of
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0') /* base case */
		return (0);

	return (_strlen_recursion(s + 1) + 1);
}
