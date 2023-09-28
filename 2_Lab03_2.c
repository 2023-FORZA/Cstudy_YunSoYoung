// Baekjoon Online Judge # 5533

#include <stdio.h>

int main(void) {
	int i, j, k, n;
	_Bool check;
	int input[200][3];
	int score[200];

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d %d %d", &input[i][0], &input[i][1], &input[i][2]);
	}

	for (i = 0; i < 3; i++) {

		for (j = 0; j < n; j++) {
			check = 0;

			for (k = j + 1; k < n; k++) {
				if (input[j][i] == input[k][i]) {
					input[k][i] = 0;
					check = 1;
				}
			}

			if (check)
				input[j][i] = 0;
		}
	}

	for (i = 0; i < n; i++) {
		score[i] = input[i][0] + input[i][1] + input[i][2];
		printf("%d\n", score[i]);
	}

	return 0;
}