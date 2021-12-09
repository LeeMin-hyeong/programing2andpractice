#include <stdio.h>

int main(){
    int *ip;
    void *vp;
    int a;
    int b;
    ip=&a;
    vp=&b;

    //ip=vp;
    printf("%d", ip==vp?1:0);
}