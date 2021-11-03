#include <stdio.h>
#include <termio.h>

int getch(void) {
    int ch;
    struct termios buf;
    struct termios save;
    tcgetattr(0, &save);
    buf = save;
    buf.c_lflag &= ~(ICANON | ECHO);
    buf.c_cc[VMIN] = 1;
    buf.c_cc[VTIME] = 0;
    tcsetattr(0, TCSAFLUSH, &buf);
    ch=getchar();
    tcsetattr(0, TCSAFLUSH, &save);
    return ch;
}

int main(){
    int ch;
    system("ls");
    printf("몇 초 후에 화면을 지울까요? : ");
    ch=getch();
    printf("%d\n", ch-'0');
    sleep(ch-'0');
    system("clear");
}