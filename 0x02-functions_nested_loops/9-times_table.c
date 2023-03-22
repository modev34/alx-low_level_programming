#include "main.h"

/**
 * times_table - return time table
 *
 * Return: nothing.
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int product = i * j;

			if (product < 10)
			{
				_putchar(product + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			} else if (product < 100)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
				_putchar(',');
				_putchar(' ');
			} else
			{
				_putchar((product / 100) + '0');
				_putchar(((product / 10) % 10) + '0');
				_putchar((product % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
