#include<stdio.h>
int main()
{
	
    int a=0xF0F0F0F0;
    int b=0xA0B0C0D0;
    b=a&b;
    printf("%d\n",b);
    a=a|b;
    printf("%d\n",a);
    ~a;
    printf("%d\n",a);

}
