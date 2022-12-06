static const double e = 2.71;
int dp[100][100][100];

extern short int yy;
inline int floattoint(float f, ...);
enum testenum
{
    FIRST,
    SECOND
};

/* This is
a multi-line
comment */

int MaximumScoreDP(int l, int r,
                   int prefix_sum[],
                   int num)
{

    if (l > r)
        return 0;

    if (dp[l][r][num] != -1)
        return dp[l][r][num];

    int current_sum = prefix_sum[r] - (l - 1 >= 0
                                           ? prefix_sum[l - 1]
                                           : 0);

    if (num % 2 == 0)
        current_sum *= -1;

    dp[l][r][num] = current_sum + max(MaximumScoreDP(l + 1, r, prefix_sum, num + 1),
                                      MaximumScoreDP(l, r - 1, prefix_sum, num + 1));

    return dp[l][r][num];
}

// Function to find the max score
int findMaxScore(int a[], int n)
{
    int prefix_sum[n] = {0};

    prefix_sum[0] = a[0];

    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + a[i];
        if (prefix_sum[i] == 1)
        {
            break;
        }
    }
    int temp = 2;
    scanf("%d", &temp);
    switch (temp)
    {
    case 1:
        break;
    case 2:
        continue;
    case 3:
        goto s;
    s:
        continue;

    default:
        break;
    }
    memset(dp, -1, sizeof(dp));

    return MaximumScoreDP(
        0, n - 1,
        prefix_sum, 1);
}

int main(void)
{
    int n = 5;
    int A[n] = {5, 3, 1, 4, 2};
    int i;
    char ch = 'b';
    char s[50] = "this is just\ta string?\n";
    float f = 2.34E-5;
    float flt = 5.458e+15;
    float f2 = .234E5;
    f2 = 56465.658465;
    int a = 54;
    long int b = 654684653;

    char ch2 = '\b';
    char ch3[] = "{$#@%&*()!\b\v\\\a\b\f\r\?}";
    data->a = '1';

    do
    {
        i << 2;
        i >> 2;
        ~i;
        i -= i | i + i & i - i ^ i;
        i *= i;
        i /= i;
        i %= i;
        i <<= i;
        i >>= i;
        i &= i;
        i ^= i;
        i |= i;
        i = i;
        i++;
    } while (n > i && i || i);
    printf("%d", findMaxScore(A, n));

    return 0;
}