#include <stdio.h>

int main(){
    char *fruit="strawberry";
    int i=0;

    while(!(*(fruit+i)=='\0')){
        if(i%2==0)
            printf("%c", *(fruit+i));
        i++;
    }
}