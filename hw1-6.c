#include <stdio.h>
#define SIZE 10
void extend(double[SIZE], double[SIZE], double[SIZE]);
int main() {
    double price[SIZE] = {10.62, 14.89, 13.21, 16.55, 18.62, 9.47, 6.58, 18.32, 12.15, 3.98}, quantity[SIZE] = {4, 8.5, 6, 8.35, 9, 15.3, 3, 5.4, 2.9, 4.8}, amount[SIZE];
    extend(price, quantity, amount);
    for(int i = 0; i < 10; i++) {
        printf("amount[%d] = %f\n", i, amount[i]);
    }
    return 0;
}
void extend(double arr1[SIZE],double arr2[SIZE],double arr3[SIZE]) {
    for(int i = 0; i < 10; i++) {
        arr3[i] = arr1[i] * arr2[i];
    }
}   