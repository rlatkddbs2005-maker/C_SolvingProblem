#include <stdio.h>
#define SIZE 5
void totpay(float *, float *, float *);
int main() {
    float base[SIZE], overtime[SIZE], total[SIZE];
    printf("기본급을 입력하세요");
    for (int i =0; i < 5; i++) 
        scanf("%f", &base[i]);
    printf("초과근무수당을 입력하세요");
    for (int i = 0; i < 5; i++)
        scanf("%f", &overtime[i]);
    totpay(base, overtime, total);
    for(int i = 0; i < 5; i++)
        printf(" %f", total[i]);
    return 0;

}
void totpay(float *a, float *b, float *c) {
    for(int i = 0; i < 5; i++) {
        c[i] = a[i] + b[i];
    }
}