#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare();

int main(){
    char *p[10], temp[100];
    for(int i=0; i<10; i++){
        printf("%d번째 단어 : ", i+1);
        scanf("%s", temp);
        p[i]=(char *)malloc(strlen(temp)+1);
        strcpy(p[i], temp);
    }
    qsort(p, 10, sizeof(char *), compare);
    for(int i=0; i<10; i++)
        printf("%s", p[i]);


}

int compare(const void *p, const void *q){
    return strcmp(*(char **)p, *(char **)q);
}