#include <stdio.h>
#define SIZE 10
void inputarray(int []);
void displayarray(int []);
int sumarray(int []);
int findmax(int []);
int findmin(int []);
void sortarray(int []);
int main() {
    int arr[SIZE];
    int sum, findmaxx, findminn;
    inputarray(arr);
    displayarray(arr);
    sum = sumarray(arr);
    printf("SUM of Elemints: %d\n", sum);
    findmaxx = findmax(arr);
    printf("maximum Element: %d\n", findmaxx);
    findminn = findmin(arr);
    printf("minimum Element: %d\n", findminn);
    sortarray(arr);
    for(int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
void inputarray(int ar[SIZE]) {
    printf("Enter 10 intgers");
    for(int i = 0; i < SIZE; i++) {
        scanf("%d", &ar[i]);
    }
}
void displayarray(int ar[SIZE]) {
    printf("Array elements:");
    for(int i = 0; i < SIZE; i++) {
        printf("%d ", ar[i]);
    }
    printf("\n");
}
int sumarray(int ar[SIZE]) {
    int sum = ar[0];
    for(int i = 0; i < SIZE -1; i++) {
        sum = sum + ar[i+1];
    }
    return sum;
}
int findmax(int ar[SIZE]) {
    int max = ar[0];
    for(int i = 0; i < SIZE; i++) {
        if(ar[i] > max) {
            max = ar[i];
        }
    }
    return max;
}
int findmin(int ar[SIZE]) {
    int min = ar[0];
    for(int i = 0; i < SIZE; i++) {
        if(ar[i] < min) {
            min = ar[i];
        }
    }
    return min;
}
void sortarray(int ar[SIZE]) {
    int temp;
    for(int i = 0; i < SIZE-1; i++) {
        for(int j = 0; j < SIZE-1; j++) {
            if(ar[j] > ar[j+1]) {
                temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
            }
        }
    }
}
