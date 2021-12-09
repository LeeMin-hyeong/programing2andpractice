 #include <stdio.h>
int main(void)
{

    int i = 100, j = 200, *p = &i, **q = &p;
    *q = &j;
    printf("*p = %u, **q = %u, p = %u, *q = %u, q = %u", *p, **q, p, *q, q);
    return 0;
}