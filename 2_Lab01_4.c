// Baekjoon Online Judge # 1157

#include <stdio.h>
#include <string.h>

int main()
{
	char word[1000000] = { 0, };
	int alp[26] = { 0, };

	scanf("%s", &word);

	int max_index = 0; // 나온 횟수 배열의 인덱스
	int max_cnt = 0; // 최대로 나온 횟수
	int result = 0;

	for (int k = 0; k < 26; k++)
	{
		// 각 배열에 a부터 z까지 나온 횟수를 저장
		for (int i = 0; i < strlen(word); i++)
		{
			if (((k + 97) == word[i]) || ((k + 65) == word[i]))
			{
				alp[k]++;
			}
		}
	}

	max_cnt = alp[0];

	for (int i = 0; i < 26; i++)
	{
		// max의 값을 0으로 설정한 후에 이보다 큰 값이 있으면 교체
		if (max_cnt < alp[i])
		{
			max_cnt = alp[i]; // 더 큰 배열에 저장된 수를 최대 나온 횟수로 저장
			max_index = i;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		// 최대로 나온 횟수가 하나의 알파벳인지 검사
		if (max_cnt == alp[i])
		{
			result++;
		}
	}

	if (result == 1)
	{
		printf("%c\n", max_index + 65);
	}
	else if (result > 1)
	{
		printf("?");
	}

	return 0;
}