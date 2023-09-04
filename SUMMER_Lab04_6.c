// Baekjoon Online Judge # 9012

#include <stdio.h>

int df(char a[])
{
	int b = 0, i = 0;

	while (a[i])
	{
		if (a[i] == '(')
		{
			b++;
		}
		else
		{
			if (b)
				b--;
			else
				return 0;
		}
		i++;
	}
	if (b)
	{
		return 0;
	}

	return 1;
}

int main()
{
	int n;
	char a[50];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", a);
		if (df(a))
			printf("YES\n");
		else
			printf("NO\n");
	}
}