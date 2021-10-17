#include <stdio.h> 
struct student { 
    char name[20]; 
    double grade; 
}; 
void c (struct student* stu) { 
    printf("이름을 입력하세요 : "); 
    scanf("%s", stu->name); 
    printf("학점을 입력하세요 : "); 
    scanf("%lf", &(stu->grade)); 
} 
int main () { 
    struct student stu; 
    c(&stu); 
    printf("%s %f", stu.name, stu.grade); 
    return 0; 
} 
