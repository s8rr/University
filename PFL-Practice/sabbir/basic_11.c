#include <stdio.h>
int main() {
    int totalDays, years, weeks, days;
    scanf("%d", &totalDays);
    years = totalDays / 365;
    days = totalDays % 365;
    weeks = days / 7;
    days = days % 7;
    printf("%d years, %d weeks, %d days\n", years, weeks, days);
    return 0;
}
