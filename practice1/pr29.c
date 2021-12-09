#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char name[30];
    char *name_p;
    name_p=(char *)malloc(30);
    scanf("%s", name_p);
    printf("%s", name_p);
}