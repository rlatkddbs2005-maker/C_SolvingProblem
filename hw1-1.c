#include <stdio.h>
void change(float *, int *, int *, int *, int * );
int main() {
    float dollar;
    int quarters, dimes, nickelse, pennies;
    printf("Enter the dollars: ");
    scanf("%f", &dollar);
    change(&dollar, &quarters, &dimes, &nickelse, &pennies);
    printf("%f dollars: %d quarters, %d dimes, %d nickles and %d pennies", dollar, quarters, dimes, nickelse, pennies);
    return 0;
}
void change(float *m, int *q, int *d, int *n, int *p) {
    int CENT;
    CENT = *m * 100;
    *q = CENT / 25;
    CENT %= 25;
    *d = CENT / 10;
    CENT %= 10;
    *n = CENT / 5;
    CENT %= 5;
    *p = CENT;
}