/**
 * check_square_root - checks if a is the square root of b
 * @a: candidate square root
 * @b: number to check for square root
 * Return: the square root of b if it exists, otherwise -1
 */
int check_square_root(int a, int b)
{
	if (a * a == b)
		return (a);
	else if (a * a > b)
		return (-1);
	else
		return (check_square_root(a + 1, b));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find the square root of
 * Return: natural square root or -1 if n < 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return check_square_root(1, n);
}
