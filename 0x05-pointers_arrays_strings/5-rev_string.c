#include "main.h"

/**
 * rev_string - Reverses a string.
 * @str: A pointer to the string to reverse.
 */

void rev_string(char *str)
{
	int len = 0, i;
	char temp;

	while (str[len] != '\0')
		len++;

	for (i = 0; i < len / 2; i++)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
}
