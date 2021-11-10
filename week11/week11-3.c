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

    struct employee employee[n];
    FILE *fp=fopen("employee.txt", "wa");

    for(int i=0; i<n; i++){
        scanf("%s %d %d %d", employee[i].name, &employee[i].id, &employee[i].age, &employee[i].salary);
        fprintf(fp, "%s %d %d %d\n", employee[i].name, employee[i].id, employee[i].age, employee[i].salary);
    }
    fclose(fp);
}