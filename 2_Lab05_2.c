// Baekjoon Online Judge # 11728

#include <stdio.h>

int N, M;
long long A[1000001];
long long B[1000001];

int main() {
	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++)    scanf("%lld", &A[i]);
	for (int i = 0; i < M; i++)    scanf("%lld", &B[i]);

	int a = 0;
	int b = 0;

	while (1) {
		if (a == N || b == M) break;
		if (A[a] == B[b]) {
			printf("%lld %lld ", A[a], A[a]);
			a++;
			b++;
		}
		else if (A[a] < B[b]) {
			printf("%lld ", A[a]);
			a++;
		}
		else {
			printf("%lld ", B[b]);
			b++;
		}
	}

	while (a != N) {
		printf("%lld ", A[a]);
		a++;
	}
	while (b != M) {
		printf("%lld ", B[b]);
		b++;
	}
	printf("\n");
	return 0;
}