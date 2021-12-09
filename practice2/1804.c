#include <stdio.h>
#include <stdlib.h>

struct linked_list {
    char d;
    struct linked_list *next;
};

typedef struct linked_list ELEMENT;
typedef ELEMENT *LINK;


LINK string_to_list(char s[]){	
    
    LINK head = NULL;
    LINK newElement;
    LINK current;
    int cnt = 0;
    
    while(s[cnt] != NULL){
        newElement = malloc(sizeof(ELEMENT));
        newElement->d = s[cnt];
        newElement->next = NULL;
        if(head == NULL)
            head=newElement; //1 
        else{
            current = head;
            while(current->next != NULL)
                current = current->next;
            current->next=newElement; //2     
        }
        cnt++;
    }
    return head;
}

void print_list(LINK head) {

    if (head == NULL)
        printf("NULL \n");
    else {
        printf("%c --> ", head -> d);
        print_list(head -> next);
    }
}

int main(){
    print_list(string_to_list("hello"));
}