// Baekjoon Online Judge # 1308

#include <stdio.h>

int is_invalid_year(int year) {
    // 유효하지 않은 연도 확인
    if (year < 1 || year > 9999)
        return 1;
    else
        return 0;
}

int is_invalid_month(int month) {
    // 유효하지 않은 월 확인
    if (month < 1 || month > 12)
        return 1;
    else
        return 0;
}

int is_invalid_day(int day) {
    // 유효하지 않은 일 확인
    if (day < 1 || day > 31)
        return 1;
    else
        return 0;
}

// 윤년 계산
int calculate_days_in_year(int year) {
    int days = (year - 1) * 365;
    for (int i = 1; i < year; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
            days++;
    }
    return days;
}

// 월별 일 수 계산
int calculate_days_in_month(int month, int year) {
    int days_per_month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int days = 0;

    for (int i = 0; i < month - 1; i++) {
        days += days_per_month[i];
    }

    if (month > 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))) {
        days++; // 윤년인 경우 2월에 하루를 추가
    }

    return days;
}

int main() {
    int today_year, today_month, today_day;
    int d_year, d_month, d_day;
    int days_today = 0, days_d = 0;

    scanf("%d %d %d %d %d %d", &today_year, &today_month, &today_day, &d_year, &d_month, &d_day);

    // 유효성 검사
    if (is_invalid_year(today_year) || is_invalid_year(d_year) ||
        is_invalid_month(today_month) || is_invalid_month(d_month) ||
        is_invalid_day(today_day) || is_invalid_day(d_day)) {
        printf("Invalid input");
        return 0;
    }

    // 현재 날짜와 D-Day 간 일 수 계산
    days_today = calculate_days_in_year(today_year) + calculate_days_in_month(today_month, today_year) + today_day;
    days_d = calculate_days_in_year(d_year) + calculate_days_in_month(d_month, d_year) + d_day;

    // 1000년 이상 차이나는 경우
    if ((d_year - today_year > 1000) ||
        ((d_year - today_year) == 1000 && (d_month > today_month)) ||
        ((d_year - today_year) == 1000 && (d_month == today_month) && (d_day >= today_day))) {
        printf("gg");
        return 0;
    }

    printf("D-%d", days_d - days_today);
    return 0;
}