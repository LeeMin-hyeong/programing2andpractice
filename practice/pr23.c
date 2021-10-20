#include <stdio.h>

int main(){
    int arr[5]={0, 0, 0, 0, 0};
    int *p;
    p=arr;
    scanf("%d", arr);
    p++;
    scanf("%d", p);
    for(int i=0; i<5; i++)
        printf("%d\n", p[i]);


}