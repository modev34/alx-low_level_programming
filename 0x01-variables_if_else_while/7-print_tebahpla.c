#include <time.h>
#include <stdio.h>

/**
 * main - Prints alphapet in lowercase and uppercase
 *
 * Return: Always 0.
 */

int main(void)
{
	char small = 'z';

	while (small >= 'a')
	{
		putchar(small);
		small--;
	}
	putchar('\n');
	return (0);
}
