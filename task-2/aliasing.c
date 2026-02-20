#include <stdio.h>
int main() {
  int num = 100;
  int *a = &num;
  int *b = &num;
  *a = 201;
  printf("sizeof int is %ld", sizeof(int));
  printf("a = %p\n", a);
  printf("b = %p\n", b);
  printf("b sees: %d\n", *b);
  return 0;
}