// Baekjoon Online Judge # 8595

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char sentence[5000000];

int main()
{
	long long sum = 0;
	int hidden_number = 0;
	int length = 0;
	char temp_c;

	scanf("%d", &length);
	scanf("%c", &temp_c);
	scanf("%s", sentence);

	for (int i = 0; i < length; i++)
	{
		temp_c = sentence[i];

		if (0 <= temp_c - '0' && temp_c - '0' <= 9)
		{
			if (hidden_number == 0)
			{
				hidden_number += temp_c - '0';
			}
			else
			{
				hidden_number *= 10;
				hidden_number += temp_c - '0';
			}
		}
		else
		{
			sum += hidden_number;
			hidden_number = 0;
		}
	}

	sum += hidden_number;

	printf("%lld", sum);
	return 0;
}