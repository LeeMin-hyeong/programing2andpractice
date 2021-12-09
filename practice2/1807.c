#include<stdio.h>
#include<string.h>
int main(void){
    char list[3][50] = {"Java and C programing","C 99","A book on C"};
    char input[50];
    char *ptr;
    int i;
    printf("검색 문장을 입력하세요 :");
    scanf("%s",input);
    for(i=0;i<3;i++){
        ptr = strstr(list[i],input);
        if(ptr !=NULL)
            printf("%s ",ptr);
    }
    return 0;
}