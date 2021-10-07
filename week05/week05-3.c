#include <stdio.h>
int main(void)
{
   char s[] = "abc";
   const char *p = s;
   *p = 'A'; //상수 포인터 : 주소 변경은 가능하지만 값을 변경할 수 없음
   printf("%s\n", s);
   return 0;
}