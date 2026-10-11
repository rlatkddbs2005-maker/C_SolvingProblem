#include <stdio.h>
void calculate(int *, int *, int*, int *, int*, int *); 
int main() {
    int N1, N2, SUM, DIVID, REMAIN, MULTIPLE;
    printf("정수 두개를 입력하세요");
    scanf("%d %d", &N1, &N2);
    calculate(&N1, &N2, &SUM, &DIVID, &REMAIN, &MULTIPLE);
    printf("합: %d\n 나누기: %d\n 나머지: %d\n 곱: %d", SUM, DIVID, REMAIN, MULTIPLE);
    return 0;
}

void calculate(int *num1, int *num2, int *sum, int *divide, int *remain, int* multiple) {
    *sum = *num1 + *num2;
    *divide = *num1 / *num2;
    *remain = *num1 % *num2;
    *multiple = *num1 * *num2;
}