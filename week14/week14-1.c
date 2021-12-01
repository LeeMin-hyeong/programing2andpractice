#include <stdio.h>
#include <stdarg.h>

int add(int count, ...){
    va_list ap;
    va_start(ap, count);
    int sum=0;
    for(int i=0; i<count; i++)
        sum+=va_arg(ap, int);
    va_end(ap);
    return sum;
}

int main(){
    printf("%d", add(3, 4, 5, 6));
}