// Baekjoon Online Judge # 10807 ���� ����
#include <stdio.h>
int main(void)
{
    int arr[100];
    int n = 0; // �־��� ������ ����
    int v = 0; // ã�� ����
    int count = 0; // ã�� ������ ����
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