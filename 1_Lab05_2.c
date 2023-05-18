// Baekjoon Online Judge # 10807 개수 세기
#include <stdio.h>
int main(void)
{
    int arr[100];
    int n = 0; // 주어진 정수의 개수
    int v = 0; // 찾을 정수
    int count = 0; // 찾을 정수의 개수
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &v);
    for (int j = 0; j < n; j++)
    {
        if (v == arr[j])
            count++;
    }
    printf("%d", count);
    return 0;
}