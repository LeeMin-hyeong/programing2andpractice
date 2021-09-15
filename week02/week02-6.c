#include <stdio.h>

void func(int a, int b, int c[]){
    c[0]=a/b;
    c[1]=a%b;
}

int main(){
    int save[2];
    int num1, num2;

    scanf("%d %d", &num1, &num2);
    func(num1, num2, save);

    printf("몫 : %d\n나머지 : %d\n", save[0], save[1]);
}