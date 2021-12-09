#include<stdio.h>
typedef struct databank{
    char s[100];
    int top;
}databank;
void reset(databank *stk);
void push(char c,databank *stk);
char pop(databank *stk);


int main(void){
    char str[] = "databank";
    int i;
    databank s;
    reset(&s);
    for(i=0;i<3;++i)
        push(str[i],&s);
    for(i=0;i<2;++i)
        putchar(pop(&s));
    putchar('\n');
    return 0;
}

void reset(databank *stk){
    stk -> top = -1;
}
void push(char c,databank *stk){
    stk -> top++;
    stk -> s[stk -> top] = c;
}
char pop(databank *stk){
    stk->top--;
    return(stk->s[stk -> top]);
}
