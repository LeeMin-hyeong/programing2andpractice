#include <stdio.h>

int a();
int f();
int test(int f (int));

int main(){
    test(a);
}

int test(int f (int)){
    int x;
    (f==(*a))?(x=1):(x=2);
    printf("%d", f(x));
}

int a(int x){
    return x*3;
}

int f(int x){
    return x*4;
}