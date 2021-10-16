#include <stdio.h>

void func();
int sum();

int main()
{
    func(sum);
}

void func(int (*fp)(int, int))
{
    int a,b;
    scanf("%d %d", &a, &b);
    int res = 0;
    res = fp(a,b);
}

int sum(int a, int b)
{
    return a+b;
}