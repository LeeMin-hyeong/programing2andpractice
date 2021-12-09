#include <stdio.h>

int main(){
    char c='A';
    c^=c;
    c|=0x2;
    printf("%#x\n", c);
    c<<=2;
    printf("%#x\n", c);
}