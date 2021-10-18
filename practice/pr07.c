#include<stdio.h>
#include<stdlib.h>

int compare(const void *p, const void *q);
int main()
{
    int sum=0;
    int p[5]={5, 1, 3, 2, 4};
    qsort(p, 5, sizeof(int), compare);
    // sum=p[0][0]+p[4][4];
    for(int i=0; i<5; i++){
        printf("%d ", p[i]);
    }
    printf("%d", sum);
    return 0;

}
int compare(const void *p, const void *q)
{
    return *(int *)p - *(int *)q;
}
