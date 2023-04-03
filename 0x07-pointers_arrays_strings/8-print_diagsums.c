#include "main.h"

/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, l = 0, r = 0;

	for (i = 0; i < size; i++)
	{
		l += a[i * size + i];
		r += a[i * size + (size - 1 - i)];
	}
	printf("%i, %i\n", l, r);
}
