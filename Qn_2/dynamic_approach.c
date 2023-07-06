/**
  * F_dynamic - Calculate the Fibonacci sequence up to the nth term using a dynamic programming approach.
  *
  * @n: The index of the desired Fibonacci number.
  *
  * Description: calculates the Fibonacci sequence up to the nth term
  * 
  * Return: the nth Fibonacci number.
  */
int F_dynamic(int n) 
{
    int fibTable[n + 1];
    fibTable[0] = 0;
    fibTable[1] = 1;
    fibTable[2] = 2;

    for (int i = 3; i <= n; i++)
        fibTable[i] = fibTable[i - 3] + fibTable[i - 2];

    return fibTable[n];
}
