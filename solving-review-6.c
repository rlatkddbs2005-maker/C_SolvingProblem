#include <stdio.h>

void minmax(int, int, int *, int *);

int main() {  
    int a, b, max, min;
    
    printf("정수 두개를 입력하세요: ");
    scanf("%d %d", &a, &b);
    
    minmax(a, b, &max, &min);
    
    printf("큰 정수: %d \n작은 정수: %d\n", max, min);
    
    return 0; 
}

void minmax(int num1, int num2, int *maxx, int *minn) {
    if (num1 > num2) {
        *maxx = num1;
        *minn = num2;
    }
    else {
        *maxx = num2;
        *minn = num1;
    }
}