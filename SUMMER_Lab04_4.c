// Baekjoon Online Judge # 5347

#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

long long lcm(long long a, long long b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        long long a, b;
        scanf("%lld %lld", &a, &b);
        long long result = lcm(a, b);
        printf("%lld\n", result);
    }

    return 0;
}