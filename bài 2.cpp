#include <stdio.h>
#include <stdlib.h>

int main() {
 
  int *arr = malloc(sizeof(int) * 10);

  
  for (int i = 0; i < 10; i++) {
    printf("Nhap so nguyen thu %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

 
  for (int i = 0; i < 10; i++) {
    printf("So nguyen thu %d: %d\n", i + 1, arr[i]);
  }

 
  free(arr);

  return 0;
}


