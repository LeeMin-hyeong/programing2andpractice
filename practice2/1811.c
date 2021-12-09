#include<stdio.h>
int main(void){
    #if arr==1
        int a[10];
    #elif arr==2
        int a[20];
    #endif // arr
    
    printf("%d", sizeof(a));
    return 0;
}

//gcc arr.c -D arr=2 -o arr