#include <stdio.h>
void liquid(int *, int*, int *, int *, int *);
int main() {
    int cups, gallons, quarts, pints, ccups;
    printf("Enter the total cups:");
    scanf("%d", &cups);
    liquid(&cups, &gallons, &quarts, &pints, &ccups);
    printf("%d cups: %d gallons, %d quarts, %d pints, %d cups", cups, gallons, quarts, pints, ccups);
    return 0;
}
void liquid(int *c, int *g, int *q, int *p, int *cc) {
    int totcup = *c;
    *g = totcup / 16;
    totcup %= 16;
    *q = totcup / 4;
    totcup %= 4;
    *p = totcup / 2;
    totcup %= 2;
    *cc = totcup;
}
