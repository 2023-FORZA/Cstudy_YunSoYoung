// Baekjoon Online Judge # 1037
#include <stdio.h>
int main()
{
	int min = 1000000, max = 2;
	int num;
	int N, div[50];
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &div[i]);
		if (min > div[i])
			min = div[i];
		if (max < div[i])
			max = div[i];
	}
	num = max * min;
	printf("%d", num);
	return 0;
}