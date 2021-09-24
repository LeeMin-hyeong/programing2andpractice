#include <stdio.h>

int main(){
    int ary[5]={10, 15, 20, 25, 30};
    int *ap=ary;

    printf("%u\n%u\n%u\n%u\n%u\n%u\n%u\n%u\n%u\n%u\n", &ary[2], &ap[3], ap+2, *ap, ap[3]+1, ary+2, *ary+2, &ary[0]+2, &*ary+2, &*(ary+2));
}