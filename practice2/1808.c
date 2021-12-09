#include<stdio.h>
#define PRT(x) printf(#x"=%d\n", x)
int main(void) {
    int a=2,x=7;
    PRT(a);
    PRT(x);
    return 0;
}