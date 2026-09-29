#include <stdio.h>
int main() {
    int maxage, lowage, maxscore, lowscore, maxagescore, lowagescore, maxscoreage, lowscoreage;
    int age[]={8, 11, 14, 16, 17};
    int score[]={77, 76, 85, 89, 9};
    maxage = age[0];
    lowage = age[0];
    maxscore = score[0];
    lowscore = score[0];
    lowagescore = score[0]; 
    maxagescore = score[0];
    lowagescore = score[0];
    maxscoreage = age[0];
    lowscoreage = age[0];
    for(int i = 0; i < 5; i++) {
        if(maxage < age[i]) {
            maxage = age[i];
            maxagescore = score[i];
        }
        if(lowage > age[i]) {
            lowage = age[i];
            lowagescore = score[i];
        }
        if(maxscore < score[i]) {
            maxscore = score[i];
            maxscoreage = age[i];
        }
        if(lowscore > score[i]) {
            lowscore = score[i];
            lowscoreage = age[i];
        }
    }
    printf("가장높은 점수를 받은 사람의 나이:%d\n", maxscoreage);
    printf("가장낮은 점수를 받은 사람의 나이 :%d\n", lowscoreage);
    printf("가장나이가 많은 사람의 점수: %d\n", maxagescore);
    printf("가장나이가 적은 사람의 점수: %d", lowagescore);
    return 0;
}