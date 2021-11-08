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
        if(i%4==0)
            printf("\t\t\t");
        if(a[i]==0)
            printf("   ");
        else
            printf("%3d", a[i]);
        if(i%4==3)
            printf("\n");
    }
}

int movement(int a[], int b){
    int ch, i, j=1;
    for(i=0; i<16; i++)
        if(a[i]==0)
            break;

    if(b=='l'&&i%4!=0){ //left
        a[i]=a[i-1];
        a[i-1]=0;
    }
    else if(b=='i'&&i<12){ //up
        a[i]=a[i+4];
        a[i+4]=0;
    }
    else if(b=='j'&&i%4!=3){ //right
        a[i]=a[i+1];
        a[i+1]=0;
    }
    else if(b=='k'&&i>3){ //down
        a[i]=a[i-4];
        a[i-4]=0;
    }
    else if(b=='q')
        j=0;
    else
        j=2;
    
    return j;
}

void random_puzzle(int a[]){
    srand(time(NULL));
    for(int i=0; i<rand(); i++)
        movement(a, rand()%4+'i');
}

int check_puzzle(int a[]){
    int count=0;
    for(int i=0; i<15; i++)
        if(a[i]==i+1)
            count++;
    if(count==15)
        return 1;
    else
        return 0;
}

int main(int argc, char *argv[]){
    int count=0, puzzle[16]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 0};
    system("clear");
    if(atoi(argv[1])==2)
        random_puzzle(puzzle);
    else if(atoi(argv[1])!=1)
        return 0;

    while(1){
        print_puzzle(puzzle);
        int x=movement(puzzle, getch());
        if(x==1)
            count++;
        else if(x==0)
            break;

        if(check_puzzle(puzzle)&&count>0){
            print_puzzle(puzzle);
            printf("\t\t\t  축하합니다\n");
            system("sleep 3");
            system("clear");
            break;
        }
    }
}