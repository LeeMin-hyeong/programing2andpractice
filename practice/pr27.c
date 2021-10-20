#include<stdio.h>
typedef enum color{
    red =-2,
    green,
    blue=1
}color;

typedef enum season{
    spring,
    summer,
    fall,
    winter
}season;

int main(void){
    season sea;
    sea=fall;
    printf("%d",sea+green);
}