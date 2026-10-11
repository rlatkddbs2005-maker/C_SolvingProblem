#include <stdio.h>
int secs(int, int, int);
int main() {
    int hour, minute, second, total;
    printf("Enter the time (h m s)");
    scanf("%d %d %d", &hour, &minute, &second);
    total = secs(hour, minute, second);
    printf("%d seconds", total);
    return 0;
}
int secs(int h, int m, int s) {
    int hsec, msec, t;
    hsec = h * 3600;
    msec = m * 60;
    t = hsec + msec + s;
    return t;
}