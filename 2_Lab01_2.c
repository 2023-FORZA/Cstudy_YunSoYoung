// Baekjoon Online Judge # 1316

#include <stdio.h>
#include <string.h>

int main()
{
	int n, dap = 0, check = 0;
	char word[101];

	scanf("%d", &n);

	for (int t = 0; t < n; t++)
	{
		scanf("%s", word);
		for (int i = 1; i < strlen(word); i++) // 단어의 길이만큼 반복하기
		{
			if (word[i] != word[i - 1]) // 앞의 글자가 다른 경우
			{
				for (int j = 0; j < i - 1; j++)
				{
					if (word[i] == word[j]) // 앞의 단어을 제외한 다른 단어가 같다면
					{
						check = 1; // 그룹 단어가 아니다
						break;
					}
				}
			}
		}
		if (check != 1) // 그룹 단어일 경우
		{
			dap++;
		}
		else
		{
			check = 0;
		}
	}

	printf("%d\n", dap);
	return 0;
}