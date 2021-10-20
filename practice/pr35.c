#include <time.h>
#include <stdio.h>


int main(){
    struct tm *t;
    time_t now;
    now=time(NULL);
    t=localtime(&now);
    printf("오늘은 %d년", t->tm_year+1900);
}