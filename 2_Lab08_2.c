// Baekjoon Online Judge # 1212

#include <stdio.h>
#include <math.h>
#include <string.h>

int count = 0;

void binary(int num, int icon) {
	if (icon == 0 && num <= 3) {
		count = 1;
		if (num == 1)
			count = 0;
	}
	else count = 2;

	for (int i = count; i >= 0; i--) {
		int square = pow(2, i);
		if (num >= square) {
			num -= square;
			printf("1");
		}
		else printf("0");
	}
}

int main() {
	char octal[333334];
	scanf("%s", octal);
	int size = strlen(octal);
	if (octal[0] == 48)
		printf("0");
	else {
		for (int i = 0; i < size; i++) {
			binary(octal[i] - 48, i);
		}
	}
	return 0;
}