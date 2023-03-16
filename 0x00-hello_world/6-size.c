#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %zu", sizeof(char));
	printf("Size of a int: %zu",(unsigned) sizeof(int));
	printf("Size of a long int: %zu", (unsigned)sizeof(long int));
	printf("Size of a long long int: %zu", (unsigned)sizeof(long long int));
	printf("Size of a float: %zu", sizeof(double));
       	return (0);
}
