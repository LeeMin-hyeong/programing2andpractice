#include <stdio.h>
#include <time.h>

int main(){
    struct tm *t;
    time_t now;
    now=time(NULL);
    t=localtime(&now);
    
    printf("오늘은 %d년 %d월 %d일 %s입니다.\n", t->tm_year+1900, t->tm_mon+1, t->tm_mday, t->tm_wday==0?"일요일":t->tm_wday==1?"월요일":t->tm_wday==2?"화요일":t->tm_wday==3?"수요일":t->tm_wday==4?"목요일":t->tm_wday==5?"금요일":"토요일");
    printf("현재 시간은 %s %d시 %d분 %d초입니다.\n", t->tm_hour>11?"오후":"오전", t->tm_hour>12?t->tm_hour-12:t->tm_hour, t->tm_min, t->tm_sec==61||t->tm_sec==60?0:t->tm_sec);
}