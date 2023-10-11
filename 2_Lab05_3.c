// Baekjoon Online Judge # 1152

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char arr[1000000];
	scanf("%[^\n]", arr);

	int len = (int)strlen(arr);
	int i = 0;
	int count = 0;

	for (i = 0; i < len - 1; i++) {
		if (arr[i] == 32) {
			count++;
		}
	}

	if (arr[0] == 32) {
		count = count - 1;
	}

	printf("%d\n", count + 1);
	return 0;
}