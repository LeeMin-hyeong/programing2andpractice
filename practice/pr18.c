#include<stdio.h>

int a(int x);
int f(int x);
int test(int f (int));

int main(void){
    test(a);
}

int test(int f (int)){
    int x;
    (f==(*a))?(x=1):(x=2);
    printf("%d\n",f(x));
    printf("%#x\n", *f);
    printf("%#x\n", *a);

}

int a(int x){
    return x*3;
}

int f(int x){
    return x*4;
}