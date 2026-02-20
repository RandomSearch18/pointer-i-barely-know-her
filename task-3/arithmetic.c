#include <stdio.h>
int main() {
  double arr[] = {10, 20, 30};
  double *p = arr;
  printf("p:   %p\n", (void*)p);
  printf("p+1: %p\n", (void*)(p+1));
  // We cast to char* to measure the difference in bytes
  printf("difference: %ld bytes\n",
  (char*)(p+1) - (char*)p);
  return 0;
}