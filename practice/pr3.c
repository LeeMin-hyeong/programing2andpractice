#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Name{
    char *name;
};

struct Name stu1={"hong"};
struct Name stu2={"joe"};

int main(){
    stu1.name=(char *)malloc(strlen("lee")+1);
    strcpy(stu1.name, "lee");
    printf("%s\n", stu1.name);
    if(!strcmp(stu1.name, stu2.name))
        printf("두 구조체는 같습니다.");
    else
        printf("두 구조체는 다릅니다.");
}