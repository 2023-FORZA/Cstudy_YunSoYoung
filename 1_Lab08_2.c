// Baekjoon Online Judge # 10825

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
	int kor;
	int eng;
	int math;
	char name[11];
}s;

s ar[100001];
s ar_copy[100001];

void merge(int start, int mid, int end)
{
	int i = start;
	int j = mid + 1;
	int k = start;

	while (i <= mid && j <= end)
	{
		if (ar[i].kor > ar[j].kor)
		{  //왼쪽 배열의 국어 점수가 클 때 
			ar_copy[k] = ar[i++];
		}
		else if (ar[i].kor < ar[j].kor)
		{ //오른쪽 배열의 국어 점수가 클 때  
			ar_copy[k] = ar[j++];
		}
		else
		{  //국어 점수가 같을 때
			if (ar[i].eng < ar[j].eng)
			{  //오른쪽 배열의 영어 점수가 클 때
				ar_copy[k] = ar[i++];
			}
			else if (ar[i].eng > ar[j].eng)
			{  //왼쪽 배열의 영어 점수가 클 때
				ar_copy[k] = ar[j++];
			}
			else
			{  //국어, 영어 점수가 같을 때
				if (ar[i].math > ar[j].math)
				{  //왼쪽 배열의 수학 점수가 클 때
					ar_copy[k] = ar[i++];
				}
				else if (ar[i].math < ar[j].math)
				{  //오른쪽 배열의 수학 점수가 클 때
					ar_copy[k] = ar[j++];
				}
				else
				{  //국어, 영어, 수학 점수가 모두 같을 때
					if (strcmp(ar[i].name, ar[j].name) > 0)
					{
						ar_copy[k] = ar[j++];
					}
					else
					{
						ar_copy[k] = ar[i++];
					}
				}
			}
		}
		k++;
	}
	if (i > mid)
	{
		for (int m = j; m <= end; m++)
		{
			ar_copy[k++] = ar[m];
		}
	}
	else
	{
		for (int m = i; m <= mid; m++)
		{
			ar_copy[k++] = ar[m];
		}
	}
	for (int m = start; m <= end; m++)
	{
		ar[m] = ar_copy[m];
	}
}

void merge_sort(int start, int end)
{
	if (start < end)
	{
		int mid = (start + end) / 2;
		merge_sort(start, mid);
		merge_sort(mid + 1, end);
		merge(start, mid, end);
	}
}

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%s %d %d %d", &ar[i].name, &ar[i].kor, &ar[i].eng, &ar[i].math);
	}
	merge_sort(0, n - 1);

	for (int i = 0; i < n; i++)
	{
		printf("%s\n", ar[i].name);
	}

	return 0;
}