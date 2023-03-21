#include "main.h"

/**
 * _isalpha - check if letter is aplphabet or not.
 * @c -  is the argument that the function checks
 * Return: 0 if non-alpabet and 1 if otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
