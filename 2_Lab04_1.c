// Baekjoon Online Judge # 11866

#include <stdio.h>

int main() {
	int n, k, human[5001], jari = 0;

	scanf("%d", &n);
	scanf("%d", &k);

	printf("<");

	for (int i = 1; i <= n; i++) {
		human[i] = 0;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= k; j++) {
			jari++;

			if (jari > n) {
				jari = 1;
			}

			while (1) {
				if (human[jari] == 1) {
					jari++;
				}
				else if (jari > n) {
					jari = 1;
				}
				else {
					break;
				}
			}
		}

		printf("%d", jari);
		if (i != n) {
			printf(", ");
		}
		human[jari] = 1;
	}
	printf(">");
	return 0;
}