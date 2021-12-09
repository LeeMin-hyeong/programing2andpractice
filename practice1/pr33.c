#include <stdio.h>

struct aa{
    char name[10];
    int a;
};

void f(struct aa *stu){
    scanf("%s", stu->name);
    scanf("%d", stu->a);
}

int main(){
    struct aa stu;
    f(&stu);
}