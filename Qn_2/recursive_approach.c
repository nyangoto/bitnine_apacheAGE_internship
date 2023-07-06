/**
  * F_recursive - Calculate the Fibonacci sequence up to the nth term using an recursive approach.
  *
  * @n: The index of the desired Fibonacci number.
  * 
  * Description: This function calculates the Fibonacci sequence up to the nth term using an recursive approach.
  *
  * Return: nth Fibonacci number.
  */
int F_recursive(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else
        return F_recursive(n - 3) + F_recursive(n - 2);
}
