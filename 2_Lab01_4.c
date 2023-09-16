// Baekjoon Online Judge # 1157

#include <stdio.h>
#include <string.h>

int main()
{
	char word[1000000] = { 0, };
	int alp[26] = { 0, };

	scanf("%s", &word);

	int max_index = 0; // ���� Ƚ�� �迭�� �ε���
	int max_cnt = 0; // �ִ�� ���� Ƚ��
	int result = 0;

	for (int k = 0; k < 26; k++)
	{
		// �� �迭�� a���� z���� ���� Ƚ���� ����
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
		// max�� ���� 0���� ������ �Ŀ� �̺��� ū ���� ������ ��ü
		if (max_cnt < alp[i])
		{
			max_cnt = alp[i]; // �� ū �迭�� ����� ���� �ִ� ���� Ƚ���� ����
			max_index = i;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		// �ִ�� ���� Ƚ���� �ϳ��� ���ĺ����� �˻�
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