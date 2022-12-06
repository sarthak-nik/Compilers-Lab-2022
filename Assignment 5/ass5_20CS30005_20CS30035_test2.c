int add(int a, int b)
{
    int sum = a + b;
    return sum;
}

int sub(int a, int b)
{
    return a - b;
}

int findGreater(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

void doNothing()
{
    return;
}
int main()
{
    int a, b, sum, diff, max;
    a = 84, b = 21;
    sum = add(a, b);
    diff = sub(a, b);
    max = findGreater(a, b);
    doNothing();
    return 0;
}