#include <stdio.h>
#define SIZE 5

int main() {
    int age[SIZE]   = {8, 16, -3, 15, 16};
    int score[SIZE] = {77, 66, 77, -69, 33};
    int maxagecnt = 0, minagecnt = 0;
    int maxscorecnt = 0, minscorecnt = 0;
    int maxage = age[0], minage = age[0];
    int maxscore = score[0], minscore = score[0];
    int maxagegrp[SIZE], minagegrp[SIZE];
    int maxscoregrp[SIZE], minscoregrp[SIZE];

    for (int i = 0; i < SIZE; i++) {
        if (age[i] < 0 || score[i] < 0) {
            continue;
        }

        if (age[i] > maxage) {
            maxage = age[i];
            maxagecnt = 0;
            maxagegrp[maxagecnt] = i;
        } else if (age[i] == maxage) {
            maxagecnt++;
            maxagegrp[maxagecnt] = i;
        }

        if (age[i] < minage) {
            minage = age[i];
            minagecnt = 0;
            minagegrp[minagecnt] = i;
        } else if (age[i] == minage) {
            minagecnt++;
            minagegrp[minagecnt] = i;
        }

        if (score[i] > maxscore) {
            maxscore = score[i];
            maxscorecnt = 0;
            maxscoregrp[maxscorecnt] = i;
        } else if (score[i] == maxscore) {
            maxscorecnt++;
            maxscoregrp[maxscorecnt] = i;
        }

        if (score[i] < minscore) {
            minscore = score[i];
            minscorecnt = 0;
            minscoregrp[minscorecnt] = i;
        } else if (score[i] == minscore) {
            minscorecnt++;
            minscoregrp[minscorecnt] = i;
        }
    }

    printf("가장나이가 많은 사람은 %d입니다.\n 가장나이가 많은 사람의 점수는", maxage);
    for(int i = 0; i <= maxagecnt; i++) {
        printf(" %d", score[maxagegrp[i]]);
    }

    printf("\n가장나이가 어린 사람은 %d입니다. \n 가장나이가 적은 사람의 점수는", minage);
    for(int i = 0; i <= minagecnt; i++) {
        printf(" %d", score[minagegrp[i]]);
    }

    printf("\n가장점수가 낮은 사람은 %d입니다. \n 가장점수가 낮은 사람의 나이는", minscore);
    for(int i = 0; i <= minscorecnt; i++) {
        printf(" %d", age[minscoregrp[i]]);
    }

    printf("\n가장점수가 높은 사람은 %d입니다. \n 가장점수가 높은 사람의 나이는", maxscore);
    for(int i = 0; i <= maxscorecnt; i++) {
        printf(" %d", age[maxscoregrp[i]]);
    }

    return 0;
}
