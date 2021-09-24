#include <stdio.h>
#include <string.h>

int my_strlen(char str[]){
    int n=0;
    while(!str[n]=='\0'){
        n++;        
    }
    return n;
}

int main(){
    char a[]="C program";
    printf("%d\n", my_strlen(a));
    printf("%d\n", strlen(a));
}