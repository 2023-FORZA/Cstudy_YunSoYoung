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
		for (int i = 1; i < strlen(word); i++) // �ܾ��� ���̸�ŭ �ݺ��ϱ�
		{
			if (word[i] != word[i - 1]) // ���� ���ڰ� �ٸ� ���
			{
				for (int j = 0; j < i - 1; j++)
				{
					if (word[i] == word[j]) // ���� �ܾ��� ������ �ٸ� �ܾ ���ٸ�
					{
						check = 1; // �׷� �ܾ �ƴϴ�
						break;
					}
				}
			}
		}
		if (check != 1) // �׷� �ܾ��� ���
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