#include "main.h"

/**
 *  * _strcpy - copies the string pointed to by src
 *   * to the buffer pointed to by dest
 *    * @dest: pointer to the buffer in which we copy the string
 *     * @src: string to be copied
 *      *
 *       * Return: the pointer to dest
 **/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while ((dest[i] = src[i]) != '\0')
	{
		i++;
	}
	return (dest);
}

