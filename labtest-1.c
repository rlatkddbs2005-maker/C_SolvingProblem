
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SEVEN 0
#define BAR 1
#define DIAMOND 2
#define RUBY 3
int main() {
    char *symbols[] = {"SEV", "BAR", "DIA", "RUB"};
    srand(time(NULL));
    int total = 0;
    for(int i = 0; i < 10000; i++) {
        int slot1 = rand() % 4;
        int slot2 = rand() % 4;
        int slot3 = rand() % 4;
        printf("[run%d]", i);
        printf("%s %s %s",symbols[slot1], symbols[slot2], symbols[slot3]);
        if(slot1 == slot2 && slot2 == slot3 && slot1 == SEVEN) {
            printf(" JACKPOT: 100won\n");
            total += 100;
        }
        else if(slot1 == slot2 && slot2 == slot3 && slot1 == BAR) {
            printf(" prize A: 50won\n");
            total += 50;
        }
        else if(slot1 == slot2 && slot2 == slot3 && slot1 == DIAMOND) {
            printf(" prize A: 50won\n");
            total += 50;
        }
        else if(slot1 == slot2 && slot2 == slot3 && slot1 == RUBY) {
            printf(" prize A: 50won\n");
            total += 50;
        }
        else if(slot1 == slot2 || slot2 == slot3 || slot1 == slot3) {
            printf(" prize B: 20won\n");
            total += 20;
        }
        else {
            printf(" prize C: 10won\n");    
            total += 10;
        }
    }
    printf("Total: %d WON (max: 100won, min: 10won)", total);
    return 0;
}