#include <stdio.h>
#define SIZE 5
#define MILE2KM 1.60934
void mile2km(int [SIZE], float [SIZE]);
int main() {
    int mile[SIZE] = {2, 4, 8, 11, 33};
    float km[SIZE];
    mile2km(mile, km);
    for(int i = 0; i <SIZE; i++)
        printf("%f", km[i]);
    return 0;
}

void mile2km(int arr1[SIZE], float arr2[SIZE]) {
    for(int i = 0; i < SIZE; i++) {
        arr2[i] = arr1[i] *  MILE2KM;
    }
}