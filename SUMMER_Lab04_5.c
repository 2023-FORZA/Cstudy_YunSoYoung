// Baekjoon Online Judge # 5585

#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int s_change = 0;
	int change = 1000 - n;
	int hundred = change / 100;
	if (hundred >= 5)
	{
		s_change += hundred - 4;
	}
	else
	{
		s_change += hundred;
	}

	int ten = (change - (hundred * 100)) / 10;
	if (ten >= 5)
	{
		s_change += ten - 4;
	}
	else
	{
		s_change += ten;
	}

	int one = change - (hundred * 100) - (ten * 10);
	if (one >= 5)
	{
		s_change += one - 4;
	}
	else
	{
		s_change += one;
	}

	printf("%d", s_change);
	return 0;
}