#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct member{
    char *name;
    char *email;
    char *phone_number;
};
struct member m[10];

int count=0;

void add_member();
void search();
void search_all();

int main(){
    int run=1, input;
    while(run){
        printf("연락처 관리 프로그램\n");
        printf("현재 연락처 수 : %d/10\n", count);
        printf("1) 연락처 입력\n");
        printf("2) 이름 검색\n");
        printf("3) 전체 검색\n");
        printf("4) 종료\n");
        scanf("%d", &input);
        getchar();
        switch(input){
            case 1:
                add_member(m);
                break;
            case 2:
                search(m);
                break;
            case 3:
                search_all(m);
                break;
            case 4:
                run=0;
                break;
            default:
                printf("다시 입력하세요\n\n");
                break;
        }
    }
}

void add_member(struct member *m){
    char name_temp[20], email_temp[50], phone_number_temp[11]; 
    if(count<10){
        printf("이름 : ");
        scanf("%s", name_temp);
        printf("이메일 : ");
        scanf("%s", email_temp);
        printf("전화번호 : ");
        scanf("%s", phone_number_temp);
        printf("\n");
        m[count].name=(char *)malloc(strlen(name_temp)+1);
        strcpy(m[count].name, name_temp);
        m[count].email=(char *)malloc(strlen(email_temp)+1);
        strcpy(m[count].email, email_temp);
        m[count].phone_number=(char *)malloc(strlen(phone_number_temp)+1);
        strcpy(m[count].phone_number, phone_number_temp);
        count++;
    }else
        printf("입력 가능한 연락처 수는 10개입니다.\n\n");
}

void search(struct member *m){
    char name_temp[20];
    int print_count=0;
    printf("이름 : ");
    scanf("%s", name_temp);
    for(int i=0; i<count; i++){
        if(strcmp(m[i].name,name_temp)==0){
            printf("이메일 : %s\n전화번호 : %s\n\n", m[i].email, m[i].phone_number);
            print_count++;
        }
    }
    if(print_count==0)
        printf("해당 이름의 연락처가 존재하지 않습니다.\n\n");
}

void search_all(struct member *m){
    for(int i=0; i<count; i++)
        printf("이름 : %s\n이메일 : %s\n전화번호 : %s\n\n", m[i].name, m[i].email, m[i].phone_number);
}