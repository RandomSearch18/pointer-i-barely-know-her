#include <stdio.h>
void set_zero(int *p) {
  *p = 0;
}
int main() {
  int x = 10;
  int y = 20;
  int* p = &x;
  p = &y; // Reassignment!
  set_zero(p);
  printf("x = %d\n", x);
  printf("y = %d\n", y);
  return 0;
}