int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int n;
    n = -5;
    int p = 10;

    if (n < 0)
    {
        n = n * (-1);
    }

    int fact_n = factorial(n);
    int fact_2 = factorial(2);
    int fact_3 = factorial(p);
    return 0;
}
