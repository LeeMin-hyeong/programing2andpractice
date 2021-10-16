#include <stdio.h>

int main(){
    //&a==1000 &p==2000 &q==3000 &r==4000
    double a=100, *p=&a, **q=&p, ***r=&q;
    printf("%u %u %u %u %u", &a+1, p+1, q+1, r+1, *r+1);
}
//1008 1008 2008 3008 2008