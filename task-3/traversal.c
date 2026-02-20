#include <stdio.h>

// int get_size(int array[]) {
//   return sizeof(array);
// }

int main() {
  int arr[] = {10, 20, 30, 40, 50};
  
  int len = sizeof(arr) / sizeof(int);
  printf("Length: %d\n",len);

  printf("normal for loop: ");
  for (int i=0; i<len; i++) {
    printf("%d, ", arr[i]);
  }
  printf("\n");

  printf("accessing *(arr + i): ");
  for (int i=0; i<len; i++) {
    printf("%d, ", *(arr + i));
  }
  printf("\n");

  printf("accessing p: ");
  for (int i=0, *p=arr; i<len; i++, p++) {
    printf("%d, ", *p);
  }
  printf("\n");

  // Advanced C wizardry
  printf("advanced C wizardry: ");
  int *p = arr;
  int *end = arr + len;
  while (p < end) {
    printf("%d, ", *p);
    p++;
  }
  printf("\n");
}