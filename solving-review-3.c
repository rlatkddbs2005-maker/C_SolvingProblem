#include <stdio.h>
#define SIZE 5
#define MILE2KM 1.60934
void mile2km(int [SIZE]);
int main() {
    int mile[SIZE] = {2, 4, 8, 11, 33};
    mile2km(mile);
    return 0;
}

void mile2km(int arr[SIZE]) {
    float km[SIZE];
    for(int i = 0; i < SIZE; i++) {
        km[i] = arr[i] *  MILE2KM;
        printf(" %f", km[i]);
    }
}