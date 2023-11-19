// Baekjoon Online Judge # 5211

#include <stdio.h>
#include <string.h>

int main() {
    char s[105]; // �Է� ���� ���� ���ڿ� (�ִ� ���� 100 + ������ '\0'�� ���� ����)
    scanf("%s", s);

    int A = 0, C = 0;

    for (int i = 0; i < strlen(s); ++i) {
        if (i == 0 || s[i - 1] == '|') {
            if (s[i] == 'A' || s[i] == 'D' || s[i] == 'E') {
                A++;
            }
            if (s[i] == 'C' || s[i] == 'F' || s[i] == 'G') {
                C++;
            }
        }
    }

    if (A == C) {
        A += (s[strlen(s) - 1] == 'A');
        C += (s[strlen(s) - 1] == 'C');
    }

    if (A > C) {
        printf("A-minor\n");
    }
    else {
        printf("C-major\n");
    }

    return 0;
}