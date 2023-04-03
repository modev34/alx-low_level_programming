#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @n: copies
 * @src: bytes from memory area
 * @dest: to memory area
 * Return: a pointer to *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j = 0;

	while (j < n)
	{
		dest[j] = src[j];
		j++;
	}

	return (dest);
}
