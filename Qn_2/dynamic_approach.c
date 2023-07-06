int F_dynamic(int n) 
{
    int table[n + 1];
    table[0] = 0;
    table[1] = 1;
    table[2] = 2;

    for (int i = 3; i <= n; i++)
        table[i] = table[i - 3] + table[i - 2];

    return table[n];
}
