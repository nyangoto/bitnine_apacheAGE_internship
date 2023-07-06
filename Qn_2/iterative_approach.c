int F_iterative(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;

    int a = 0, b = 1, c = 2;
    int result;

    for (int i = 3; i <=n; i++)
    {
        result = a + b;
        a = b;
        b = c;
        c = result;
    }

    return result;
}