#include <stdio.h>
void secs(int *, int*, int*, int*);
int main() {
    int hour, minute, second, total;
    printf("Enter the time (h m s)");
    scanf("%d %d %d", &hour, &minute, &second);
    secs(&hour, &minute, &second, &total);
    printf("Total: %d seconds", total);
    return 0;
}
void secs(int *h, int *m, int *s, int *t) {
    int hsec, msec;
    hsec = *h * 3600;
    msec = *m * 60;
    *t = hsec + msec + *s;
}