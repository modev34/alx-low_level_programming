int _pow_recursion(int x, int y)
{
    int result = 1;

    if (y < 0)
    {
        return (-1);
    }

    while (y > 0)
    {
        result *= x;
        y--;
    }

    return result;
}
