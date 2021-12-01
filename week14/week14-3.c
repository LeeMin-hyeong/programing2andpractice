#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

void handler(int sig){
    printf("%d번 신호가 발생하였습니다.\n", sig);
    printf("0으로 나눌 수 없습니다.\n");
    printf("프로그램을 종료합니다.\n");
    exit(1);
}

int main(){
    int i, j;

    signal(SIGFPE, handler);
    scanf("%d", &j);
    i = 7 / j;
    printf("%d", i);
    return 0;
}