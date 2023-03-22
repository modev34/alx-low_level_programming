#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int hours, mint;
	for(hours = 0; hours < 24; hours++)
	{
		for(mint = 0; mint < 60; mint++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(58);
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
