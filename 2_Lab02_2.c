// Baekjoon Online Judge # 2846

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int height[1000]; // 최대 크기로 배열 선언
    for (int i = 0; i < N; i++) {
        scanf("%d", &height[i]);
    }

    int maxClimb = 0;
    int currentClimb = 0;

    for (int i = 1; i < N; i++) {
        if (height[i] > height[i - 1]) {
            currentClimb += height[i] - height[i - 1];
        }
        else {
            if (currentClimb > maxClimb) {
                maxClimb = currentClimb;
            }
            currentClimb = 0;
        }
    }

    if (currentClimb > maxClimb) {
        maxClimb = currentClimb;
    }

    printf("%d\n", maxClimb);

    return 0;
}