#include <stdio.h>
#include <iostream>

//typedef struct _person person_t;
typedef struct {
    char name[20];
    int bb;
} person;

//struct _person p;
int main(void)
{
  //typedefの練習
  typedef int iiint;
  iiint a = 11111;
  printf("%d\n",a);

  //構造帯の練習
  person p = {'a','b'};
  p.bb = 333;
  printf("%s\n",p.name);
  printf("%d\n",p.bb);
  // ポインタの練習

  int *b = &a;
  printf("%p\n",&b);

}
