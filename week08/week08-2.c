// gcc week09-2.c -o crypt.out
// ./crypt.out (key) <mes.txt> encrypt.txt

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int c;
    while((c=getchar())!=EOF)
        putchar(c^atoi(argv[1]));
}