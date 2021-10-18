#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int sum=0;
    for(int i=1; i<argc; i++){
        int temp=0;
        temp=atoi(argv[i]);
        sum+=temp;
    }
    printf("평균은 %d입니다.\n", sum/(argc-1));
}