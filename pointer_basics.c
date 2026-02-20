#include <stdio.h>
int main() {
  int x = 10;
  int *p = &x;
  // (void*) casting is used to print addresses portably
  printf("x value: %d\n", x);
  printf("x address: %p\n", (void*)&x);
  printf("p value (address stored): %p\n", (void*)p);
  printf("value at p: %d\n", *p);
  *p = 20;
  printf("x value after changing *p: %d\n", x);

  int y = 51;
  p = &y; // Change where p points
  printf("Value at p is now: %d\n", *p);
  return 0;
}