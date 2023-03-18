#include <stdio.h>

/**
 *main - print 0 to 9 separated with commas, using putchar
 *Return: Always 0.
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n++);
		if (n != 58)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
