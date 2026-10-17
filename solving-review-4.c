#include <stdio.h>

int word_count(char []);
int main() {
    char word[] = "I am a good boy";
    int wordcnt;
    wordcnt= word_count(word);
    printf("%d", wordcnt);
    return 0;
}

int word_count(char arr[]) {
    int cnt = 0;
    for(int i = 0; arr[i] != '\0'; i++) {
        if(arr[i] == ' ')
            cnt++;
    }
    return cnt + 1;
}