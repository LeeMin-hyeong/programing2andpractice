#include <stdio.h>

int main(){
    char a[10]={0,1,0,1,0,1,0,1};
    unsigned int *p;
    p=(unsigned int *)&a[0];
    // printf("%#x\n", &a[0]);
    // printf("%d\n", *p);
    for(int i=0; i<10; i++)
        printf("%d\n", p[i]);
    printf("\n");
    *p=1024;
    for(int i=0; i<10; i++)
        printf("%d", a[i]);
    printf("%d", a[1]);
}