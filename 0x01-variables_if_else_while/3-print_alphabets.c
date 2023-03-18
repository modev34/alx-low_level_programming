#include <time.h>
#include <stdio.h>

/**
 * main - Prints alphapet in lowercase
 *
 * Return: Always 0.
 */

int main(void)
{
	char small = 'a';
	char capital = 'A';

	while (small <= 'z')
	{
		putchar(small);
		small++;
	}
	while (capital <= 'Z')
        {
                putchar(capital);
                capital++;
        }
	putchar('\n');
	return (0);
}
