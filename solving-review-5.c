#include <stdio.h>
#define MAXNUM 1000

void findmax(int [MAXNUM]); 

int main() {
    int numlist[MAXNUM];
    
    for(int i = 0; i < MAXNUM; i++) {
        printf("정수를 입력하세요\n");
        scanf("%d", &numlist[i]); 
    }
    
    findmax(numlist);
    return 0;
}

void findmax(int local_array[]) {
    int i, max = local_array[0];
    
    for(i = 0; i < MAXNUM; i++) {
        if(local_array[i] > max)
            max = local_array[i];
    }
    printf("%d", max);
}