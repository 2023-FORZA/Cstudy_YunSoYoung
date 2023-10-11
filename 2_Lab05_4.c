// Baekjoon Online Judge # 2798

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int card[101];
	int n, m;
	int max = 0;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		scanf("%d", &card[i]);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int p = 0; p < n; p++) {
				// 같은 카드가 아닐 필요
				if (i != j && j != p && i != p) {
					// 세 카드의 합이 m 이하 필요
					if (card[i] + card[j] + card[p] <= m) {
						// max 보다 세 카드의 합이 큰 경우
						if (max < card[i] + card[j] + card[p]) {
							max = card[i] + card[j] + card[p];
						}
					}
				}
			}
		}
	}

	printf("%d\n", max);
	return 0;
}