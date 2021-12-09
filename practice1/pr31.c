#include <stdio.h>

int main(){
    char *p[2][2]={"abc", "def", "ghi", "jkl"};

    printf("%s", p[0][0]);
    printf("%c", *p[1][1]);
}