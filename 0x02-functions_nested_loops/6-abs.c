#include "main.h"

/**
 * _abs - return the absulute value of a number
 * @n: is the number that will be computed
 * Return: Always 0.
 */

int _abs(int n)
{
	int result;

	if (n > 0)
	{
		result = n * 1;
	} else if (n < 0)
	{
		result = n * -1;
	} else
	{
		result = 0;
	}
	return (result);
}
