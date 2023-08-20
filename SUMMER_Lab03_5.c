// Baekjoon Online Judge # 9550

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int T, N, K, temp;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int sum = 0;
        scanf("%d %d", &N, &K);
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &temp);
            sum += (temp / K);
        }
        printf("%d\n", sum);
    }

    return 0;
}