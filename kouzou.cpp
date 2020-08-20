#include <stdio.h>
#include <iostream>

//typedef struct _person person_t;
typedef struct {
    char name[20];
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
  printf("%s\n",p.name);
  // ポインタの練習

  int *b = &a;
  printf("%p\n",&b);

}
