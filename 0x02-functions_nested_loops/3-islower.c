#include "main.h"

/**
* _islower - check if char is lowercase
* Return: 1 if char is lowercase, otherwise 0.
*/

int _islower(int c)
{
	int res = islower(c) != 0 ? 1 : 0;

	return res;

}
