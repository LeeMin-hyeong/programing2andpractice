#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int (*p)[3] ;
    int *q = p;
    int i;
    p = (int (*)[3]) calloc(12, sizeof(int));
    q = *p;

    for(i = 0 ; i < 12 ; i++)
        q[i] = i;

    printf("%d %d\n",*(*(p+1)+2),**(p+2)+1);
    return 0;
}