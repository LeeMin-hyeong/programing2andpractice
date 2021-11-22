#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Eng{
    char word[15];
    char meaning[30];
    struct Eng *next;
};

void quiz(){
    system("clear");
    printf(">> 영어 단어 맞추기 <<\n");
    struct Eng *head=malloc(sizeof(struct Eng));
    head->next=NULL;

    FILE *fp=fopen("./dic.txt", "rb");
    fseek(fp, 0, SEEK_END);
    int end=ftell(fp);
    rewind(fp);
    while(ftell(fp)!=end){
        char a[15], b[30];
        struct Eng *words=malloc(sizeof(struct Eng));
        words->next=head->next;
        fscanf(fp, "%s %s\n", a, b);
        strcpy(words->word, a);
        strcpy(words->meaning, b);
        head->next=words;
    }
    fclose(fp);


    while(1){
        struct Eng *curr=head->next;
        char temp[30];
        int count=0;
        while(curr->next!=NULL){
            if(strcmp(curr->word, curr->next->word)>0){
                strcpy(temp, curr->word);
                strcpy(curr->word, curr->next->word);
                strcpy(curr->next->word, temp);
                strcpy(temp, curr->meaning);
                strcpy(curr->meaning, curr->next->meaning);
                strcpy(curr->next->meaning, temp);
                count++;
            }
            curr=curr->next;
        }
        if(count==0)
            break;
    }

    struct Eng *curr=head->next;
    float count=0, try=0;
    while(curr!=NULL){
        char input[15];
        printf("%s -> ", curr->meaning);
        scanf("%s", input);
        getchar();
        if(!strcmp(curr->word, input)){
            printf("correct!\n");
            count++;
            try++;
        }
        else if(!strcmp(input,".quit"))
            break;
        else{
            printf("incorrect!\n");
            try++;
        }
        curr=curr->next;
    }
    printf("영어 단어 맞추기 결과 : %.0f점\n", count/(try?try:1)*100);
    getchar();
}

int main(){
    char input[100];
    while(1){
        system("clear");
        printf(">> 영어 단어 맞추기 프로그램 <<\n");
        printf("1. 영어 단어 맞추기\t2.프로그램 종료\n\n");
        printf("번호를 선택하세요 : ");
        scanf("%s", input);
        getchar();
        if(!strcmp(input, "1"))
            quiz();
        else if(!strcmp(input, "2"))
            break;
    }
    system("clear");
}
