#include <stdio.h>

void print_bit(int a){
    int n=sizeof(int)*8;
    int mask=1<<(n-1);
    for(int i=0; i<n; i++){
        putchar(((a&mask)==0)?'0':'1');
        a<<=1;
        if((i+1)%8==0&&i<n)
            putchar(' ');
    }
    printf("\n");
}
int main(){
    print_bit(0x9d^0xbd);
    print_bit((0x9d^0xbd)^0xbd);
    print_bit(0xee^0x5d);
    print_bit((0xee^0x5d)^0x5d);
}