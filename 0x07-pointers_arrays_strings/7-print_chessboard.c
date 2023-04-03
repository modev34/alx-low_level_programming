#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to pieces to print
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	char *p = (char *)a;
	int i;

	for (i = 0; i < 64; i++)
	{
		_putchar(*p++);
		if ((i + 1) % 8 == 0)
			_putchar('\n');
	}
}

