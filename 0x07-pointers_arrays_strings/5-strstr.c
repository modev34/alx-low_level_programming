#include "main.h"

/**
 * _strstr - locates a substring within a string
 * @haystack: the string to search
 * @needle: the substring to locate
 * Return: returns a pointer to the beginning of the located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*n && (*h == *n))
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}

