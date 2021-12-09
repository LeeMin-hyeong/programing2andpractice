#include<stdio.h>
#include<stdlib.h>

int compare(const void *p, const void *q);
int main()
{
    int sum=0;
    int p[5][5]={{1,2,3,4,5}, {6,7,9,1,7}, {6,5,2,8,6}, {9,6,8,0,1}, {2,3,5,6,3}};
    qsort(p, 5, 5*sizeof(int), compare);
    sum=p[0][0]+p[4][4];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }
    printf("%d", sum);
    return 0;

}
int compare(const void *p, const void *q)
{
    return ((int *)p)[3] - ((int *)q)[3];
}
