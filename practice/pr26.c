#include<stdio.h>
typedef union intorfloat{
    short int i;
    float j;
}int_float;
int main(void){
    int_float n;
    n.i=100;
    n.j=200.0;
    printf("i=%10d, sizeof(n)=%d", n.i, sizeof(n));
}