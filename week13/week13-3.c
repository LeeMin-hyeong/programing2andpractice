#include <stdio.h>
#include <stdlib.h>
#define N 10

struct linked_list {
    char d;
    struct linked_list *next;
};

typedef struct linked_list ELEMENT;
typedef ELEMENT *LINK;

LINK string_to_list(char s[]) {
    int i=0;
    LINK head=malloc(sizeof(ELEMENT));
    LINK curr=head;
    while(s[i]!='\0'){
        LINK add=malloc(sizeof(ELEMENT));
        curr->next=add;
        add->d=s[i];
        curr=curr->next;
        i++;
    }
    return head->next;
}

void print_list(LINK head) {

    if (head == NULL)
        printf("NULL \n");
    else {
        printf("%c --> ", head -> d);
        print_list(head -> next);
    }
}

int main(void) {
    char input[N];
    LINK h;

    printf("문자열 입력: ");
    scanf("%s", input);
    h = string_to_list(input);
    printf("변환 리스트 결과 : \n");
    print_list(h);

    return 0;
}