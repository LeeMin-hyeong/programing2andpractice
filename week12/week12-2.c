#include <stdio.h>

struct employee{
    char name[10];
    int id;
    int age;
    int salary;
};

int main(){
    struct employee employee;
    FILE *fp=fopen("employee.bin", "rb");
    int i=1;
    fseek(fp, 0, SEEK_END);
    int end=ftell(fp);
    rewind(fp);

    while(ftell(fp)!=end){
        fscanf(fp, "%s %d %d %d\n", employee.name, &employee.id, &employee.age, &employee.salary);
        printf("%d번째 직원 : %s %d %d %d\n", i, employee.name, employee.id, employee.age, employee.salary);
        i++;
    }
    fclose(fp);
}