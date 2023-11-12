// Baekjoon Online Judge # 2747

#include <stdio.h>

int arr[46] = { 0, };

int fibo(int x) {
	if (x == 1 || x == 2)
		return 1;
	if (arr[x] != 0)
		return arr[x];
	return arr[x] = fibo(x - 1) + fibo(x - 2);
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", fibo(n));
}