#include <stdio.h>
void print_value(const int *p) {
  printf("Value: %d\n", *p);
}
void try_change(const int *p) {
  int *hack = (int *)p; // Cast away the const
  *hack = 100;
}
int main() {
  int x = 42;
  print_value(&x);
  try_change(&x);
  print_value(&x);
  return 0;
}