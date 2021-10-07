#include <stdio.h>
#include <string.h>

struct info{
    char name[20];
    double score;
    int credit;
};
void input_data();
void scholarship();

int main(void){
    struct info students[5];
    input_data(students, 5);
    scholarship(students, 5);
    return 0;
}

void input_data(struct info *a, int n){
    for(int i=0; i<n; i++){
        printf("이름 : ");
        scanf("%s", a[i].name);
        printf("평점 평균 : ");
        scanf("%lf", &a[i].score);
        printf("취득 학점 : ");
        scanf("%d", &a[i].credit);
    }
}

void scholarship(struct info *a, int n){
    printf("\n장학생\n");
    for(int i=0; i<n; i++){
        if(a[i].score>=4.3&&a[i].credit>=20)
            printf("이름 : %s\n평점 평균 : %.2lf\n취득 학점 : %d\n\n", a[i].name, a[i].score, a[i].credit);
    }
}