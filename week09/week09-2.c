#include <stdio.h>
#define PRN_3(x, y, z) printf(#x" : %.1f, "#y" : %.1f, "#z" : %.1f\n", x, y, z)
int main(){
    float x=1.1, y=2.2, z=3.3;
    float a=1.1, b=2.2, c=3.3;
    PRN_3(x, y, z);
    PRN_3(a, b, c);
}