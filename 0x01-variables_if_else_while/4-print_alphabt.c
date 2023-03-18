#include <time.h>
#include <stdio.h>

/**
 * main - Prints alphapet in lowercase and uppercase
 *
 * Return: Always 0.
 */

int main(void)
{
	char small = 'a';

	while (small <= 'z')
	{
		if (small == 'e' || small == 'q')
		{
			small++;
			continue;
		}
		putchar(small);
		small++;
	}
	putchar('\n');
	return (0);
}

