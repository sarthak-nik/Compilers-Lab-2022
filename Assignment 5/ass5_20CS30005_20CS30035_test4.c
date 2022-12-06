
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
    return;
}

void bubblesort(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                swap(&a[i], &a[j]);
            }
        }
    }
    return;
}

int main()
{
    int a[5];
    a[0] = 5.325;
    a[1] = (int)-3.125;
    a[2] = 5 / 3;
    a[3] = 'd';
    a[4] = 0;
    bubblesort(a, 5);

    return 0;
}
