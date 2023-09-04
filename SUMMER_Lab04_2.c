// Baekjoon Online Judge # 2941

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[101];
    scanf("%s", str);
    int len = strlen(str);
    int num = len;

    for (int i = 0; i < len; i++)
    {
        if (str[i] == '=' || str[i] == '-') num--;
        if (str[i] == 'l' && str[i + 1] == 'j') num--;
        if (str[i] == 'n' && str[i + 1] == 'j') num--;
        if (str[i] == 'd' && str[i + 1] == 'z' && str[i + 2] == '=') num--;
    }

    printf("%d", num);
}