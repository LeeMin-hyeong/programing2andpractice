#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_word(const void *p, const void *q);

int main(){
    char *word[10];
    char temp[100];

    for(int i=0; i<10; i++){
        printf("%d번째 단어 : ", i+1);
        scanf("%s", temp);
        getchar();
        word[i]=(char *)malloc(strlen(temp)+1);
        strcpy(word[i], temp);
    }

    qsort(word, 10, sizeof(char *), compare_word);

    for(int i=0; i<10; i++){
        printf("%s\n", word[i]);
        free(word[i]);
    }
}

int compare_word(const void *p, const void *q){
    return strcmp(*(char **)p, *(char **)q);
}