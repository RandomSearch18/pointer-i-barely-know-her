#include <stdio.h>
void set_null(int **p) {
  *p = NULL; // We are changing the local copy of the address!
}
int main() {
  int x = 10;
  int *ptr = &x;
  printf("Before: %p\n", (void*)ptr);
  set_null(&ptr);
  printf("After: %p\n", (void*)ptr);
  if (ptr == NULL) {
    printf("Success: Pointer is NULL\n");
  } else {
    printf("Fail: Pointer still points to x\n");
  }
  return 0;
}