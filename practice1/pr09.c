#include<stdio.h>
int main()
{
    int a=0XAA;
    unsigned int b=0x11;
    a|=b;
    a=~a;
    printf("%#x", a);
    b>>=2;
    printf("\n");
    printf("%#x", b);
    return 0;
}
