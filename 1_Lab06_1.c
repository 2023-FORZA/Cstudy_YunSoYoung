// Baekjoon Online Judge # 1547
#include <stdio.h>
int main()
{
    int arr[3] = { 1, 2, 3 };
    int n, a1, a2, b1, b2, temp;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a1, &b1);
        if (a1 == b1)
            continue;
        else
        {
            for (int k = 0; k < 3; k++)
            {
                if (arr[k] == a1)
                    a2 = k;
                else if (arr[k] == b1)
                    b2 = k;
            }
            temp = arr[a2];
            arr[a2] = arr[b2];
            arr[b2] = temp;
        }
    }
    printf("%d", arr[0]);
    return 0;
}