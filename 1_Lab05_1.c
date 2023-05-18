// Baekjoon Online Judge # 2562 ÃÖ´ñ°ª
#include <stdio.h>

int main(void)
{
    int max = 0;
    int a[9];
    int b = 0;
    for (int i = 1; i <= 9; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] > max)
        {
            max = a[i];
            b = i;
        }
    }
    printf("%d\n%d", max, b);
    return 0;
}