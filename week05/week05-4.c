#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char temp[20];
    char *a[10];
    
    for(int i=0; i<10; i++){
        scanf("%s", temp);
        getchar();
        a[i]=(char *)malloc(strlen(temp)+1);
        strcpy(a[i], temp);
    }
    for(int i=0; i<10; i++){
        printf("%s\n", a[i]);
        free(a[i]);
    }
}