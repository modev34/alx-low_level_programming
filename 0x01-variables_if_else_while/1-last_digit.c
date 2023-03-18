#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints a random number and get the last number and
 *        state if the number is greater than 5, less than 6 and not 0, zero
 *
 * Return: Always 0.
*/


int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last > 0)
	{
		if (last > 6)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, last);
			return (0);
		}
		if (last < 6 && last > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, last);
			return (0);
		}
	} else
	{
		if (last < 0)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
		} else
		{
			printf("Last digit of %d is %d and is 0\n", n, last);
		}
	}
	return (0);
}
