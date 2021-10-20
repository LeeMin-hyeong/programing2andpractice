#include <stdio.h>

struct a{
        int b;
        char c[3];
        char d;
    };
struct a a;

void f();
int main(){
    scanf("%s", a.c);
    printf("%s\n", a.c);
    f(&a);

}

void f(struct a *a){
    scanf("%s", &(a->c));
    printf("%s\n", a->c);
}