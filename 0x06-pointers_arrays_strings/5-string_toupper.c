#include "main.h"
/**
 * string_toupper - convert all lowercase letters in a string to uppercase
 * @s: pointer to the string to be converted
 *
 * Return: pointer to the converted string
 */
char *string_toupper(char *s)
{
	char *ptr = s;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr -= 'a' - 'A';
		}
		ptr++;
	}

	return (s);
}

