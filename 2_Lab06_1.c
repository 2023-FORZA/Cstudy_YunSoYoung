// Baekjoon Online Judge # 2292
#include <stdio.h>
int main() {
    int N;
    int i = 1, j = 1;

    scanf("%d", &N);

    while (N > j) {
        j += i * 6;
        i++;
    }
    printf("%d", i);
}