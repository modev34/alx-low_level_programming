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
	int n,lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	if (lastDigit > 0)
	{
		if (lastDigit > 6)
		{
			printf("Last digit of %d is %d and is greater 5", n, lastDigit);
			return 0;
		}
		if (lastDigit < 6 && lastDigit > 5)
		{
			printf("Last digit of %d is %d and is greater than 5", n, lastDigit);
			return 0;
		}
	} else
	{
		printf("Last digit of %d is %d  and is less than 6 and not 0", n, lastDigit);
	}
	
	return (0);
}
