// Baekjoon Online Judge # 2204

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

char arr[1000][20];
char newArr[1000][20];
char result[1000][20];

int main() {
    int n;
    int cnt = 0;

    while (true) {
        scanf("%d", &n);

        if (n == 0) {
            break;
        }

        for (int i = 0; i < n; i++) {
            char c[20] = {};
            scanf("%s", c);

            for (int j = 0; j < sizeof(c); j++) {
                arr[i][j] = c[j];

                if (c[j] >= 'a' && c[j] <= 'z') {
                    c[j] = c[j] - 'a' + 'A';
                }
            }

            for (int j = 0; j < sizeof(c); j++) {
                newArr[i][j] = c[j];
            }
        }

        int minIndex = 0;

        for (int i = 0; i < n; i++) {
            int cmpResult = 0;
            cmpResult = strcmp(newArr[minIndex], newArr[i]);

            if (cmpResult > 0) {
                minIndex = i;
            }
        }

        printf("%s\n", arr[minIndex]);
    }

    return 0;
}