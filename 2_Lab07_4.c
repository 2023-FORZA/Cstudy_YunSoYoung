// Baekjoon Online Judge # 1417

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    // �迭�� ũ�⸦ �������� �Ҵ�
    scanf("%d", &n);

    int* vote = (int*)malloc(n * sizeof(int));

    if (vote == NULL) {
        return 1;  // ���� ��Ȳ������ ���α׷� ����
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

    // �������� �Ҵ��� �޸𸮸� ����
    free(vote);
    return 0;
}