// Baekjoon Online Judge # 11655

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char str[101], big[52], small[52];

	for (int i = 0; i < 26; i++) {
		big[i] = i + 'A';
		big[i + 26] = big[i];
		small[i] = i + 'a';
		small[i + 26] = small[i];
	}

	scanf("%[^\n]", str);

	int len = strlen(str);

	for (int i = 0; i < len; i++) {
		if ('a' <= str[i] && str[i] <= 'z')
			str[i] = small[str[i] - 'a' + 13];
		else if ('A' <= str[i] && str[i] <= 'Z')
			str[i] = big[str[i] - 'A' + 13];
	}

	printf("%s", str);
	return 0;
}