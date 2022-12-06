int N = 3;

int negate(int a[N][N], int ans[N][N], int n)
{
    int sum = 0;
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            ans[i][j] = a[i][j] * (-1);
            sum = sum + a[i][j];
        }
    }
    return sum;
}

int main()
{
    int a[N][N], ans[N][N];
    int result;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            a[i][j] = i + j + i * j + i / j;
        }
    }
    result = negate(a, ans, N);

    return 0;
}