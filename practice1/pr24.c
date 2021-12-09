#include<stdio.h>

struct usa{
  char name[50];
  int price;
};
struct korea{
  char name[50];
  int price;
};

int main(void)
{
  struct usa f_usa;
  struct korea f_korea ;
  void * dp = &f_korea;

  scanf("%s", dp -> name); //--- 1 
  scanf("%d", &f_korea.name); // --- 2
  f_usa.price = f_korea.price; // --- 3
  printf("%d\n", dp->price); // --- 4
  f_usa = f_korea; // --- 5
  printf("%s\n",f_usa.name); // --- 6 

  return 0;
}