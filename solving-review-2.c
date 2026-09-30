#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CHERRY 0
#define LEMON 1
#define BAR 2
#define BELL 3
int main() {
    const char *symbols[] = {"CHERRY", "LEMON", "BAR", "BELL"};
    srand(time(NULL));
    while(1) {
        int slot1 = rand() % 4;
        int slot2 = rand() % 4;
        int slot3 = rand() % 4;
        printf("%s %s %s\n",symbols[slot1], symbols[slot2], symbols[slot3]);
        if(slot1 == slot2 && slot2 == slot3 && slot1 == CHERRY) 
            printf("JACKPOT\n");
        else if(slot1 == CHERRY || slot2 == CHERRY || slot3 == CHERRY)
            printf("DIME\n");
        else if(slot1 == slot2 && slot2 == slot3)
            printf("NICKEL\n");
        else 
            printf("I`m sorry\n");    
        char c;
        printf("계속하려면 ENTER를 입력하세요");
        c = getchar();
        if(c == 'q')
        break;
    }
    return 0;
}