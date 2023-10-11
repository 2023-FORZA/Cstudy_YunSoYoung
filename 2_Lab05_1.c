// Baekjoon Online Judge # 4344

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){

	int ary[1001] = { 0 };
	int result = 0;
	int student, grade, cases;

	scanf("%d", &cases);

	for (int i = 0; i < cases; i++)
	{
		int avg = 0;
		int cnt = 0;

		scanf("%d", &student);
		for (int j = 0; j < student; j++)
		{
			scanf("%d", &ary[j]);
			avg += ary[j];
		}

		avg = avg / student;
		for (int j = 0; j < student; j++)
		{
			if (avg < ary[j])
				cnt++;
		}
		printf("%.3f%%\n", (double)cnt * 100 / student);
	}
	return 0;
}