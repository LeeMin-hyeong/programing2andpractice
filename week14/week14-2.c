#include <stdio.h>
#include <stdarg.h>
#include <string.h>

void myprintf(char *format, ...){
    va_list ap;
    va_start(ap, format);

    while(*format){
        if(!strncmp("%d", format, 2)){
            int a, b=1, temp, count;
            a=va_arg(ap, int);
            temp=a;
            while(a!=0){
                a/=10;
                count++;
            }
            for(int i=0; i<count-1; i++)
                b*=10;
            for(int i=0; i<count; i++){
                putchar(temp/b+'0');
                temp%=b;
                b/=10;
            }
            // char integer[10];
            // sprintf(integer, "%d", va_arg(ap, int));
            // for(int i=0; integer[i]!='\0'; i++)
            //     putchar(integer[i]);
            format+=2;
        }
        else if(!strncmp("%c", format, 2)){
            putchar(va_arg(ap, int));
            format+=2;
        }
        else{
            putchar(*format);
            format++;
        }
    }

    va_end(ap);
}

int main(){
    myprintf("gender : %c, age : %d \n", 'M', 8);
}