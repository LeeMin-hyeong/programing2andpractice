#include<stdio.h>
typedef struct{
    char name[20]; int id; int age; int salary;
}employee;
int main(){
    employee emp;
    FILE *fp;
    int i = 0;
    fp = fopen("employee.bin","rb");
    while(fread(&emp, sizeof(emp), 1, fp))//fread 함수 호출
    {
        printf("%d번째 직원 : %s %d %d %d\n",i,emp.name,emp.id,emp.age,emp.salary);
        i++;
    }
    fclose(fp);
    return 0;
}