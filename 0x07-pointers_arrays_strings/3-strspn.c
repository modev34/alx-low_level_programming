#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: the initial segment of
 * @accept: which consist only of bytes from
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, x;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] != 32)
		{
			for (x = 0; accept[x] != '\0'; x++)
			{
				if (s[j] == accept[x])
					i++;
			}
		}
		else
			return (i);
	}
		return (i);
}
