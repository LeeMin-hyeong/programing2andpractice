#include <stdio.h>

int main(){
    char input[100];
    int i=0, n=8*sizeof(char), mask=1<<(n-1);
    scanf("%[^\n]s", input);
    while(input[i]!='\0'){
        for(int j=0; j<n; j++){
            putchar(((input[i]&mask)==0)?'0':'1');
            input[i]<<=1;
        }
        putchar(' ');
        i++;
    }
    putchar('\n');
}