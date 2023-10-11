// Baekjoon Online Judge # 2563

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int paper[100][100] = { 0 };
	int count = 0;
	int n, a, b;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);

		for (int j = a; j < a + 10; j++) {
			for (int k = b; k < b + 10; k++) {
				if (paper[j][k] == 0) {
					paper[j][k] = 1;
					count++;

				}
			}
		}
	}
	printf("%d", count);
	return 0;
}