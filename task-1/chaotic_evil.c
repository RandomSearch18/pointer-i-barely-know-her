#include <stdio.h>
int main() {
  int x = 10;
  int *p; // Uninitialised pointer!
  p = &x;
  *p = 20; // What happens here?
  printf("%d\n", x);
  return 0;
}