// Baekjoon Online Judge # 11720

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);

    int* numbers = (int*)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++)
    {
        scanf("%1d", &numbers[i]);
    }

    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += numbers[i];
    }

    printf("%d\n", sum);
    free(numbers);
    return 0;
}