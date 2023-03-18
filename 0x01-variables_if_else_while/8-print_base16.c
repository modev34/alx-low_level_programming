#include <time.h>
#include <stdio.h>

/**
 * main - Prints alphapet in lowercase and uppercase
 *
 * Return: Always 0.
 */

int main(void)
{
	char bnum = '0';
	char blet = 'a';
	while (bnum <= '9')
	{
		putchar(bnum);
		bnum++;
	}
	while (blet <= 'f')
	{
		putchar(blet);
		blet++;
	}
	putchar('\n');
	return (0);
}
