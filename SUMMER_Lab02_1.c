// Baekjoon Online Judge # 1110

#include<stdio.h>
int main()
{

    int N;
    scanf("%d", &N);

    int compare = N;

    int a, b, c, d;
    int count = 0;

    while (1)
    {
        a = N / 10, b = N % 10;
        c = (a + b) % 10;
        d = (b * 10) + c;

        N = d;
        count++;

        if (d == compare)
            break;


    }

    printf("%d", count);

}