#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int arr[100];

    while (N--)
    {
        int input, copy, sum, reverse = 0;
        int i = 0;
        int T = 1;

        scanf("%d", &input);
        copy = input;
        while (1)
        {
            reverse += input % 10;
            if (input / 10 == 0)
            {
                break;
            }
            reverse *= 10;
            input /= 10;
        }

        sum = copy + reverse;

        while (1)
        {
            arr[i] = sum % 10;
            i++;
            if (sum / 10 == 0)
            {
                break;
            }
            sum /= 10;
        }

        for (int j = 0; j < i / 2; j++)
        {
            if (arr[j] != arr[i - 1 - j])
            {
                T = 0;
            }
        }

        if (T)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}