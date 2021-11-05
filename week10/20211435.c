#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <time.h>

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

void print_puzzle(int a[]){
    system("clear");
    for(int i=0; i<16; i++){
        if(i%4==0) printf("\t\t\t");
        if(a[i]==0) printf("   ");
        else printf("%3d", a[i]);
        if(i%4==3) printf("\n");
    }
}

void random_puzzle(int a[]){
    srand(time(NULL));
    for(int i=0; i<16; i++){
        a[i]=rand()%16;
        for(int j=0; j<i; j++){
            if(a[i]==a[j]){
                i--;
                break;
            }
        }
    }
}

int check_puzzle(int a[]){
    int count=0;
    for(int i=0; i<15; i++)
        if(a[i]==i+1) count++;
    if(count==15) return 1;
    else return 0;
}

int movement(int a[]){
    int ch, i, j=0;
    for(i=0; i<16; i++)
        if(a[i]==0) break;
    ch=getch();

    if(ch=='j'&&i%4!=0){
        a[i]=a[i-1];
        a[i-1]=0;
    }
    else if(ch=='k'&&i<12){
        a[i]=a[i+4];
        a[i+4]=0;
    }
    else if(ch=='l'&&i%4!=3){
        a[i]=a[i+1];
        a[i+1]=0;
    }
    else if(ch=='i'&&i>3){
        a[i]=a[i-4];
        a[i-4]=0;
    }
    else if(ch=='q')
        j=1;
    else
        j=2;
    
    return j;
}

int main(int argc, char *argv[]){
    int puzzle[16], count=0;
    system("clear");
    if(atoi(argv[1])==1){
        for(int i=0; i<15; i++)
            puzzle[i]=i+1;
        puzzle[15]=0;
    }
    else if(atoi(argv[1])==2)
        random_puzzle(puzzle);
    else return 0;
    
    while(1){
        print_puzzle(puzzle);
        int x=movement(puzzle);
        if(x==1) break;
        else if(x==2) continue;
        else count++;

        if(check_puzzle(puzzle)&&count>0){
            print_puzzle(puzzle);
            printf("\t\t\t  축하합니다\n");
            system("sleep 3");
            system("clear");
            break;
        }
    }
}