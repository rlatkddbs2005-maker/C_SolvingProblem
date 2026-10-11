#include <stdio.h>
#define SIZE 9
void show(float [SIZE]);
int main() {
    float rates[SIZE] = {6.5, 8.2, 8.5, 8.3, 8.6, 9.4, 9.6, 9.8, 10};
    show(rates);
    return 0;
}
void show(float arr[SIZE]) {
    for(int i =0; i < SIZE; i++) {
        printf("rates[%d] = %f\n", i, arr[i]);
    }
}