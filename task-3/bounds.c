#include <stdio.h>
int main() {
  int arr[] = {10, 20, 30};
  int *p = arr;
  // Accessing index 5 (out of bounds)
  printf("%x\n", *(p + 5));
  printf("%x\n", *(p + 6));
  printf("%x\n", *(p + 7));
  printf("%x\n", *(p + 8));
  printf("%x\n", *(p + 9));
  printf("%x\n", *(p + 20));
  return 0;
}