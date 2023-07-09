// Baekjoon Online Judge # 8958

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int n = 0;
    char s[81];

    scanf("%d", &n);
    int* arr = malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s", s);
        int len = strlen(s);
        int score = 0;
        int currentScore = 0;

        for (int a = 0; a < len; a++)
        {
            if (s[a] == 'O')
            {
                currentScore++;
                score += currentScore;
            }
            else
            {
                currentScore = 0;
            }
        }

        arr[i] = score;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    free(arr);
    return 0;
}