#include <stdio.h>
#include <signal.h>

void handler(int sig){
    printf("시그널 핸들러 호출\n");
}
int main(void){
    while(1){
        signal(SIGINT, SIG_IGN);
        printf("컨트롤 c를 누른 후, 엔터 키를 누르세요\n");
        getchar();
        signal(SIGINT,SIG_DFL);
        printf("컨트롤 c를 누른 후, 엔터 키를 누르세요\n");
        getchar();
        signal(SIGINT,handler);
        printf("컨트롤 c를 누른 후,엔터 키를 누르세요\n");
        getchar();
    }
    return 0;
}
