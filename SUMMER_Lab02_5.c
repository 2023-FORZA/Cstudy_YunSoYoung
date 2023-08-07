// Baekjoon Online Judge # 7482

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        double a;
        scanf("%lf", &a);
        printf("%.10lf\n", a / 6);
    }

    return 0;
}