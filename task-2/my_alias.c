#include <stdio.h>
int main() {
  int a = 21;
  int b = 67;
  int c = 1337;

  int *p1 = &a;
  int *p2 = &b;

  // Reassignment
  p1 = p2;
  *p1 = 6767;

  printf("a=%d, b=%d, c=%d\n", a, b, c);
}