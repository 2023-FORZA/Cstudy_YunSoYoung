// Baekjoon Online Judge # 1417

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    // 배열의 크기를 동적으로 할당
    scanf("%d", &n);

    int* vote = (int*)malloc(n * sizeof(int));

    if (vote == NULL) {
        return 1;  // 실패 상황에서는 프로그램 종료
    }

    int i, j;
    int max = 0, cnt = 0, maxindex = -1;

    for (i = 0; i < n; i++)
        scanf("%d", &vote[i]);

    while (1) {
        max = -1;

        for (i = 0; i < n; i++) {
            if (max <= vote[i]) {
                maxindex = i;
                max = vote[i];
            }
        }

        if (maxindex == 0)
            break;

        cnt += 1;
        vote[0] += 1;
        vote[maxindex] -= 1;
    }

    printf("%d\n", cnt);

    // 동적으로 할당한 메모리를 해제
    free(vote);
    return 0;
}