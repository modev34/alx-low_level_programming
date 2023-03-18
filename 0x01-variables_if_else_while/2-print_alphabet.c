
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of a randomly generated number
 *        and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;
	char letter = 'a';
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	while(letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	return (0);
}
