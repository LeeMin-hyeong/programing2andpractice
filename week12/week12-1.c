#include <stdio.h>

struct employee{
    char name[10];
    int id;
    int age;
    int salary;
};

int main(){
    int n;
    printf("입력할 직원 수 : ");
    scanf("%d", &n);

    struct employee employee;
    FILE *fp=fopen("employee.bin", "wb");

    for(int i=0; i<n; i++){
        scanf("%s %d %d %d", employee.name, &employee.id, &employee.age, &employee.salary);
        fwrite(&employee, sizeof(employee), 1, fp);
    }
    fclose(fp);
}