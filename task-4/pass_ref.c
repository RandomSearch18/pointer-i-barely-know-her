#include <stdio.h>
// This function expects an address (pointer)
void increment(int *p) {
  // Go to the address 'p' and increment the value there
  (*p)++;
}
int main() {
  int x = 5;
  printf("Before: %d\n", x);
  // We pass the address of x
  increment(&x);
  printf("After: %d\n", x);
  return 0;
}