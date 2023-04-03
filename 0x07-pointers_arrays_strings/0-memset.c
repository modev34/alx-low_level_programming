#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @n: bytes of the memory area pointed to by *s parameter
 * @s: constant byte b
 * @b: memory area pointer
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j = 0;

	while (j < n)
	{
		s[j] = b;
		j++;
	}
	return (s);
}
