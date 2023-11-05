// Baekjoon Online Judge # 1652
#include <stdio.h>

int main() {
	int n;
	int h = 0, v = 0;
	char map[110][110];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%s", map[i]);

	for (int i = 0; i < n; i++) {
		int cnt = 0;
		for (int j = 0; j < n; j++) {
			if (map[i][j] == '.')
				cnt++;
			else {
				if (cnt >= 2)
					h++;
				cnt = 0;
			}
		}
		if (cnt >= 2)
			h++;
	}

	for (int i = 0; i < n; i++) {
		int cnt = 0;
		for (int j = 0; j < n; j++) {
			if (map[j][i] == '.')
				cnt++;
			else {
				if (cnt >= 2)
					v++;
				cnt = 0;
			}
		}
		if (cnt >= 2)
			v++;
	}
	printf("%d %d\n", h, v);
	return 0;
}