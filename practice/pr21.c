#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct name{
    char name[10];
    int grade;
}name_grade;

int name_sort(const void *p, const void *q){
    
    return strcmp(((name_grade *)p)->name, ((name_grade *)q)->name);
}

int main(){
    name_grade a[5]={{'a', 1}, {'k', 2}, {'l', 3}, {'i', 4}, {'b', 5}};
    qsort(a, 5, sizeof(name_grade), name_sort);
    for(int i=0; i<5; i++)
        printf("%s", a[i].name);
}