// Baekjoon Online Judge # 1308

#include <stdio.h>

int is_invalid_year(int year) {
    // ��ȿ���� ���� ���� Ȯ��
    if (year < 1 || year > 9999)
        return 1;
    else
        return 0;
}

int is_invalid_month(int month) {
    // ��ȿ���� ���� �� Ȯ��
    if (month < 1 || month > 12)
        return 1;
    else
        return 0;
}

int is_invalid_day(int day) {
    // ��ȿ���� ���� �� Ȯ��
    if (day < 1 || day > 31)
        return 1;
    else
        return 0;
}

// ���� ���
int calculate_days_in_year(int year) {
    int days = (year - 1) * 365;
    for (int i = 1; i < year; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
            days++;
    }
    return days;
}

// ���� �� �� ���
int calculate_days_in_month(int month, int year) {
    int days_per_month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int days = 0;

    for (int i = 0; i < month - 1; i++) {
        days += days_per_month[i];
    }

    if (month > 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))) {
        days++; // ������ ��� 2���� �Ϸ縦 �߰�
    }

    return days;
}

int main() {
    int today_year, today_month, today_day;
    int d_year, d_month, d_day;
    int days_today = 0, days_d = 0;

    scanf("%d %d %d %d %d %d", &today_year, &today_month, &today_day, &d_year, &d_month, &d_day);

    // ��ȿ�� �˻�
    if (is_invalid_year(today_year) || is_invalid_year(d_year) ||
        is_invalid_month(today_month) || is_invalid_month(d_month) ||
        is_invalid_day(today_day) || is_invalid_day(d_day)) {
        printf("Invalid input");
        return 0;
    }

    // ���� ��¥�� D-Day �� �� �� ���
    days_today = calculate_days_in_year(today_year) + calculate_days_in_month(today_month, today_year) + today_day;
    days_d = calculate_days_in_year(d_year) + calculate_days_in_month(d_month, d_year) + d_day;

    // 1000�� �̻� ���̳��� ���
    if ((d_year - today_year > 1000) ||
        ((d_year - today_year) == 1000 && (d_month > today_month)) ||
        ((d_year - today_year) == 1000 && (d_month == today_month) && (d_day >= today_day))) {
        printf("gg");
        return 0;
    }

    printf("D-%d", days_d - days_today);
    return 0;
}