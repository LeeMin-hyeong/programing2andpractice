#include<stdio.h>
#include<stdarg.h>

int add(int num, ...){
    int sum=0;
    va_list ap;
    va_start(ap, num); //1
    for(int i=0;i<num;i++)
        sum+=va_arg(ap, int); //2
    va_end(ap); //3
    return sum;
}

int main(){
    printf("%d\n", add(3, 4, 5, 6));
}